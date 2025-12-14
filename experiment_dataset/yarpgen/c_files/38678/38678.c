/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38678
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_0;
    var_17 += (max(((((((var_6 ? 5 : var_8))) && ((min(var_8, var_3)))))), (~var_14)));
    var_18 = var_4;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_19 -= max(((((arr_2 [i_0] [i_0]) || (arr_0 [i_0])))), (max((arr_0 [i_0]), (arr_2 [i_0] [i_0]))));
        var_20 = 9221120237041090560;
        var_21 *= ((max((arr_0 [i_0]), ((~(arr_1 [i_0]))))));
    }
    var_22 = var_4;
    #pragma endscop
}

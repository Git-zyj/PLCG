/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192798
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, var_3));
    var_12 &= ((230 ? 992389477 : var_5));

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_13 = ((-(arr_2 [i_0 - 1] [i_0 + 1])));
        arr_3 [i_0] = var_1;
    }
    var_14 = (var_8 + var_9);
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50950
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_14;
    var_21 = (max(var_21, var_8));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_4 [i_0] [i_0] |= (arr_1 [i_0]);
        arr_5 [0] [i_0] = (min(((((arr_2 [i_0] [i_0]) >= (arr_2 [i_0] [i_0])))), (min((min((arr_1 [i_0]), (arr_0 [i_0] [i_0]))), (arr_1 [i_0])))));
    }
    var_22 &= (min(((-(~1073741823))), (((((var_5 ? var_11 : var_4))) ? (max(var_6, var_9)) : (~var_13)))));
    #pragma endscop
}

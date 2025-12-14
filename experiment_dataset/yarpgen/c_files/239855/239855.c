/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239855
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        var_20 = (((arr_0 [i_0 + 1] [13]) * var_5));
        arr_2 [10] [i_0 + 2] = (!(arr_1 [i_0 - 4] [i_0 - 4]));
        var_21 = (min(var_21, (1 > 18446744073709551602)));
        arr_3 [i_0] [15] &= (arr_1 [i_0] [i_0]);
    }
    var_22 = ((((min(((var_11 ? var_18 : 1)), -18))) ? var_1 : (max(var_8, 1))));
    var_23 = ((var_17 ? (((var_6 ^ 1) ? (~var_13) : (max(var_16, 1)))) : var_14));

    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_6 [i_1] = ((1971382876 + ((max((arr_4 [i_1]), (arr_4 [i_1]))))));
        var_24 -= ((((min((max(18, 1)), var_13))) ? ((max(1, 1))) : ((0 ? (var_18 > var_7) : (((arr_5 [i_1]) ? var_13 : (arr_1 [i_1] [11])))))));
    }

    for (int i_2 = 2; i_2 < 16;i_2 += 1)
    {
        var_25 = (max(((145 ? (arr_0 [i_2 - 1] [i_2]) : (arr_0 [i_2 - 1] [i_2]))), (1 || 480)));
        arr_9 [i_2] [i_2] = var_10;
        arr_10 [i_2] = ((!((min((arr_1 [i_2] [i_2 - 2]), 1)))));
    }
    #pragma endscop
}

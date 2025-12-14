/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237910
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_19 = (min(var_19, (4294967295 >= 2889491815)));
        var_20 = (arr_0 [i_0] [9]);
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        var_21 = ((var_11 | ((217 ? (arr_2 [0] [i_1 - 1]) : 532406208489854607))));
        arr_6 [5] = ((-(min((arr_1 [i_1] [i_1]), (arr_1 [i_1 - 1] [i_1 - 1])))));
        var_22 = ((((min((-9223372036854775807 - 1), var_4))) ? ((8860900322327682590 ? (10 || 4426) : (arr_3 [i_1] [i_1 - 1]))) : (arr_0 [i_1 - 1] [i_1])));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    var_23 = (max((arr_10 [i_1 - 1] [i_2]), (arr_10 [i_1 - 1] [i_2])));
                    arr_14 [8] [10] [6] [i_3] |= max(-1, 34359738367);
                    arr_15 [i_2] = ((((max(274877904896, 9636518720348384891))) ? -27 : (arr_4 [i_1])));
                }
            }
        }
    }
    var_24 = (!var_17);
    var_25 = (((min(var_3, (min(6788587422722311445, 0))))) ? ((((var_16 ^ var_1) | (var_6 + var_18)))) : ((min(-136604885812346841, 2389843566))));
    var_26 = var_9;
    #pragma endscop
}

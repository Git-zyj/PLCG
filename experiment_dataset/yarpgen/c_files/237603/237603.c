/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237603
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= ((var_10 & var_2) > (var_4 && var_11));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_13 = ((~((~(arr_1 [i_0])))));
        arr_3 [i_0] = (min((min((arr_1 [i_0]), (min(var_2, (arr_2 [i_0]))))), (max(-1, (arr_1 [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_14 = ((((min(((min((arr_5 [7]), var_1))), ((-(arr_1 [i_1 - 2])))))) ? ((max(var_0, var_9))) : ((var_1 ? (arr_6 [i_0] [8] [i_2]) : var_5))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_15 = var_7;
                                var_16 = (min((((max(230274877, (arr_15 [i_0] [i_0] [i_0] [i_0]))))), (arr_10 [i_0] [i_1 + 1] [i_2] [12] [i_4])));
                                var_17 |= (((arr_7 [20] [17] [i_2] [i_3 - 2]) | (min((arr_9 [i_1 + 1] [i_3 - 1] [i_4] [i_4] [i_4] [i_4]), (arr_12 [i_1 + 1] [i_3 - 1] [i_3 - 1] [i_3 + 2] [i_3])))));
                            }
                        }
                    }
                    var_18 = ((+(max((arr_7 [i_1] [i_1] [i_1] [i_2]), (((arr_0 [i_2]) | (arr_10 [i_0] [8] [i_1] [i_2] [i_2])))))));
                    var_19 = (min(((((((arr_11 [5] [i_1 + 1] [5] [i_2]) ? (arr_5 [i_2]) : 330988310))) ? 903863255 : (arr_4 [i_0] [i_0]))), ((var_1 * (arr_0 [i_0])))));
                }
            }
        }

        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            var_20 = (max(var_20, var_0));
            arr_18 [i_0] [i_5] = ((((var_2 << ((((((~(arr_8 [i_5]))) + 113)) - 19)))) << ((((((((~(arr_6 [i_0] [i_5] [i_5]))))) + 23)) - 21))));
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        var_21 |= (((arr_19 [i_6]) ? (((arr_19 [i_6]) ^ var_2)) : (arr_19 [i_6])));
        arr_21 [22] |= (var_5 ? 81 : (arr_20 [i_6]));
        var_22 = (((arr_20 [i_6]) < (arr_19 [i_6])));
    }
    for (int i_7 = 0; i_7 < 0;i_7 += 1)
    {
        var_23 = (((((((min(var_2, (arr_0 [i_7])))) ? (arr_5 [i_7]) : ((var_5 ? (arr_19 [i_7]) : (arr_5 [i_7 + 1])))))) ? 175 : (((min((arr_17 [i_7] [i_7]), (arr_20 [i_7]))) / (((max(var_0, (arr_0 [i_7])))))))));
        arr_24 [12] |= (+(max((arr_19 [i_7]), (!191))));
        arr_25 [i_7] = (((((((min((arr_7 [i_7] [i_7 + 1] [i_7] [9]), 73))) ? (arr_22 [i_7]) : (arr_1 [i_7 + 1])))) ? 174 : (arr_11 [13] [i_7 + 1] [i_7 + 1] [i_7 + 1])));
        var_24 = (((min((arr_11 [i_7] [i_7 + 1] [i_7] [i_7]), (((1 ? var_5 : (arr_8 [i_7]))))))) ? ((~(max(1, var_6)))) : (((~(arr_1 [i_7])))));
    }
    var_25 = var_0;
    #pragma endscop
}

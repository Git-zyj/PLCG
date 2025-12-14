/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206371
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((-1465955545 ? ((var_9 ? var_10 : (var_8 || 89))) : ((((29 + var_6) ? ((var_0 << (var_5 - 1927266085))) : var_4)))));

    for (int i_0 = 2; i_0 < 11;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0 - 1] [i_0] = arr_2 [i_0];
        var_15 = (max(var_15, ((((((max(var_1, var_1)) | 1))) || ((min((((arr_2 [i_0]) ? var_10 : (arr_2 [i_0]))), var_1)))))));
    }
    for (int i_1 = 2; i_1 < 11;i_1 += 1) /* same iter space */
    {
        var_16 = ((~(arr_5 [i_1 + 1])));

        for (int i_2 = 1; i_2 < 12;i_2 += 1)
        {
            var_17 = (max(var_17, (var_1 + -93)));
            var_18 = (min((((arr_8 [i_2 + 2] [i_1 + 3]) - (arr_8 [i_2 + 2] [i_1 + 1]))), (var_1 + var_6)));
        }
        for (int i_3 = 3; i_3 < 13;i_3 += 1)
        {
            var_19 *= (((((max((arr_11 [i_1] [i_1] [1]), 1)) < (((arr_7 [2] [i_3] [i_1 + 1]) ^ (arr_5 [i_1]))))) ? ((((arr_0 [i_3 - 3] [i_1 - 1]) * (arr_0 [i_3 - 3] [i_1 + 2])))) : ((((-1 ? 9223372036854775807 : var_3)) / (arr_9 [i_1] [i_1] [i_1 + 1])))));
            var_20 = ((!((max((~var_8), (((arr_10 [i_1] [i_3 - 1]) ? var_9 : var_7)))))));

            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                /* LoopNest 2 */
                for (int i_5 = 3; i_5 < 13;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 13;i_6 += 1)
                    {
                        {
                            var_21 = ((((var_1 / var_3) ? var_9 : (((arr_17 [i_1] [i_3] [i_4] [1] [i_3]) ? var_4 : -1)))));
                            var_22 = (arr_13 [i_3] [i_3] [6] [i_6]);
                            arr_19 [i_1 + 3] [i_3] = ((!(arr_11 [i_1] [i_1] [i_4])));
                        }
                    }
                }

                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    var_23 = ((((((((((arr_13 [i_7] [i_7] [i_7] [i_7]) | 118)) + 2147483647)) << (((arr_7 [i_1] [i_3 - 1] [i_4]) - 915475081))))) ? (((((var_4 ? (arr_2 [i_1 + 2]) : var_11))))) : (((arr_8 [i_1 + 2] [i_3 - 1]) / (max((arr_1 [i_4]), 0))))));
                    var_24 = (((((~(var_2 / var_0)))) ? (arr_20 [i_3] [i_3]) : ((max(314766120, (~var_1))))));
                    arr_23 [1] [1] [1] [10] = -314766143;
                }
                for (int i_8 = 0; i_8 < 14;i_8 += 1)
                {
                    arr_27 [i_1 - 1] [i_3] [13] [1] = (((((arr_10 [i_1] [i_1 + 3]) - (((arr_7 [i_1] [8] [13]) ? var_8 : (arr_7 [i_1] [i_3] [i_3]))))) << ((((-((var_0 ? var_10 : (arr_8 [i_1] [i_1 - 1]))))) - 6886648064948653675))));
                    arr_28 [i_1] [i_1] [i_4] [i_1] = ((((((max(-1760099052, -1760099052))) & (min(4160793205, var_11))))) ? ((17799 ^ (~var_5))) : var_9);
                    arr_29 [i_4] [i_4] = ((((min((min(85, (-9223372036854775807 - 1))), 364571166))) ? ((-(((arr_14 [i_1] [i_1] [1] [i_1]) ? var_10 : (arr_25 [i_4] [i_3] [8] [i_8]))))) : var_2));
                    arr_30 [i_1] [11] [i_4] [i_1] = -15955822;
                    var_25 = (((((max((arr_2 [i_3 - 1]), (arr_2 [i_1]))))) ? (arr_15 [i_1] [i_3]) : (arr_5 [i_3 - 1])));
                }
            }
            /* vectorizable */
            for (int i_9 = 1; i_9 < 10;i_9 += 1)
            {
                var_26 = (((var_5 ? var_1 : (arr_16 [i_1] [i_1]))));
                var_27 = 20451;
                arr_34 [i_1 - 1] = var_4;
                arr_35 [i_1] [i_1] [8] [i_9] = (arr_11 [i_1] [i_3 - 2] [i_3 - 1]);
            }
            var_28 = (arr_14 [i_1] [i_1 + 2] [i_3] [i_3 - 3]);
        }
        arr_36 [i_1] [i_1] = ((+(max((arr_13 [i_1] [i_1] [i_1] [i_1]), -20448))));
    }
    var_29 = (max(var_29, var_7));
    #pragma endscop
}

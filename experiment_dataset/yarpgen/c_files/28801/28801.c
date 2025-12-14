/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28801
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                var_20 = (max(((~(max(748116935, 0)))), (((var_5 ? (arr_3 [i_0 + 1]) : 0)))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_21 = (max((max(((2430458853045804894 ? 2840223418003286544 : var_10)), ((max((arr_9 [i_0] [i_1] [i_2] [i_0] [i_3 + 1] [i_3] [i_4]), (-9223372036854775807 - 1)))))), (max(-25, (max(23458, 13209027580993859548))))));
                                arr_10 [i_2] [i_1 + 1] [i_1 - 1] [i_1 - 2] [i_1] [i_1] = ((!((max(((((arr_5 [i_4] [i_0 - 1] [i_0 - 1]) >= var_13))), ((var_0 ? var_2 : var_11)))))));
                                arr_11 [i_0] [i_0] [i_0] [i_2] [17] = (arr_3 [i_3 - 1]);
                                arr_12 [9] [i_1] [8] [i_2] [i_4] = 1186959370957732545;
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 |= var_10;

    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        var_23 = ((((max((max(1864469040, 34200)), var_2))) ? (((((max(-100, 1263876547))) && 34019))) : 19408));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                {
                    var_24 = (max(var_24, var_0));
                    var_25 *= (max((((23451 ? 3031090739 : 9223372036854775807))), (((arr_15 [1]) ? ((max(var_18, 20738))) : (~72048797944905728)))));
                    var_26 = ((!((max((arr_7 [i_5] [i_6] [i_5] [i_5] [i_6]), 0)))));
                    arr_21 [i_5] = (61 >= 3031090741);
                }
            }
        }
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 23;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 23;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 23;i_10 += 1)
                {
                    {
                        var_27 ^= (((!1048575) / -4900535531995765252));

                        for (int i_11 = 1; i_11 < 21;i_11 += 1) /* same iter space */
                        {
                            var_28 = arr_2 [i_5] [i_8];
                            arr_34 [i_5] [i_8] = max((((1 ? 7 : 1))), ((9223372036854775807 ? 0 : -9223372036854775793)));
                            arr_35 [i_5] [i_5] [i_5] [i_5] [i_5] = (max(3031090748, (max(0, (arr_33 [i_5] [i_11 - 1] [i_11] [6] [i_11 + 1] [i_11] [i_11])))));
                        }
                        for (int i_12 = 1; i_12 < 21;i_12 += 1) /* same iter space */
                        {
                            arr_38 [i_12] [i_12] [i_12] [i_12] = (1548354478 + 7323352985571448275);
                            var_29 |= (max(18048208993230566144, ((0 ? 1 : 11020934723546656384))));
                        }
                        /* vectorizable */
                        for (int i_13 = 2; i_13 < 20;i_13 += 1)
                        {
                            var_30 = (((arr_16 [i_5] [i_13 - 1] [i_9]) ? (arr_30 [i_13] [i_10] [i_10] [i_9] [i_5] [i_5] [i_5]) : (arr_24 [i_13] [20] [i_8])));
                            var_31 ^= ((255 ? var_13 : (arr_5 [i_13 + 2] [i_13] [i_13 - 2])));
                        }
                        var_32 ^= max(92, (((arr_40 [i_5] [i_5] [i_5] [22] [i_5] [i_5]) + (arr_19 [i_5] [21] [i_9] [21]))));
                    }
                }
            }
        }
    }
    #pragma endscop
}

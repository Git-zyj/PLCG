/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241308
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= (((min((max(var_14, var_3)), ((min(13482, var_12))))) << (((!(~var_12))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
                {
                    arr_11 [i_1] = ((((((max((arr_3 [i_1]), 0))))) != ((var_2 ? (((2287672271 ? (arr_0 [13]) : 66))) : ((-11817 ? (arr_10 [i_1] [0] [i_0 - 1]) : (arr_10 [i_2] [i_1] [i_0])))))));
                    arr_12 [i_0] [i_0] [i_0] [i_0] |= (min((min(var_0, (arr_9 [i_0 - 2] [i_0 + 1]))), ((((arr_0 [0]) + 37020)))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
                {
                    var_17 = (max(var_17, (arr_0 [i_0 - 2])));
                    var_18 = 0;
                    var_19 |= (arr_10 [i_0] [i_0 + 1] [i_0 + 1]);
                    var_20 |= var_2;
                }
                for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
                {
                    var_21 = max(((2287672243 ? (arr_9 [i_0 - 2] [i_4]) : 252)), ((max((~var_4), (((2147483647 ? var_0 : var_13)))))));
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 22;i_6 += 1)
                        {
                            {
                                arr_24 [12] [i_1] [12] [i_1] [i_0] = (((~var_14) & ((min((arr_0 [i_6 + 1]), (arr_7 [i_0] [i_0] [i_4] [i_6 + 1]))))));
                                var_22 = (max(var_22, (((!(((var_3 ? (((arr_8 [i_0] [i_1] [i_4]) ? (arr_6 [i_6]) : (arr_0 [4]))) : (0 <= var_7)))))))));
                                var_23 = (max(var_23, -var_0));
                                var_24 = ((((((arr_6 [i_4]) ? ((((arr_9 [i_5] [6]) && -11797))) : (arr_3 [11])))) ? ((min((arr_3 [13]), (arr_3 [i_0])))) : var_0));
                                var_25 = (min(((max(((max(var_3, var_11))), ((~(-2147483647 - 1)))))), (arr_10 [i_1] [i_4] [i_4])));
                            }
                        }
                    }
                    arr_25 [i_1] [i_0] [i_0] = (min(((((((var_14 / (arr_23 [i_0] [i_0] [i_4] [i_0] [i_0 - 1])))) ? (arr_14 [i_0 + 1] [i_1]) : -11853))), (var_11 + var_4)));

                    for (int i_7 = 1; i_7 < 22;i_7 += 1)
                    {

                        /* vectorizable */
                        for (int i_8 = 2; i_8 < 22;i_8 += 1)
                        {
                            var_26 = ((arr_28 [i_0 - 1] [i_0 - 1] [i_7 - 1] [11] [i_1]) + var_0);
                            arr_31 [12] [i_1] [i_4] [i_1] [i_0] = (((arr_7 [10] [10] [i_7 + 1] [i_8 - 1]) << (((arr_7 [8] [i_1] [i_7 - 1] [17]) - 30))));
                        }
                        arr_32 [i_0 + 1] [i_1] [i_4] [i_7] = (min((((!((((arr_29 [14] [i_1] [22] [i_1] [i_1]) ? var_6 : var_1)))))), ((((min(var_3, (arr_7 [i_7 + 1] [i_4] [i_1] [i_0 - 1])))) ? ((((arr_2 [i_7]) == -1889485526))) : ((2287672260 ? var_12 : var_7))))));
                        var_27 = (arr_30 [i_7 - 1] [i_7] [i_7] [i_7 + 1] [i_1] [i_1] [i_0]);
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 23;i_9 += 1)
                    {
                        for (int i_10 = 3; i_10 < 21;i_10 += 1)
                        {
                            {
                                var_28 = (min((max((arr_0 [i_0 - 2]), (arr_14 [i_1] [i_1]))), (((1889485518 <= -1889485500) & (arr_19 [i_0 + 1] [21] [i_4] [i_10])))));
                                var_29 = (max(((max(var_10, var_11))), var_15));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 23;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 23;i_12 += 1)
                    {
                        {
                            arr_42 [i_1] = ((+(((max((arr_6 [i_11]), 2287672271))))));
                            var_30 = var_9;
                        }
                    }
                }
                var_31 -= ((((!(arr_27 [i_0 - 2] [i_1] [i_0]))) ? (arr_28 [i_0] [i_1] [i_1] [6] [i_0]) : (arr_13 [i_1] [i_1] [i_1] [i_0 - 2])));

                for (int i_13 = 0; i_13 < 23;i_13 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 23;i_14 += 1)
                    {
                        for (int i_15 = 1; i_15 < 21;i_15 += 1)
                        {
                            {
                                arr_52 [0] [i_1] [i_13] [i_14] [i_1] [i_1] [i_13] = ((((((arr_37 [i_15 + 2] [i_1] [i_0 - 2]) ? (max((arr_27 [i_1] [i_13] [i_1]), (arr_9 [i_14] [12]))) : (arr_28 [i_0 + 1] [i_1] [5] [i_14] [i_1])))) ? ((min((arr_17 [i_15 - 1] [i_1] [i_15 + 2]), var_3))) : (arr_46 [i_15] [i_1] [i_0] [i_13] [i_1] [i_0])));
                                var_32 = (((arr_18 [i_15 + 2] [i_15 + 1] [i_0 - 2] [i_0 - 2]) != (((((54246 << (2560243691 - 2560243690)))) ? (arr_15 [i_15 - 1] [i_15] [i_15 + 2] [i_15]) : (arr_6 [i_0])))));
                                arr_53 [i_1] [i_1] [i_1] [i_1] [i_15] = var_2;
                                var_33 += max(((((((arr_35 [i_0 - 1] [i_0] [i_1] [i_1] [i_13] [19] [i_1]) == -11877))) & ((min(var_9, (arr_5 [i_14] [i_14])))))), (((!((min(var_14, (arr_48 [i_0] [i_0] [i_0 - 2] [i_0 - 1] [6] [i_0]))))))));
                                var_34 += (min(var_6, 228));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 23;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 23;i_17 += 1)
                        {
                            {
                                arr_59 [12] [i_0] [i_0] [10] |= ((arr_26 [i_17] [i_0]) ? ((((var_1 ? var_7 : (arr_9 [i_0 - 1] [i_1]))))) : (arr_2 [i_16]));
                                var_35 ^= (max((((arr_33 [18] [16] [i_0] [i_13] [i_16] [i_17]) ? var_15 : (max(2007295037, var_3)))), (((!(arr_28 [i_0] [i_0 - 1] [i_0 + 1] [i_0] [i_0]))))));
                                var_36 = (((((~(arr_8 [i_0 + 1] [i_0 - 1] [19])))) ? (((arr_8 [i_0 + 1] [i_0 - 2] [18]) ? 7 : (arr_8 [i_0 - 1] [i_0 + 1] [i_16]))) : var_9));
                                var_37 |= ((max((max(-3110, 84)), var_10)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_38 = (max(var_38, var_7));
    var_39 = ((((min((~var_2), ((var_6 ? var_15 : var_2))))) ? var_9 : ((((max(var_2, var_1))) ? var_9 : (max(var_4, 4227858432))))));
    #pragma endscop
}

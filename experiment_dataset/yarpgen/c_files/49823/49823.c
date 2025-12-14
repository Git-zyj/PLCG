/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49823
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, ((var_5 & ((var_2 ? (~68) : 2356551684))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_5 [i_1] = (arr_1 [i_1]);

                for (int i_2 = 2; i_2 < 23;i_2 += 1)
                {
                    arr_10 [i_0] [i_0] [i_2] = ((max((arr_3 [i_0] [i_0] [i_2 - 1]), ((max(-34, 30749))))));
                    var_16 += (arr_4 [i_0] [i_0]);
                    var_17 = (min(var_17, ((((~var_1) * ((var_14 ? var_8 : (arr_4 [i_0] [i_1]))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_18 -= (~(((max((arr_1 [i_0]), var_0)))));
                                var_19 = (var_4 ? (((((-(arr_14 [i_0])))) - (min(2147483647, (arr_2 [i_0] [i_0] [i_0]))))) : ((var_10 ? var_11 : (arr_6 [i_1] [i_2] [21]))));
                                var_20 = (~((max(var_8, 0))));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_5 = 1; i_5 < 22;i_5 += 1)
                {
                    var_21 -= 2849609994;

                    for (int i_6 = 2; i_6 < 21;i_6 += 1) /* same iter space */
                    {
                        arr_23 [i_0] [i_6] [i_6] [i_6] = (((arr_4 [i_5 + 2] [i_5 + 2]) | (arr_4 [i_5 - 1] [i_5 + 1])));
                        var_22 = (arr_18 [i_0] [i_0] [i_5 - 1]);
                    }
                    for (int i_7 = 2; i_7 < 21;i_7 += 1) /* same iter space */
                    {
                        var_23 = (max(var_23, ((((arr_20 [i_5 - 1] [i_7 - 2] [i_7] [i_7 + 3] [i_7 + 2] [i_7 - 1]) ? (~var_8) : (((var_2 ? var_13 : (arr_22 [i_0] [i_1] [1])))))))));
                        var_24 = (arr_24 [i_7] [i_7]);
                        var_25 = (var_4 && 916680211);
                    }
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        arr_29 [i_0] [i_1] [i_0] [i_0] = (1 ? 2199023255551 : 2147483647);

                        for (int i_9 = 1; i_9 < 22;i_9 += 1)
                        {
                            var_26 = 1445357288;
                            var_27 = (max(var_27, (arr_27 [i_5 + 1] [i_5 + 1] [i_9 - 1] [i_9 - 1] [6] [15])));
                            var_28 &= (var_6 ? (arr_16 [i_9 - 1] [i_1] [i_5 + 1]) : var_10);
                            arr_32 [i_8] [0] = ((48294 ? (arr_26 [i_8] [i_8] [i_8] [i_8]) : (arr_26 [i_0] [i_1] [i_8] [i_9 + 1])));
                        }
                        for (int i_10 = 0; i_10 < 24;i_10 += 1)
                        {
                            arr_36 [i_10] [i_10] [7] [i_10] [i_0] = var_11;
                            var_29 = (max(var_29, ((((~1445357277) ? var_9 : 1445357302)))));
                            var_30 = 261144106;
                        }
                        for (int i_11 = 0; i_11 < 24;i_11 += 1)
                        {
                            arr_39 [10] [i_8] [19] [i_1] [10] = (1445357294 > 18446741874686296062);
                            var_31 = (arr_4 [i_5 + 2] [i_0]);
                            arr_40 [8] [i_1] [i_8] [i_1] [i_5 + 2] [i_1] [8] &= ((var_6 ? var_1 : var_11));
                            var_32 = (min(var_32, var_7));
                        }
                        for (int i_12 = 0; i_12 < 24;i_12 += 1)
                        {
                            var_33 = ((2849610005 ? 35992 : (((arr_21 [i_5] [12] [i_5] [i_5] [i_8]) ? var_9 : var_6))));
                            var_34 = (arr_11 [i_0] [13] [i_0]);
                            arr_43 [i_0] [i_1] [i_5] [i_8] [i_0] [i_12] = (((arr_9 [i_5 + 2] [i_5 + 2] [8]) ? 1938415611 : var_10));
                            var_35 = (min(var_35, ((((arr_7 [i_5 + 1]) ? (arr_22 [2] [i_5 + 2] [i_5]) : ((var_6 ? var_11 : (arr_9 [i_0] [i_0] [i_0]))))))));
                            arr_44 [i_5 + 1] = var_1;
                        }
                        arr_45 [4] [4] [i_5] [i_8] = (var_14 ? var_13 : var_13);
                        var_36 *= (arr_6 [i_0] [i_0] [i_8]);
                    }
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 24;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 24;i_14 += 1)
                        {
                            {
                                arr_52 [i_0] [i_0] [19] [i_0] [i_0] = (~2147483647);
                                var_37 *= (((arr_51 [i_5 + 1] [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1]) ? var_14 : (arr_2 [13] [i_1] [i_0])));
                            }
                        }
                    }
                    var_38 = (max(var_38, (((-(arr_11 [i_5 - 1] [i_5 + 1] [i_5]))))));
                    var_39 *= var_6;
                }
                var_40 = (min(var_40, ((((~var_12) ? (~var_7) : var_11)))));
                var_41 = (max(3506493224, (((((var_1 >> (((arr_22 [i_0] [i_0] [i_0]) + 31687))))) ? 1 : var_5))));
                var_42 = (((arr_28 [i_0] [i_0] [i_1] [12]) - ((((max(var_13, var_11))) ? (arr_17 [i_0] [i_1] [i_0]) : ((var_12 ? var_3 : 4245264651386215912))))));
            }
        }
    }
    var_43 = (min(var_43, var_5));
    /* LoopNest 2 */
    for (int i_15 = 0; i_15 < 21;i_15 += 1)
    {
        for (int i_16 = 0; i_16 < 21;i_16 += 1)
        {
            {
                var_44 = ((var_7 ? 0 : var_5));
                var_45 += ((((((arr_2 [i_15] [i_16] [i_15]) | var_0))) ? ((var_8 ? (arr_47 [i_15] [i_16]) : (arr_2 [i_15] [i_15] [i_15]))) : 1));
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27929
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_0] [i_0 + 1] = (((max((((-2771828859696879299 ? var_6 : -103))), (~var_9))) == (((max((arr_0 [i_0 - 2]), (arr_0 [i_0 + 2])))))));
                var_18 = 0;
                arr_5 [i_0] [i_1] = (arr_0 [i_0 + 1]);
                arr_6 [i_0] [i_1] = (((arr_1 [i_0 - 1]) >= (((arr_1 [i_0 + 2]) ? var_13 : (arr_1 [i_0 + 1])))));

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
                    {
                        var_19 = (min(var_19, (((-(max(0, (((arr_7 [i_0] [7] [i_2] [i_3]) ? -595582385 : (arr_2 [i_3] [i_2] [i_1]))))))))));

                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            var_20 = max(((max(17882, 1))), (arr_10 [i_0] [i_0] [1] [i_3] [2] [i_2]));
                            arr_15 [i_4] = var_16;
                            var_21 = (max(var_21, (arr_0 [i_0])));
                        }
                        for (int i_5 = 4; i_5 < 18;i_5 += 1)
                        {
                            var_22 = ((!(arr_12 [i_0 - 2] [i_5 - 2] [i_5 + 2] [i_5 - 4] [i_5])));
                            var_23 = (max((((((var_5 ? (arr_1 [1]) : var_10))) ? (!var_17) : (arr_2 [i_5] [1] [i_2]))), -var_5));
                        }
                        var_24 = (min(var_24, var_3));
                        arr_19 [i_3] [i_0] = (max((((min((arr_12 [i_0] [i_0] [i_1] [i_2] [i_3]), -3)))), (max((arr_10 [i_1] [i_1] [i_2] [i_1] [i_0 + 2] [i_0 + 2]), (arr_18 [i_0 - 3] [i_1] [i_2] [i_3] [i_0 - 3])))));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
                    {
                        var_25 = (max(var_25, (((1 ? (arr_9 [i_0 + 1] [i_0 + 1]) : (arr_9 [i_0 + 2] [i_0 + 2]))))));

                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            arr_25 [i_7] [i_6] [i_2] [i_0] [i_0] = ((arr_3 [i_6] [i_0]) ? ((var_14 ? var_1 : 32862)) : (!57));
                            arr_26 [i_0] [i_1] [i_1] [i_2] [i_2] [i_6] [i_7] = (((arr_10 [i_0] [i_1] [i_2] [i_6] [i_6] [i_7]) * (arr_22 [i_0] [i_2])));
                        }
                        for (int i_8 = 0; i_8 < 20;i_8 += 1)
                        {
                            var_26 = (arr_8 [i_2] [i_2] [i_0]);
                            var_27 = var_15;
                            var_28 = (((!3739352874520157268) ^ (((var_9 + 9223372036854775807) << (((arr_1 [1]) - 1))))));
                        }
                    }
                    for (int i_9 = 0; i_9 < 20;i_9 += 1)
                    {
                        arr_31 [i_0] [i_1] [i_9] [i_9] [i_9] = ((min((arr_20 [i_1] [i_9]), ((((arr_20 [i_1] [i_0]) != var_6))))));

                        for (int i_10 = 1; i_10 < 18;i_10 += 1) /* same iter space */
                        {
                            arr_34 [i_9] = var_12;
                            var_29 = ((!((max(var_3, (arr_7 [i_0] [i_1] [i_1] [i_9]))))));
                            var_30 = ((!((((arr_2 [i_10 + 2] [i_9] [i_0]) ? var_9 : -388352280664671156)))));
                        }
                        /* vectorizable */
                        for (int i_11 = 1; i_11 < 18;i_11 += 1) /* same iter space */
                        {
                            var_31 = (max(var_31, (arr_33 [i_2] [i_9] [i_2] [i_1] [i_1] [i_1] [i_2])));
                            arr_38 [i_9] [i_1] [i_2] [i_9] [i_11] [i_1] = ((((((arr_1 [i_11]) * (arr_35 [i_9])))) ? (arr_21 [i_0 + 1] [i_0 + 1]) : (arr_18 [i_11] [i_9] [i_2] [i_9] [i_0])));
                            arr_39 [i_0 - 3] [i_9] [i_9] [i_1] [i_11] [i_9] = var_1;
                        }
                        for (int i_12 = 1; i_12 < 18;i_12 += 1) /* same iter space */
                        {
                            var_32 = (min(var_32, (((var_3 < (arr_28 [i_12] [i_9] [1] [i_0] [i_2] [i_0] [i_0]))))));
                            var_33 ^= (max((((((min((arr_0 [i_0]), var_2))) ? (!var_11) : (((arr_41 [i_2]) ? (arr_13 [i_0] [i_1]) : var_0))))), (((~(arr_22 [i_1] [i_2]))))));
                            arr_43 [i_12] [i_9] [i_2] [i_9] [i_0] = (((((arr_14 [i_9]) != ((var_1 ? (arr_22 [i_0] [i_1]) : 7662594956888287016)))) ? (!1020429278) : (arr_27 [i_0] [i_1] [i_0] [i_2] [i_9] [i_0] [i_12 - 1])));
                        }
                        for (int i_13 = 0; i_13 < 20;i_13 += 1)
                        {
                            arr_46 [i_13] [i_13] [16] [i_13] [i_0] &= var_9;
                            var_34 = (((((((-1309508015 ? 35166 : 3274538021)) | ((min(var_2, var_1)))))) ? ((~((~(arr_13 [i_2] [6]))))) : 1));
                            var_35 = (min(var_35, (!var_6)));
                        }
                        arr_47 [i_9] [i_9] = ((3072 != -120) >> (-67 + 74));
                        var_36 = var_7;
                    }
                    arr_48 [i_0] [i_0] [i_0] [i_2] |= (((((-2458070360319698546 >> (((arr_35 [i_2]) + 1464378389036616266))))) ? ((var_9 ? (arr_14 [i_2]) : (arr_14 [i_2]))) : ((((arr_2 [i_0 + 2] [i_0 + 2] [i_0 - 1]) - (arr_2 [i_0 - 1] [i_0 + 1] [i_0 - 2]))))));
                    arr_49 [i_0 + 1] [i_1] [i_2] [i_2] = (arr_23 [i_0 + 1]);
                    var_37 = (((!20446) ? ((((arr_29 [i_0] [i_2] [i_2] [i_2] [i_1]) >= var_13))) : var_17));
                }
                for (int i_14 = 0; i_14 < 1;i_14 += 1) /* same iter space */
                {
                    var_38 = (max(var_38, (((((arr_22 [i_14] [i_14]) ? (((!(arr_14 [8])))) : 1))))));
                    var_39 = ((17 ? 18 : 1));
                    var_40 = ((((var_9 / (arr_29 [i_0 + 1] [i_0 + 1] [10] [i_0 - 2] [i_0 + 2]))) * ((((!(arr_32 [14] [i_0 + 1] [i_0 - 1])))))));
                    arr_53 [i_14] [i_1] [i_0] [i_0] = ((((max(17, ((var_14 ? (arr_29 [i_0] [i_0] [1] [i_14] [i_1]) : (arr_3 [i_14] [i_0])))))) ? ((((((arr_13 [i_0] [i_1]) - 244))))) : (max(var_12, var_6))));
                }
                /* vectorizable */
                for (int i_15 = 0; i_15 < 1;i_15 += 1) /* same iter space */
                {
                    var_41 = (max(var_41, var_7));
                    var_42 = ((var_10 % (((arr_44 [i_0 + 1] [i_1] [i_15] [i_0] [i_1] [i_15]) | (arr_16 [i_15] [i_15] [i_15] [i_1] [i_1] [i_15] [i_0])))));
                }
                for (int i_16 = 0; i_16 < 1;i_16 += 1) /* same iter space */
                {
                    var_43 = ((((var_7 || ((((arr_21 [8] [i_16]) ? (arr_55 [i_16] [i_1] [i_1]) : 252))))) ? -663450515262816781 : ((((arr_21 [i_0 + 1] [i_0 - 1]) & (arr_21 [i_0 + 1] [i_0 - 1]))))));
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 20;i_17 += 1)
                    {
                        for (int i_18 = 2; i_18 < 17;i_18 += 1)
                        {
                            {
                                var_44 = (min(var_44, 502595902));
                                var_45 = ((~((245 ^ (arr_44 [i_16] [i_18 + 2] [i_18 + 1] [i_18 + 3] [i_0 - 1] [i_16])))));
                                var_46 = var_4;
                            }
                        }
                    }
                    arr_65 [i_0] [i_1] [i_1] [i_16] = ((var_3 & (max((((!(arr_11 [i_0] [i_16] [i_1] [i_1] [i_0] [i_0])))), var_15))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_19 = 2; i_19 < 13;i_19 += 1)
    {
        for (int i_20 = 0; i_20 < 16;i_20 += 1)
        {
            for (int i_21 = 0; i_21 < 16;i_21 += 1)
            {
                {
                    var_47 = (arr_21 [i_19 + 2] [i_19 + 3]);
                    var_48 = (max(var_48, (arr_54 [i_19] [i_20] [i_21] [i_19 - 2])));
                    var_49 = (arr_11 [i_19] [i_19] [i_20] [i_20] [i_20] [i_21]);
                }
            }
        }
    }
    #pragma endscop
}

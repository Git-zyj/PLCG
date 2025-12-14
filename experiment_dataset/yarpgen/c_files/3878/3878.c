/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3878
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, ((min(((min(var_4, var_12))), (max((max(var_8, 12040306971153276032)), (((var_10 ? var_1 : var_0))))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0 - 1] = var_5;
                arr_6 [i_0] = 1;

                for (int i_2 = 2; i_2 < 13;i_2 += 1)
                {
                    var_15 = (min(var_15, ((max((var_9 != var_1), (min(1, var_12)))))));
                    var_16 = ((!(arr_4 [i_0 - 1] [i_0] [1])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_17 = (((arr_13 [i_0 - 1] [i_3 + 1] [9] [i_3 + 1] [4]) & ((4094261338088338010 ? 1 : (max((arr_11 [i_4] [i_3] [i_3 + 1] [i_2] [i_1] [2]), 70))))));
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_2] = (((((256600802 ? 1 : 14352482735621213605))) ? (!var_0) : ((((max(4038366487, 0))) ? (max(0, -1064337544)) : ((40217 ? 1 : 1))))));
                            }
                        }
                    }
                }
                var_18 = (min(((min(((var_13 ? var_7 : var_3)), (min(826464398, var_10))))), (arr_1 [i_0])));
            }
        }
    }
    var_19 -= (((~var_11) ? var_3 : (max((-1064337520 % 826464395), var_8))));

    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        arr_19 [1] [i_5] = ((!((max(1, var_2)))));
        var_20 = (arr_17 [i_5]);
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 21;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {

                    for (int i_8 = 1; i_8 < 23;i_8 += 1)
                    {
                        var_21 = (arr_23 [i_5]);
                        arr_28 [i_8] [i_8 - 1] = (min(var_3, ((var_0 ? ((var_5 ? var_3 : 81)) : 0))));

                        for (int i_9 = 0; i_9 < 25;i_9 += 1) /* same iter space */
                        {
                            var_22 = (min(var_22, (arr_27 [i_9] [i_7] [i_6] [15])));
                            var_23 = min(16383, 18446744073709551603);
                            var_24 = (arr_27 [15] [1] [i_6] [i_5]);
                        }
                        for (int i_10 = 0; i_10 < 25;i_10 += 1) /* same iter space */
                        {
                            var_25 = (max(var_25, -var_0));
                            arr_34 [1] [i_10] [i_10] [i_10] [i_10] = (min(var_4, var_11));
                            var_26 = (((~((524287 - (arr_26 [i_5] [i_5] [4] [i_5] [12] [i_5]))))));
                        }

                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 25;i_11 += 1) /* same iter space */
                        {
                            var_27 = (max(var_27, -8618));
                            var_28 = 4294950913;
                        }
                        for (int i_12 = 0; i_12 < 25;i_12 += 1) /* same iter space */
                        {
                            var_29 = (max(var_29, ((((((min(var_0, var_6))) ? (min(var_11, var_4)) : -var_10))))));
                            var_30 = (max(var_30, ((max(114, (arr_38 [i_5] [2] [i_7]))))));
                            arr_39 [8] [i_6] [1] [i_8] [i_12] [22] [i_12] = var_6;
                        }
                        for (int i_13 = 0; i_13 < 25;i_13 += 1)
                        {
                            var_31 = -var_0;
                            var_32 = (min(var_32, ((min((min((arr_29 [i_7]), ((var_5 ? 0 : (arr_33 [i_5] [20] [i_13] [i_5] [i_5] [i_5] [i_5]))))), (arr_40 [i_5] [i_6] [i_7] [i_8] [i_8]))))));
                            arr_42 [i_13] [i_6] = (((min(1, 721961786))) ? var_6 : var_5);
                            var_33 = (max(var_33, ((((min(var_12, (arr_41 [i_8 + 1] [i_8 - 1] [i_6 - 2])))) ? ((+(max((arr_17 [i_5]), var_11)))) : ((min(var_1, (max(var_13, var_5)))))))));
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 25;i_14 += 1)
                    {
                        for (int i_15 = 3; i_15 < 24;i_15 += 1)
                        {
                            {
                                var_34 = (min(((((arr_26 [i_6] [i_6] [i_6] [i_6 - 1] [20] [i_15 - 3]) ? 58 : (arr_17 [i_15 + 1])))), ((-(min(4926, (arr_18 [i_14] [i_14])))))));
                                var_35 = (min(var_35, 214));
                                var_36 = (min(var_36, (((16404 ^ ((0 ? (~0) : 3197364480124209674)))))));
                            }
                        }
                    }

                    for (int i_16 = 1; i_16 < 21;i_16 += 1)
                    {
                        var_37 = -115;
                        var_38 |= var_10;
                    }
                    /* vectorizable */
                    for (int i_17 = 4; i_17 < 22;i_17 += 1)
                    {
                        var_39 = (min(var_39, (((var_4 ? 75 : (arr_47 [i_17 + 1] [i_17 - 4] [i_6 + 4]))))));
                        var_40 = (min(var_40, 14180504450156563289));
                    }
                }
            }
        }
        arr_55 [i_5] = (min((min(var_11, (((3 ? -8 : 446739859))))), ((max((var_0 < var_5), (min(1, -6)))))));
    }
    for (int i_18 = 0; i_18 < 10;i_18 += 1)
    {
        var_41 = ((-(max(((var_12 ? (arr_35 [i_18] [i_18] [23] [23] [i_18] [i_18] [i_18]) : var_10)), 124))));
        arr_58 [i_18] = (min((arr_0 [1]), ((((arr_0 [i_18]) && var_13)))));
    }
    for (int i_19 = 0; i_19 < 19;i_19 += 1)
    {
        var_42 = (max((((arr_30 [i_19] [i_19] [23] [23] [20]) ? var_11 : ((var_13 ? (arr_29 [5]) : -826464391)))), (max(((var_13 ? 70 : var_13)), (~var_8)))));
        /* LoopNest 3 */
        for (int i_20 = 0; i_20 < 1;i_20 += 1)
        {
            for (int i_21 = 0; i_21 < 19;i_21 += 1)
            {
                for (int i_22 = 3; i_22 < 17;i_22 += 1)
                {
                    {
                        var_43 = (max(var_43, var_9));
                        var_44 = (max(var_44, ((((((((min(-119, 3197364480124209674))) ? ((max(var_1, 255))) : var_4))) ? (max((arr_29 [i_22 - 1]), var_1)) : ((~(~var_10))))))));
                    }
                }
            }
        }
        var_45 = (((var_1 ? 0 : ((min(1, var_8))))));
    }
    #pragma endscop
}

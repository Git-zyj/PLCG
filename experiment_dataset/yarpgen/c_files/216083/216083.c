/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216083
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 12;i_2 += 1) /* same iter space */
                {

                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        var_16 += var_1;
                        var_17 = var_12;

                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            var_18 = (!var_12);
                            arr_13 [i_0] [8] [i_0] [i_0] [i_0] [i_0] [2] = (min(var_10, ((var_5 ? -var_5 : (max(var_15, var_0))))));
                        }
                        arr_14 [i_0] [i_1] [i_2] [i_1] [i_0] [i_3 + 4] = (min((min(-var_1, var_11)), (min(var_10, var_2))));
                    }

                    for (int i_5 = 3; i_5 < 12;i_5 += 1)
                    {
                        arr_18 [i_0] [i_1] |= var_0;
                        var_19 = min(var_11, (!var_3));
                        arr_19 [i_2 - 1] [0] = -88;
                        var_20 = var_8;
                    }
                    for (int i_6 = 1; i_6 < 12;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            var_21 = ((!((min(var_12, var_13)))));
                            var_22 += ((var_3 ? -42 : (max(((var_10 ? var_9 : var_13)), var_10))));
                            var_23 = var_13;
                        }
                        for (int i_8 = 4; i_8 < 11;i_8 += 1)
                        {
                            arr_28 [i_8] [i_6] [i_2 - 2] [i_6] [i_0] = (min(var_13, var_6));
                            arr_29 [i_6] [i_1] = -var_10;
                            var_24 = 58;
                            var_25 = (min(var_1, var_9));
                            var_26 = var_15;
                        }
                        var_27 = min(((max(var_5, var_8))), var_5);
                        var_28 += ((((min(var_7, var_14))) ? ((max(var_15, var_2))) : var_0));
                    }
                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {
                        var_29 = var_0;
                        var_30 = var_15;
                        var_31 = var_15;
                    }
                    for (int i_10 = 0; i_10 < 14;i_10 += 1)
                    {
                        var_32 = (!var_13);
                        arr_35 [i_0] [i_0] [i_0] [1] = var_9;
                    }
                    var_33 = ((((min(var_4, var_5))) ? (((var_6 ? var_9 : var_5))) : ((var_13 ? var_11 : (((var_12 ? var_9 : var_5)))))));
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 14;i_11 += 1)
                    {
                        for (int i_12 = 2; i_12 < 11;i_12 += 1)
                        {
                            {
                                arr_41 [i_0] [i_1] [i_12] [i_11] [i_12] = (max((min((max(var_13, var_6)), var_12)), (((113 ? -93 : 119)))));
                                var_34 = var_15;
                                var_35 = ((var_9 ? -2225814101 : (((min(var_12, -85))))));
                                var_36 = var_15;
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_13 = 3; i_13 < 12;i_13 += 1) /* same iter space */
                {
                    arr_46 [i_0] [11] [i_13] [i_13 - 3] = ((var_9 ? var_2 : var_11));
                    arr_47 [i_13] = ((var_2 ? var_12 : var_13));
                    arr_48 [i_0] [i_13] [i_13] [i_13] = var_12;
                }
                for (int i_14 = 0; i_14 < 14;i_14 += 1)
                {
                    arr_51 [i_0] [i_1] [i_14] [i_0] = var_14;

                    for (int i_15 = 0; i_15 < 14;i_15 += 1) /* same iter space */
                    {

                        for (int i_16 = 4; i_16 < 12;i_16 += 1)
                        {
                            var_37 = var_9;
                            var_38 = (min(var_38, var_5));
                        }
                        arr_57 [i_14] = var_12;
                        var_39 = ((max(var_13, var_9)));
                    }
                    for (int i_17 = 0; i_17 < 14;i_17 += 1) /* same iter space */
                    {

                        for (int i_18 = 0; i_18 < 14;i_18 += 1)
                        {
                            arr_64 [12] [i_17] [i_0] [i_14] [i_14] [12] [i_0] = (min(var_13, (max(var_4, ((var_1 ? var_0 : var_6))))));
                            var_40 = (min(var_40, ((max(((var_7 ? var_11 : var_3)), -51)))));
                        }
                        var_41 = var_9;
                    }
                    for (int i_19 = 0; i_19 < 14;i_19 += 1)
                    {
                        arr_68 [i_0] [i_19] = ((-(((max(-8, 28))))));
                        arr_69 [i_19] [i_14] [i_1] [i_1] [i_19] = (max(var_14, (~var_14)));
                    }
                    arr_70 [i_14] = max(-122, 105);
                }

                /* vectorizable */
                for (int i_20 = 0; i_20 < 14;i_20 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_21 = 1; i_21 < 12;i_21 += 1)
                    {
                        for (int i_22 = 0; i_22 < 14;i_22 += 1)
                        {
                            {
                                arr_80 [i_22] [8] [i_1] [i_1] [i_0] = var_1;
                                var_42 = ((var_4 ? var_15 : var_8));
                                var_43 = var_0;
                                arr_81 [i_0] = var_0;
                            }
                        }
                    }
                    var_44 = var_3;
                }
                /* LoopNest 2 */
                for (int i_23 = 2; i_23 < 11;i_23 += 1)
                {
                    for (int i_24 = 0; i_24 < 14;i_24 += 1)
                    {
                        {
                            var_45 = var_4;
                            var_46 = ((min(var_11, -var_7)));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_25 = 0; i_25 < 14;i_25 += 1)
                {
                    for (int i_26 = 0; i_26 < 14;i_26 += 1)
                    {
                        for (int i_27 = 2; i_27 < 12;i_27 += 1)
                        {
                            {
                                var_47 = var_8;
                                var_48 = var_6;
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_28 = 0; i_28 < 10;i_28 += 1)
    {
        /* LoopNest 2 */
        for (int i_29 = 3; i_29 < 7;i_29 += 1)
        {
            for (int i_30 = 1; i_30 < 6;i_30 += 1)
            {
                {

                    for (int i_31 = 0; i_31 < 10;i_31 += 1)
                    {
                        var_49 = (max(var_0, var_4));
                        var_50 = var_3;
                        var_51 = (~var_5);
                        var_52 = -var_7;
                    }

                    for (int i_32 = 4; i_32 < 7;i_32 += 1)
                    {
                        var_53 = (min(var_53, var_4));
                        var_54 += var_15;
                        var_55 = var_5;
                        var_56 = ((((max(var_3, var_2))) ? var_15 : var_11));
                    }
                    for (int i_33 = 0; i_33 < 10;i_33 += 1)
                    {
                        var_57 = ((-(!var_0)));

                        for (int i_34 = 0; i_34 < 10;i_34 += 1)
                        {
                            var_58 = var_9;
                            var_59 = max((max(var_2, var_6)), var_1);
                        }
                        /* vectorizable */
                        for (int i_35 = 0; i_35 < 10;i_35 += 1)
                        {
                            var_60 += var_11;
                            var_61 += var_2;
                            var_62 = var_4;
                        }
                    }
                    var_63 = (max(((((min(0, -69))) ? var_11 : var_14)), (max((min(var_11, var_1)), var_5))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_36 = 0; i_36 < 10;i_36 += 1)
        {
            for (int i_37 = 0; i_37 < 10;i_37 += 1)
            {
                for (int i_38 = 0; i_38 < 10;i_38 += 1)
                {
                    {
                        arr_123 [i_28] [i_36] [i_36] [8] [i_38] = var_5;
                        var_64 = (min(var_64, var_12));
                        var_65 = (max(var_65, ((max(var_4, var_3)))));
                        arr_124 [i_28] [i_36] [i_28] [8] [3] = var_15;
                        var_66 = (min(var_66, ((max((min(var_14, var_8)), ((min(var_15, var_1))))))));
                    }
                }
            }
        }
        var_67 = var_9;
    }
    var_68 = var_2;
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204102
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {

                /* vectorizable */
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {

                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        arr_10 [i_2] [i_2] [i_0] [i_2] [i_2] = var_8;
                        arr_11 [i_0] [24] [i_0] [i_0] [i_0] = var_1;
                    }

                    for (int i_5 = 1; i_5 < 23;i_5 += 1)
                    {
                        arr_15 [i_0] [i_1] [i_1] [i_2] [i_2] [i_3] [23] = var_5;
                        var_16 = var_14;
                        var_17 = (!var_15);
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                    {
                        arr_18 [16] [i_3] [i_2] [i_2] [i_2] [i_1 + 1] &= -var_15;
                        var_18 = var_12;
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                    {
                        arr_21 [i_0] [i_0] = (~var_3);
                        var_19 = (~var_15);
                        arr_22 [i_0] [i_1] [i_1] [i_1] = var_4;
                    }
                    var_20 = (!var_10);
                }
                arr_23 [i_0] [i_0] = var_11;
            }
            /* LoopNest 3 */
            for (int i_8 = 1; i_8 < 22;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 24;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        {
                            var_21 = (min((min(-var_3, var_12)), ((min((!var_13), var_7)))));
                            var_22 = ((~(max(((max(var_12, var_10))), var_9))));
                            var_23 = (~-var_13);
                            var_24 = (max((max(-var_11, (max(var_9, var_0)))), var_5));
                        }
                    }
                }
            }
        }
        var_25 = (min(var_5, var_5));
    }
    for (int i_11 = 0; i_11 < 25;i_11 += 1)
    {
        var_26 = (min(var_9, var_14));
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 25;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 25;i_13 += 1)
            {
                {
                    arr_39 [i_11] = var_4;

                    /* vectorizable */
                    for (int i_14 = 0; i_14 < 0;i_14 += 1)
                    {
                        var_27 = -var_13;
                        arr_43 [i_11] [20] [i_11] [i_12] [i_13] [i_11] = ((~(~var_10)));
                        var_28 ^= var_5;
                    }
                    /* vectorizable */
                    for (int i_15 = 0; i_15 < 1;i_15 += 1)
                    {

                        for (int i_16 = 4; i_16 < 23;i_16 += 1)
                        {
                            var_29 *= -var_9;
                            arr_49 [i_11] [i_11] [i_11] = (~-var_0);
                            var_30 ^= var_12;
                            var_31 = var_15;
                        }
                        for (int i_17 = 0; i_17 < 25;i_17 += 1)
                        {
                            arr_54 [i_11] [14] [i_13] = (~var_15);
                            arr_55 [11] [i_12] [11] [i_11] [i_17] = var_14;
                        }
                        arr_56 [24] [24] [i_13] [i_15] [i_11] = var_9;
                        var_32 = var_5;
                    }
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 25;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 25;i_19 += 1)
                        {
                            {
                                var_33 = (+-var_9);
                                var_34 ^= var_13;
                            }
                        }
                    }
                }
            }
        }
        var_35 = var_3;

        /* vectorizable */
        for (int i_20 = 0; i_20 < 25;i_20 += 1)
        {

            for (int i_21 = 0; i_21 < 1;i_21 += 1)
            {

                for (int i_22 = 0; i_22 < 25;i_22 += 1)
                {
                    arr_68 [0] [i_20] [i_21] [4] [i_11] = var_3;
                    var_36 = var_0;
                    arr_69 [i_11] = var_5;
                    arr_70 [i_11] [14] [i_22] [14] &= var_0;
                }
                arr_71 [i_11] [14] [i_21] = -var_2;
            }
            var_37 = (-(~var_11));
        }
        for (int i_23 = 1; i_23 < 21;i_23 += 1) /* same iter space */
        {
            var_38 = (~var_11);
            /* LoopNest 3 */
            for (int i_24 = 0; i_24 < 25;i_24 += 1)
            {
                for (int i_25 = 2; i_25 < 23;i_25 += 1)
                {
                    for (int i_26 = 0; i_26 < 25;i_26 += 1)
                    {
                        {
                            arr_84 [i_11] [i_11] = var_5;
                            arr_85 [i_26] [i_23] [i_11] [i_26] [11] [i_25 - 1] [i_11] = (max((~var_8), (min(((min(var_3, var_13))), var_15))));
                            arr_86 [1] [i_23] [19] [i_11] [i_26] = var_0;
                        }
                    }
                }
            }
            var_39 = (~var_1);
        }
        /* vectorizable */
        for (int i_27 = 1; i_27 < 21;i_27 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_28 = 0; i_28 < 25;i_28 += 1)
            {
                for (int i_29 = 0; i_29 < 25;i_29 += 1)
                {
                    for (int i_30 = 0; i_30 < 25;i_30 += 1)
                    {
                        {
                            var_40 = (max(var_40, var_14));
                            arr_98 [i_11] [i_29] [i_28] [i_27 + 3] [i_11] = (~var_14);
                        }
                    }
                }
            }

            for (int i_31 = 0; i_31 < 1;i_31 += 1)
            {
                arr_102 [i_11] [i_11] [16] |= (!var_5);
                var_41 = var_4;
                var_42 += (!var_4);
                var_43 ^= -var_12;
            }
            for (int i_32 = 0; i_32 < 1;i_32 += 1)
            {
                var_44 = -var_8;
                arr_106 [i_11] [6] [i_11] = var_2;
            }
            var_45 = (~var_9);
        }

        for (int i_33 = 0; i_33 < 25;i_33 += 1)
        {
            var_46 = (min(((max((min(var_6, var_6)), (max(var_6, var_3))))), (max(var_10, var_1))));
            var_47 = min((min(var_3, var_10)), -var_3);

            for (int i_34 = 0; i_34 < 25;i_34 += 1)
            {
                var_48 = var_9;
                var_49 = -var_4;
                /* LoopNest 2 */
                for (int i_35 = 1; i_35 < 24;i_35 += 1)
                {
                    for (int i_36 = 1; i_36 < 24;i_36 += 1)
                    {
                        {
                            arr_117 [i_11] [i_11] [i_34] [i_11] [11] [i_35] = ((max(var_0, (!576460752236314624))));
                            var_50 = (max(var_50, ((max(((max(var_2, (min(var_5, var_3))))), var_0)))));
                        }
                    }
                }
            }
            for (int i_37 = 0; i_37 < 1;i_37 += 1)
            {

                /* vectorizable */
                for (int i_38 = 1; i_38 < 23;i_38 += 1)
                {
                    var_51 = (!var_13);

                    for (int i_39 = 0; i_39 < 25;i_39 += 1)
                    {
                        var_52 = (min(var_52, var_13));
                        arr_125 [i_11] [i_11] = (~var_8);
                        var_53 = var_6;
                        var_54 = (!var_2);
                    }
                }
                var_55 = var_11;
            }
        }
        for (int i_40 = 0; i_40 < 25;i_40 += 1)
        {
            var_56 = var_15;

            for (int i_41 = 0; i_41 < 25;i_41 += 1) /* same iter space */
            {

                /* vectorizable */
                for (int i_42 = 1; i_42 < 23;i_42 += 1)
                {
                    var_57 ^= var_5;
                    arr_135 [i_11] [i_40] [i_11] [14] [i_40] [21] = (~var_5);
                    arr_136 [19] [19] [i_42] [i_42 + 1] [i_11] = (~var_15);
                    arr_137 [i_40] [i_11] = var_12;
                }
                /* vectorizable */
                for (int i_43 = 0; i_43 < 25;i_43 += 1)
                {
                    arr_141 [i_40] [i_40] [i_41] [i_11] = (!var_6);
                    arr_142 [i_11] [i_40] [i_41] [i_11] = var_9;
                    var_58 = var_0;
                    var_59 = (max(var_59, var_15));
                }
                arr_143 [i_11] [i_40] [i_40] [i_41] = (max((~-var_8), var_8));
                arr_144 [i_11] = (max((max(var_12, (!var_1))), (((!(!var_1))))));
                var_60 = var_8;
                arr_145 [i_11] [i_41] = (--var_5);
            }
            for (int i_44 = 0; i_44 < 25;i_44 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_45 = 0; i_45 < 25;i_45 += 1)
                {
                    for (int i_46 = 0; i_46 < 25;i_46 += 1)
                    {
                        {
                            var_61 = var_7;
                            var_62 = var_4;
                            var_63 += (min(((max(var_14, var_13))), var_1));
                            var_64 &= var_12;
                        }
                    }
                }
                var_65 = var_0;
                arr_153 [i_11] [i_44] = min(var_7, var_7);
            }
            var_66 = var_9;
            var_67 += (max(((max(var_13, (~var_13)))), (min(((max(var_10, var_10))), (~var_1)))));
        }
    }
    var_68 = (~var_8);
    #pragma endscop
}

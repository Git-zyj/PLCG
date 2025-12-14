/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20576
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            arr_6 [i_0] [i_1] [i_1] = (arr_3 [i_1] [i_0 + 1]);
            /* LoopNest 2 */
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        var_19 = (arr_12 [i_0] [i_1] [i_2]);
                        var_20 -= (arr_12 [i_2 - 3] [i_2 - 3] [i_2 + 1]);
                        var_21 = (arr_7 [i_0 + 1] [i_0] [i_0 - 1]);
                    }
                }
            }
            arr_14 [i_1] = ((-(arr_10 [i_0] [i_0] [i_0 - 1])));
        }
        var_22 &= (~16944989157830837530);
    }
    for (int i_4 = 1; i_4 < 1;i_4 += 1)
    {
        var_23 = ((-((~(arr_16 [i_4 - 1])))));
        var_24 = (arr_16 [i_4]);
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {

        for (int i_6 = 2; i_6 < 15;i_6 += 1)
        {
            arr_23 [i_6] [i_6] = (arr_16 [i_5]);
            var_25 -= ((~(arr_18 [i_6 - 1])));
        }
        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {

            for (int i_8 = 1; i_8 < 13;i_8 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 16;i_9 += 1)
                {
                    for (int i_10 = 2; i_10 < 13;i_10 += 1)
                    {
                        {
                            var_26 = ((-(arr_26 [i_8 + 3] [i_8] [i_8 + 1])));
                            var_27 += (arr_16 [7]);
                            var_28 = (arr_26 [i_10 + 2] [i_10 - 2] [i_10]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_11 = 2; i_11 < 12;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 16;i_12 += 1)
                    {
                        {
                            var_29 &= ((!(arr_21 [i_7] [i_11])));
                            arr_39 [i_5] [i_7] [i_7] [i_8] [i_11] [i_12] = (arr_24 [i_5] [i_11]);
                            var_30 = (arr_18 [5]);
                            var_31 *= (arr_34 [1] [i_5] [i_5] [i_11 - 2]);
                        }
                    }
                }
                arr_40 [i_7] [i_7] [i_8] [i_7] = (arr_30 [i_8 + 2] [i_7]);
                var_32 = (arr_21 [i_5] [i_7]);
                arr_41 [i_7] = (arr_21 [i_7] [i_7]);
            }
            for (int i_13 = 1; i_13 < 13;i_13 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_14 = 2; i_14 < 14;i_14 += 1)
                {
                    for (int i_15 = 3; i_15 < 12;i_15 += 1)
                    {
                        {
                            var_33 = (arr_30 [i_7] [i_7]);
                            var_34 -= (arr_34 [i_5] [0] [i_13] [i_14 + 2]);
                            arr_51 [i_5] [i_7] [i_13] [i_7] [i_15] = ((~(arr_29 [i_7] [i_14] [i_14 + 1] [i_15 + 4])));
                        }
                    }
                }
                var_35 = arr_26 [i_13 - 1] [i_13 + 2] [i_13 - 1];
            }
            var_36 = (arr_37 [i_5] [1] [i_7] [i_7] [i_7]);
            /* LoopNest 3 */
            for (int i_16 = 0; i_16 < 0;i_16 += 1)
            {
                for (int i_17 = 1; i_17 < 15;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 16;i_18 += 1)
                    {
                        {
                            var_37 = arr_17 [15];
                            var_38 = ((~(arr_19 [8] [i_7])));
                            var_39 = (arr_38 [i_17] [i_16 + 1] [i_7]);
                            arr_62 [i_7] [i_17] = (-(arr_37 [i_5] [i_7] [i_16 + 1] [i_17] [i_18]));
                        }
                    }
                }
            }
        }

        for (int i_19 = 2; i_19 < 15;i_19 += 1)
        {

            for (int i_20 = 2; i_20 < 14;i_20 += 1)
            {
                var_40 += (arr_63 [i_5] [i_5] [i_5]);

                for (int i_21 = 1; i_21 < 13;i_21 += 1)
                {
                    arr_72 [i_19] [i_19] [i_20] [1] = (arr_60 [i_20 + 1] [i_20] [i_20] [i_20 - 1] [i_20 - 2]);
                    arr_73 [i_5] [i_19 - 2] [i_20 - 1] [i_21] [i_19] = -5;
                    var_41 = (~(arr_69 [i_5] [i_19 - 2] [i_19 - 2] [i_21 + 3] [i_20 + 1]));
                }
                for (int i_22 = 0; i_22 < 16;i_22 += 1)
                {
                    var_42 = (arr_67 [i_5] [i_5]);
                    var_43 &= (arr_56 [i_5]);
                    arr_76 [i_19] [i_20] = (arr_15 [i_19]);
                    arr_77 [i_5] [i_5] [i_19] [i_19] [i_22] = (arr_16 [i_19 - 2]);
                    var_44 = (min(var_44, (((~(arr_25 [i_5] [i_5]))))));
                }
                var_45 = (min(var_45, (arr_21 [8] [8])));
                arr_78 [i_5] [9] [i_19] [i_19] = 1058344924;
            }
            for (int i_23 = 3; i_23 < 12;i_23 += 1)
            {
                var_46 = (arr_35 [i_19] [i_23] [i_23] [i_23]);
                arr_81 [i_19] [i_19] = arr_52 [i_5] [i_5] [i_23 - 1];
            }
            for (int i_24 = 0; i_24 < 1;i_24 += 1)
            {
                var_47 = (arr_80 [i_19] [i_19 + 1] [i_24]);
                var_48 = (arr_17 [i_5]);
            }
            for (int i_25 = 0; i_25 < 16;i_25 += 1)
            {

                for (int i_26 = 0; i_26 < 1;i_26 += 1)
                {
                    arr_91 [i_5] [i_19] [i_25] [i_26] = ((~(arr_60 [i_19] [i_19] [i_19] [i_19 - 2] [i_19 + 1])));
                    arr_92 [i_19] = (arr_20 [i_5]);

                    for (int i_27 = 2; i_27 < 15;i_27 += 1) /* same iter space */
                    {
                        var_49 = ((~(arr_34 [i_5] [i_27 - 1] [i_19 - 2] [i_26])));
                        var_50 = (arr_93 [13] [i_19] [i_19] [i_19 - 1] [i_27 + 1]);
                        var_51 = (arr_82 [i_19] [i_19 + 1]);
                        var_52 += (arr_17 [i_19]);
                    }
                    for (int i_28 = 2; i_28 < 15;i_28 += 1) /* same iter space */
                    {
                        var_53 = arr_82 [i_26] [i_19 - 1];
                        arr_97 [1] [i_19 + 1] [i_19] [i_19] [i_19] [i_19] [i_19] = (arr_53 [i_19 - 1] [i_19 - 2] [i_28 + 1]);
                    }
                    for (int i_29 = 3; i_29 < 14;i_29 += 1)
                    {
                        var_54 = ((-(arr_54 [i_26] [i_19])));
                        var_55 &= (arr_100 [0] [i_19] [i_25] [8] [i_26] [i_26] [i_29 + 1]);
                        arr_102 [i_19] [i_19] [i_26] [i_29] = (arr_18 [i_26]);
                        var_56 += (arr_85 [i_19] [i_25] [i_26]);
                    }
                }

                for (int i_30 = 0; i_30 < 16;i_30 += 1)
                {
                    arr_105 [i_5] [i_19] [i_19] = ((-(arr_55 [i_19 - 2] [i_19] [i_30] [i_30] [i_30] [i_30])));

                    for (int i_31 = 0; i_31 < 1;i_31 += 1)
                    {
                        arr_110 [i_31] [i_19] [i_5] = (arr_45 [i_19] [i_19]);
                        var_57 = arr_19 [i_19 + 1] [i_19 + 1];
                        var_58 = (max(var_58, (((-(arr_38 [i_25] [i_25] [i_25]))))));
                        var_59 = arr_54 [i_5] [i_5];
                        var_60 = arr_108 [i_31] [i_31] [i_31] [i_31] [i_31] [i_31] [i_19 - 2];
                    }
                    for (int i_32 = 0; i_32 < 16;i_32 += 1)
                    {
                        var_61 = (arr_103 [i_5]);
                        var_62 ^= 1715320968380790914;
                        arr_113 [10] [i_32] [10] |= ((-(arr_32 [i_19] [i_32] [i_19 - 1] [i_19] [12])));
                    }
                    for (int i_33 = 1; i_33 < 14;i_33 += 1)
                    {
                        var_63 = (min(var_63, (arr_44 [i_33 + 1] [i_30] [i_19])));
                        var_64 = arr_108 [i_33 - 1] [7] [i_33 + 2] [i_33] [i_33] [5] [1];
                    }
                }
                arr_116 [i_5] [i_5] [i_5] [i_19] = (arr_74 [i_19 - 1] [i_19] [i_19 - 2] [i_19 - 1]);
                arr_117 [i_19] = ((!(arr_42 [4])));
            }
            var_65 = (arr_90 [i_19] [i_19 - 2] [i_19 - 2] [i_19 + 1]);
        }
        for (int i_34 = 0; i_34 < 16;i_34 += 1)
        {
            var_66 = (min(var_66, (arr_87 [0] [0])));
            var_67 = (max(var_67, (arr_33 [i_5] [i_5] [i_34] [i_34])));
            var_68 = ((!(arr_31 [i_5] [14] [i_5] [i_5] [i_5])));
        }
        for (int i_35 = 0; i_35 < 16;i_35 += 1)
        {
            var_69 = (arr_106 [i_35]);
            var_70 = (~64432669);
            arr_122 [i_5] [i_5] = (~((-(arr_59 [i_35] [i_5] [0] [i_5] [i_5]))));
        }
    }
    var_71 = var_6;
    #pragma endscop
}

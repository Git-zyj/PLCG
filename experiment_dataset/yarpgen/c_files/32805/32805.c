/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32805
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_4;

    for (int i_0 = 1; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = min((min((arr_0 [i_0 - 1] [i_0 - 1]), 1)), (arr_0 [i_0 - 1] [i_0 - 1]));
        arr_4 [i_0] = (((arr_2 [i_0 - 1]) >> (arr_2 [i_0 - 1])));
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_15 *= 1;
        var_16 = (min(var_16, var_4));
        var_17 = ((arr_6 [i_1 - 1]) <= ((1 ? 1 : 1)));
        var_18 = 1;
        var_19 -= (max(var_8, -var_1));
    }

    for (int i_2 = 0; i_2 < 0;i_2 += 1)
    {
        arr_9 [i_2 + 1] = ((var_6 ? (arr_2 [i_2 + 1]) : (arr_2 [i_2 + 1])));

        /* vectorizable */
        for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
        {
            var_20 = ((~var_11) > 1);
            arr_12 [i_2 + 1] [i_3] = arr_10 [i_2 + 1];

            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {

                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    var_21 = (min(var_21, ((((arr_15 [i_2 + 1] [1] [i_2] [i_4]) ? (arr_7 [i_2] [i_2 + 1]) : (arr_1 [i_2 + 1]))))));
                    var_22 = (min(var_22, var_9));
                    var_23 = (max(var_23, 0));

                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_24 = (0 || 0);
                        var_25 = 0;
                        arr_20 [i_2] [i_4] [i_2] [i_4] = -var_13;
                        var_26 = var_10;
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        arr_23 [i_2] [i_2] [i_2] [i_2] [i_4] = ((~(arr_6 [i_2])));
                        var_27 = (!(arr_21 [i_2 + 1] [1] [i_2] [i_2] [i_2]));
                    }
                    for (int i_8 = 0; i_8 < 0;i_8 += 1)
                    {
                        var_28 = var_0;
                        var_29 = arr_13 [i_4];
                        var_30 = (((((arr_6 [i_5]) ? var_2 : (arr_16 [i_2] [i_3] [i_3]))) >> (((!(arr_6 [i_4]))))));
                        arr_27 [i_2] [1] [i_4] [i_5] [i_8] [i_8] = (((arr_18 [i_2] [i_4] [i_8 + 1] [i_5]) + 1));
                    }
                }
                for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
                {
                    arr_30 [i_2] [i_4] [i_4] [i_4] = arr_26 [i_2] [i_2] [i_4] [i_4] [i_9] [i_9];

                    for (int i_10 = 1; i_10 < 1;i_10 += 1)
                    {
                        arr_33 [1] [i_3] [1] [i_9] [i_4] = 1;
                        var_31 ^= var_13;
                        arr_34 [i_2] [i_4] [i_4] = 1;
                    }
                    for (int i_11 = 1; i_11 < 1;i_11 += 1)
                    {
                        arr_37 [i_2] [1] [1] [i_4] [1] = 0;
                        arr_38 [i_9] [i_4] = (((!1) ? var_13 : (~0)));
                        var_32 = (max(var_32, (arr_21 [i_2] [i_4] [i_3] [i_4] [i_11])));
                        var_33 ^= 1;
                    }
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        var_34 -= (((arr_29 [i_2 + 1] [i_2] [i_2 + 1]) - var_8));
                        arr_41 [i_2] [i_4] [i_4] [i_9] [i_12] = var_4;
                        arr_42 [1] [i_3] [i_4] [i_9] [i_12] = ((1 ? 1 : 1));
                    }
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        arr_45 [i_13] [i_4] [i_4] [i_4] [i_2] = 0;
                        var_35 = (((arr_1 [i_2 + 1]) ? (arr_10 [i_2]) : (arr_32 [i_2] [i_2] [i_2] [i_2] [i_2])));
                        var_36 -= arr_7 [i_2] [i_2 + 1];
                    }
                    var_37 -= 0;
                    arr_46 [i_2] [i_2] [i_2] [i_4] = ((1 ? var_2 : 1));
                }
                for (int i_14 = 0; i_14 < 1;i_14 += 1) /* same iter space */
                {
                    var_38 = (!(1 > 1));
                    var_39 -= 1;
                    var_40 = (!(arr_21 [i_2] [i_14] [1] [1] [i_2 + 1]));
                    var_41 -= arr_36 [i_2] [i_2 + 1] [i_2] [i_2 + 1];
                }
                for (int i_15 = 0; i_15 < 1;i_15 += 1)
                {
                    var_42 = 0;
                    var_43 = var_13;

                    for (int i_16 = 1; i_16 < 1;i_16 += 1)
                    {
                        arr_55 [i_2] [i_3] [i_4] [i_4] [i_3] = ((var_2 ? (arr_21 [i_16 - 1] [i_16 - 1] [i_16 - 1] [i_16 - 1] [i_16 - 1]) : (arr_54 [i_16 - 1] [i_16 - 1] [i_16 - 1] [i_16 - 1] [i_16 - 1])));
                        var_44 = (min(var_44, var_7));
                        var_45 = (max(var_45, (arr_40 [i_2] [i_3] [1] [i_15] [1])));
                    }
                    for (int i_17 = 0; i_17 < 1;i_17 += 1)
                    {
                        var_46 = (max(var_46, var_12));
                        var_47 = arr_53 [i_17];
                    }
                }
                var_48 -= (!((((arr_15 [i_2] [1] [i_3] [i_4]) >> 1))));

                for (int i_18 = 0; i_18 < 1;i_18 += 1)
                {
                    var_49 = (min(var_49, ((((arr_43 [1] [i_3] [i_4] [i_18] [i_2] [i_2 + 1] [i_4]) >> 1)))));
                    arr_60 [i_4] [i_4] [i_3] [i_4] = 1;
                }
                for (int i_19 = 0; i_19 < 1;i_19 += 1)
                {

                    for (int i_20 = 0; i_20 < 1;i_20 += 1)
                    {
                        arr_67 [i_2] [i_3] [i_4] [i_4] [i_4] = var_4;
                        var_50 ^= (!(arr_56 [i_2 + 1] [i_2] [i_2 + 1] [i_2 + 1] [i_2 + 1]));
                    }
                    for (int i_21 = 0; i_21 < 1;i_21 += 1) /* same iter space */
                    {
                        arr_70 [i_19] [i_19] [i_19] [i_19] [i_4] [0] [i_19] = var_8;
                        arr_71 [i_2] [i_2 + 1] [i_4] [i_2] [i_2 + 1] = var_12;
                    }
                    for (int i_22 = 0; i_22 < 1;i_22 += 1) /* same iter space */
                    {
                        var_51 = (((arr_49 [1] [i_2 + 1] [i_4] [1] [i_22]) * (arr_54 [i_2 + 1] [i_2] [i_2 + 1] [i_2 + 1] [1])));
                        var_52 = (arr_56 [i_19] [i_2] [i_19] [i_2 + 1] [i_2]);
                        var_53 = (1 / 1);
                    }
                    var_54 = (min(var_54, -1));

                    for (int i_23 = 0; i_23 < 1;i_23 += 1) /* same iter space */
                    {
                        arr_78 [i_2] [i_4] = ((0 - (arr_11 [i_2 + 1])));
                        arr_79 [i_4] [i_4] = (!1);
                        arr_80 [i_2 + 1] [i_4] = ((((arr_5 [i_2]) ? var_5 : (arr_58 [i_2] [i_3] [i_19] [i_19]))) != (~1));
                    }
                    for (int i_24 = 0; i_24 < 1;i_24 += 1) /* same iter space */
                    {
                        arr_85 [i_2] [i_4] [i_2 + 1] [i_2] [i_2 + 1] [i_2] = ((-(((arr_84 [i_2] [i_2 + 1] [i_2 + 1]) ? (arr_66 [i_2 + 1] [i_2] [1] [1] [i_2]) : var_12))));
                        arr_86 [i_24] [i_4] [i_3] [i_19] [i_24] = ((-(arr_81 [i_2] [i_4])));
                        arr_87 [i_2 + 1] [i_3] [i_4] [i_4] = var_4;
                        var_55 -= (!(arr_61 [i_2] [i_3] [i_2 + 1] [i_19] [1] [i_3]));
                    }
                    var_56 = (~1);
                    var_57 = -1;
                }
            }
            arr_88 [i_2] [i_2] = (~1);
            var_58 = 1;
        }
        for (int i_25 = 0; i_25 < 1;i_25 += 1) /* same iter space */
        {
            var_59 -= ((((((arr_10 [i_2]) ? (arr_28 [1] [i_2 + 1] [i_2 + 1] [i_2] [i_25]) : (arr_28 [i_2] [i_2 + 1] [i_2] [i_25] [i_2])))) ? (((!(arr_10 [i_2])))) : ((min(0, 0)))));
            var_60 = arr_56 [i_25] [i_25] [i_2 + 1] [i_2] [i_25];
            arr_91 [i_2] [i_2] [i_2] = -1;
        }
        /* vectorizable */
        for (int i_26 = 0; i_26 < 0;i_26 += 1)
        {
            arr_94 [i_26] [1] [i_26] = (arr_77 [i_26] [i_26 + 1] [1] [i_2 + 1] [i_26]);
            var_61 = var_13;
            /* LoopNest 2 */
            for (int i_27 = 1; i_27 < 1;i_27 += 1)
            {
                for (int i_28 = 0; i_28 < 1;i_28 += 1)
                {
                    {
                        arr_101 [i_28] [i_26] [i_26] [i_2 + 1] = arr_44 [i_2] [i_2] [i_26] [i_27 - 1] [i_28];
                        var_62 = -1;

                        for (int i_29 = 0; i_29 < 1;i_29 += 1) /* same iter space */
                        {
                            arr_104 [i_26] [i_26] [i_26] [i_26] [i_26 + 1] [i_26] = (((arr_97 [i_26] [i_27 - 1] [i_26]) ? (arr_68 [i_27] [i_27] [i_26] [i_27 - 1] [i_27]) : ((~(arr_7 [1] [1])))));
                            var_63 = 1;
                            arr_105 [i_2] [i_27] [i_26] = ((var_12 ^ (arr_75 [i_27 - 1] [i_27 - 1] [i_27] [i_27 - 1] [i_27])));
                            var_64 = (min(var_64, -1));
                            var_65 = arr_0 [i_26 + 1] [i_26 + 1];
                        }
                        for (int i_30 = 0; i_30 < 1;i_30 += 1) /* same iter space */
                        {
                            arr_108 [1] [i_26 + 1] [i_26 + 1] [i_26] [i_26] = 1;
                            var_66 = arr_96 [i_2 + 1] [1] [i_26] [i_30];
                            arr_109 [i_26] = (1 != 1);
                            var_67 = (max(var_67, var_8));
                        }
                        for (int i_31 = 1; i_31 < 1;i_31 += 1)
                        {
                            arr_113 [i_2] [i_26] [i_2 + 1] [i_2] [i_2 + 1] = ((-(arr_100 [i_28] [i_27] [i_26 + 1] [i_2 + 1])));
                            var_68 = (((1 > 1) ? 1 : -1));
                            var_69 = (max(var_69, var_0));
                            var_70 = (((arr_31 [i_27] [i_27 - 1] [i_26 + 1] [i_26 + 1] [i_2 + 1]) ? (arr_17 [i_26] [0]) : var_12));
                            var_71 = (max(var_71, -0));
                        }
                    }
                }
            }
        }
    }
    var_72 = (max((!1), ((((1 ? 1 : 0)) ^ 1))));
    #pragma endscop
}

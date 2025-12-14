/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5000
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] [i_0] = (((max(-15872, (-15872 == -15872))) % (arr_4 [1] [i_1] [i_0 - 1])));
                var_19 = -var_18;
                arr_7 [i_1] [i_1] = ((var_17 - (~var_2)));
            }
        }
    }

    for (int i_2 = 1; i_2 < 10;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            var_20 = (max(var_20, ((min(((var_1 ? ((var_2 * (arr_1 [i_2 - 1] [i_3]))) : (-15873 % -15873))), (!15872))))));
            arr_14 [i_2] [i_2 - 1] = (arr_10 [i_2] [i_2] [i_2]);
        }
        for (int i_4 = 3; i_4 < 10;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    {
                        var_21 = (max(var_21, (((min(-5, var_12))))));
                        arr_25 [i_2 - 1] = ((min(6449, (~1016))));
                        arr_26 [i_2 - 1] [i_4] [1] = (min(0, (arr_24 [i_6])));
                    }
                }
            }

            for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
            {
                arr_31 [i_7] [i_4] [i_2] = (max(1, ((-1 | ((min(var_6, var_1)))))));
                var_22 = (((arr_0 [i_2 + 1]) ? (arr_16 [i_2 + 1]) : (((arr_16 [i_2 + 1]) ? (arr_16 [i_2 - 1]) : var_3))));
            }
            /* vectorizable */
            for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
            {
                arr_35 [6] [6] = var_10;
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 0;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        {
                            var_23 = (((arr_23 [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_2 + 1]) ? 0 : -15872));
                            var_24 = -0;
                            arr_41 [i_9] [i_4] [i_9 + 1] [i_9] [i_4] [i_9 + 1] [i_8] = ((0 ? (arr_19 [i_2 + 1] [i_2 + 1]) : ((-21182 ? 1 : 1))));
                        }
                    }
                }
                arr_42 [i_2 + 1] [i_4 - 2] = arr_18 [i_2] [i_2] [i_8];
            }
            for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
            {

                for (int i_12 = 1; i_12 < 9;i_12 += 1)
                {
                    var_25 = (min(var_25, ((min((max((((arr_11 [0]) ? 96 : var_6)), -var_16)), 0)))));
                    var_26 += var_12;
                    var_27 = (max((((!(arr_3 [i_12 + 1] [i_4])))), ((-(var_14 || var_16)))));
                    var_28 = (max(var_28, var_17));
                    arr_47 [i_4] [1] [i_4 - 3] [1] |= var_5;
                }
                var_29 = (min(var_29, ((min(0, ((min((arr_24 [i_11]), -15268))))))));
                arr_48 [i_2] [i_2] [i_2] [i_11] = (((var_0 ? 1 : var_7)));
            }
        }
        var_30 += ((((((((var_4 ? 0 : var_17))) ? var_10 : (arr_30 [i_2])))) ? ((max((arr_2 [i_2 - 1]), (arr_32 [i_2 - 1])))) : var_10));
        arr_49 [i_2] [i_2 + 1] = ((((!(arr_32 [i_2]))) ? (((max(var_5, var_7)))) : var_16));
        var_31 -= -10755;
    }

    for (int i_13 = 2; i_13 < 18;i_13 += 1)
    {

        for (int i_14 = 0; i_14 < 1;i_14 += 1) /* same iter space */
        {
            var_32 = (min(var_32, -1));
            var_33 *= max(1, ((!((max((arr_3 [i_14] [4]), var_7))))));
            arr_56 [i_14] [i_14] [i_13] = ((((min(((var_13 ? 1 : var_1)), -24462))) ? -var_5 : var_2));
        }
        for (int i_15 = 0; i_15 < 1;i_15 += 1) /* same iter space */
        {
            arr_61 [i_13 - 2] &= ((~(((arr_53 [i_13 - 1]) | (arr_0 [i_13])))));
            arr_62 [i_13 - 1] [i_13] = arr_4 [i_13] [i_13] [i_13];
            /* LoopNest 3 */
            for (int i_16 = 0; i_16 < 1;i_16 += 1)
            {
                for (int i_17 = 3; i_17 < 17;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 19;i_18 += 1)
                    {
                        {
                            var_34 = (min(var_34, 32767));
                            arr_72 [1] [i_17] [11] [i_15] [11] [i_13] = 17237;
                            arr_73 [i_13] [i_13] [i_15] [i_15] [i_16] [i_17] [i_18] = (!(((-15062 ? var_15 : 0))));
                        }
                    }
                }
            }
            var_35 = var_16;
        }
        /* vectorizable */
        for (int i_19 = 1; i_19 < 16;i_19 += 1)
        {
            /* LoopNest 3 */
            for (int i_20 = 0; i_20 < 19;i_20 += 1)
            {
                for (int i_21 = 0; i_21 < 1;i_21 += 1)
                {
                    for (int i_22 = 3; i_22 < 18;i_22 += 1)
                    {
                        {
                            arr_87 [i_22] [i_21] [1] [i_19] [i_22] = (((arr_74 [i_19 + 3] [i_20] [i_22 - 2]) >> (arr_74 [i_19 - 1] [i_21] [i_22 + 1])));
                            var_36 |= var_13;
                        }
                    }
                }
            }
            arr_88 [i_13 - 1] [i_19] = 1;
            var_37 |= (((1 ? 0 : (arr_70 [i_19]))));
            arr_89 [i_13] = var_10;
            var_38 = (min(var_38, ((!(arr_0 [i_19])))));
        }
        /* LoopNest 2 */
        for (int i_23 = 0; i_23 < 19;i_23 += 1)
        {
            for (int i_24 = 0; i_24 < 19;i_24 += 1)
            {
                {
                    arr_97 [2] [2] [i_24] = var_15;
                    arr_98 [i_13] [i_13 + 1] [i_13 + 1] [i_13] = (arr_69 [i_13] [i_13] [i_13] [i_13] [i_13] [9]);

                    for (int i_25 = 0; i_25 < 19;i_25 += 1)
                    {
                        arr_102 [i_13 - 1] [i_23] [i_24] [i_25] = ((var_16 ? ((min(1, var_13))) : -var_8));
                        arr_103 [i_13] [0] [i_24] [i_25] = min((((arr_66 [9] [i_23] [i_23] [i_25]) > -0)), (!-17238));
                    }

                    for (int i_26 = 0; i_26 < 0;i_26 += 1)
                    {
                        var_39 -= 17627;
                        var_40 *= 17238;
                        arr_107 [i_13 + 1] [i_13] = (((-1 != var_5) & 9953));
                    }
                    var_41 -= ((~((-(arr_52 [i_13 + 1] [i_24])))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_27 = 0; i_27 < 0;i_27 += 1)
    {
        arr_112 [i_27] [i_27 + 1] = ((0 ? 1 : 1));
        var_42 = (max(var_42, (!var_10)));
    }
    /* vectorizable */
    for (int i_28 = 0; i_28 < 16;i_28 += 1)
    {
        /* LoopNest 3 */
        for (int i_29 = 0; i_29 < 1;i_29 += 1)
        {
            for (int i_30 = 0; i_30 < 1;i_30 += 1)
            {
                for (int i_31 = 1; i_31 < 1;i_31 += 1)
                {
                    {
                        var_43 = (min(var_43, 0));
                        arr_124 [i_28] [i_28] |= ((-((18228 ? -25539 : 30787))));
                        arr_125 [i_28] [i_28] [i_28] [i_28] = 0;
                    }
                }
            }
        }
        var_44 = (((var_2 ? (arr_67 [i_28] [i_28] [i_28] [i_28]) : 25545)));

        for (int i_32 = 0; i_32 < 0;i_32 += 1)
        {
            var_45 = 1;
            arr_128 [i_28] [i_32] [i_32] = (0 > 1);
            var_46 = (arr_90 [i_32 + 1] [14]);
            arr_129 [i_28] [i_32] [i_28] = ((!(arr_94 [i_28] [i_32 + 1] [i_32] [i_32 + 1])));
            arr_130 [i_28] [i_32] [i_32 + 1] = (((arr_86 [i_28] [i_28] [i_28] [i_28]) ? 1 : (arr_63 [i_32 + 1] [i_32 + 1] [i_32 + 1])));
        }
    }
    #pragma endscop
}

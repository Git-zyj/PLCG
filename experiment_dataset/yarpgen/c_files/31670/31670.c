/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31670
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                var_10 *= ((~(arr_5 [i_0] [i_1 + 1])));

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    var_11 *= var_5;

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_12 = (min((min((arr_9 [i_0] [i_2] [i_3]), var_2)), (((arr_9 [i_1 - 1] [i_1 - 1] [i_1 + 1]) ? (arr_9 [i_1 + 1] [i_1 - 1] [i_1 - 1]) : var_2))));
                        var_13 = (min(var_13, (((((min((arr_7 [i_0] [i_2]), ((((arr_3 [i_1]) != var_8)))))) ? ((max(23793, 23793))) : 41742)))));
                        arr_12 [14] [14] &= ((-(arr_1 [i_0] [i_1])));
                    }
                    for (int i_4 = 2; i_4 < 20;i_4 += 1) /* same iter space */
                    {
                        var_14 = (((-(var_5 - var_9))));
                        arr_16 [i_0] [i_0] [i_0] [i_0] = ((-(49631 / -5226703646437207793)));
                        arr_17 [i_0] = var_9;
                    }
                    for (int i_5 = 2; i_5 < 20;i_5 += 1) /* same iter space */
                    {
                        arr_20 [i_0] = (min(((var_1 - (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]))), 41735));
                        var_15 = (arr_1 [i_1] [i_2]);
                    }
                    for (int i_6 = 2; i_6 < 20;i_6 += 1) /* same iter space */
                    {
                        arr_23 [i_0] = (((arr_4 [i_0]) | (((var_6 ? 10243552303583988845 : (arr_2 [i_0] [i_0]))))));
                        var_16 += ((-(arr_3 [i_6])));
                    }
                    var_17 &= (((~(arr_2 [i_0] [8]))));
                }
                for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
                {

                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        arr_28 [i_0] [i_1 + 1] [i_0] [i_0] [i_7] [i_8] = ((+(((0 || 4490090822993839037) ? ((-(arr_6 [i_0]))) : (arr_18 [i_0] [i_0] [i_1 + 1] [i_7] [i_7] [i_8])))));
                        arr_29 [i_0] [i_1 - 1] = (max(((max((arr_14 [i_0]), (arr_14 [i_0])))), (((arr_14 [i_0]) << (var_6 - 8813045164637957538)))));
                    }
                    arr_30 [i_0] = (max(((~(var_6 & var_4))), (((var_9 ? 80 : (((!(arr_26 [i_0] [i_0])))))))));
                }
                for (int i_9 = 0; i_9 < 24;i_9 += 1) /* same iter space */
                {
                    arr_33 [i_0] [i_0] = (~var_4);
                    arr_34 [i_0] [i_0] [i_9] [i_1] = (((min(((max(var_2, var_7))), var_5)) << (((!var_2) * ((min((arr_1 [i_0] [i_1]), var_5)))))));
                    var_18 = ((((arr_2 [i_0] [i_0]) < var_4)));
                }
                arr_35 [i_0] [i_0] = (max((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_0])));
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 24;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 24;i_11 += 1)
                    {
                        {
                            var_19 += var_9;
                            arr_40 [i_0] [i_1] [i_10] [i_0] = ((((arr_15 [i_1 + 1] [i_1] [i_1 - 1] [i_1 - 1] [i_10]) ? (((var_1 | (arr_32 [i_0])))) : (arr_0 [i_1] [i_10]))));
                            var_20 = (min(((min((min((arr_24 [i_0] [i_0]), -1)), var_2))), (!0)));
                            arr_41 [i_0] [i_0] [i_0] [i_11] = ((((+(min((arr_15 [i_11] [i_11] [i_10] [i_0] [i_0]), (arr_13 [i_0] [i_0]))))) != (((-var_2 + (arr_1 [i_0] [i_0]))))));
                            arr_42 [i_10] [i_1] [i_10] [i_11] [i_1 - 1] [i_10] |= (!-29888);
                        }
                    }
                }
            }
        }
    }

    for (int i_12 = 0; i_12 < 20;i_12 += 1) /* same iter space */
    {

        for (int i_13 = 1; i_13 < 18;i_13 += 1)
        {
            var_21 = (min(var_8, ((((min(var_2, var_3))) ? var_0 : (max(var_8, var_9))))));
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 20;i_14 += 1)
            {
                for (int i_15 = 3; i_15 < 19;i_15 += 1)
                {
                    {
                        arr_56 [i_12] [i_12] [i_14] [i_15 - 2] &= (min(((-((var_5 ? var_4 : -31649)))), -2194));
                        var_22 &= (((min((~var_5), (!var_3))) * (arr_8 [i_14] [i_13] [i_14] [i_14])));
                        var_23 = (min(var_6, (arr_50 [i_12] [i_12] [i_14] [i_15 + 1])));
                    }
                }
            }
        }
        for (int i_16 = 0; i_16 < 20;i_16 += 1)
        {
            /* LoopNest 2 */
            for (int i_17 = 0; i_17 < 20;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 20;i_18 += 1)
                {
                    {
                        arr_67 [i_18] [i_17] [i_16] [i_12] = ((min(((max((arr_27 [i_12]), var_5))), (arr_15 [i_12] [i_12] [i_17] [i_18] [i_17]))));
                        arr_68 [i_17] [i_12] = ((~(arr_14 [i_16])));
                    }
                }
            }
            var_24 = (min((arr_15 [i_12] [i_12] [i_12] [i_12] [i_16]), (min(((min(var_4, (arr_18 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12])))), (arr_54 [i_16] [i_16] [i_12] [i_12])))));
        }
        arr_69 [i_12] = (arr_48 [i_12] [i_12]);
    }
    for (int i_19 = 0; i_19 < 20;i_19 += 1) /* same iter space */
    {
        var_25 = var_9;
        var_26 *= ((~(-var_0 + var_0)));

        for (int i_20 = 1; i_20 < 17;i_20 += 1)
        {
            var_27 = ((~(((var_6 <= (((min(var_7, var_5)))))))));
            arr_77 [i_20] = (max(-var_5, (min(var_6, (arr_64 [i_20 + 2] [i_20 + 2] [i_19] [i_19])))));
            /* LoopNest 2 */
            for (int i_21 = 0; i_21 < 20;i_21 += 1)
            {
                for (int i_22 = 1; i_22 < 1;i_22 += 1)
                {
                    {
                        var_28 &= ((-9498 ? -31664 : -22));

                        for (int i_23 = 0; i_23 < 20;i_23 += 1)
                        {
                            arr_87 [i_19] [i_23] [i_19] [i_19] [i_19] [i_19] [i_19] &= ((!((max(((min(51436, 65513))), var_8)))));
                            arr_88 [i_19] [i_19] [i_21] [i_19] [i_20] = (min(var_0, ((-(((var_8 < (arr_50 [i_19] [i_19] [i_19] [i_23]))))))));
                            var_29 = (((arr_27 [i_22 - 1]) ? (((var_7 ? var_6 : var_1))) : (min(36028797018963967, (arr_58 [i_19])))));
                        }
                        for (int i_24 = 0; i_24 < 1;i_24 += 1)
                        {
                            arr_91 [i_20] [i_20] = var_7;
                            arr_92 [i_20] [i_22 - 1] [i_20] [i_20] [i_20] [i_20] = (arr_2 [i_20 + 2] [i_20]);
                            var_30 = (min(((-((min((arr_72 [i_21]), (arr_50 [i_19] [i_19] [i_19] [i_22])))))), var_1));
                            var_31 = ((-(((!(arr_48 [i_22 - 1] [i_22 - 1]))))));
                        }
                        arr_93 [i_20] [i_20] [i_20 + 1] [i_22] [i_22] [i_19] = (89 > var_5);
                    }
                }
            }
        }
        for (int i_25 = 0; i_25 < 20;i_25 += 1)
        {
            var_32 += -9495;
            arr_97 [i_25] [i_19] = ((max(((var_7 ? (arr_38 [i_19] [i_19] [i_25] [i_25] [i_25] [i_25]) : var_2)), ((var_5 ? (arr_46 [i_19] [i_19]) : var_5)))));
        }
        for (int i_26 = 2; i_26 < 17;i_26 += 1)
        {
            var_33 = var_5;
            arr_101 [i_19] = ((-(max((max(var_8, var_3)), var_2))));
        }
        for (int i_27 = 1; i_27 < 18;i_27 += 1)
        {
            var_34 ^= (arr_59 [i_19] [i_27 + 1] [i_27 + 1]);
            arr_104 [i_19] [i_19] [i_27] &= min(((((~var_3) ? var_7 : ((var_4 ? (arr_63 [i_19] [i_19] [i_19] [i_27] [i_27]) : var_6))))), (max(((min(var_8, var_7))), (arr_38 [i_27 + 2] [i_27] [i_27] [i_27] [i_27] [i_27]))));
            var_35 *= var_8;
        }
    }
    var_36 = (((~((var_6 ? var_0 : var_3)))));
    var_37 += ((~((((min(var_3, var_1))) | ((var_4 ? 89 : var_7))))));
    var_38 = (min(var_38, var_5));
    #pragma endscop
}

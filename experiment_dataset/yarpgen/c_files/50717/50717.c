/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50717
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, var_9));

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_14 = ((~(arr_2 [i_0] [i_0 + 1])));
        arr_3 [6] |= (-(~155));
    }
    for (int i_1 = 0; i_1 < 0;i_1 += 1)
    {
        arr_8 [i_1] = ((!(((-(((!(arr_6 [i_1] [i_1])))))))));
        arr_9 [0] [i_1 + 1] = ((-(!var_7)));

        for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
        {
            arr_12 [i_1 + 1] [i_2] [i_2] = ((~((~((~(arr_10 [i_1])))))));
            arr_13 [i_1] [i_1] = ((!(!var_11)));
            arr_14 [9] [i_2] = ((-(arr_10 [i_1 + 1])));
            arr_15 [3] [i_1] [i_1 + 1] = ((~(~1)));
            arr_16 [i_1] = (!var_10);
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
        {
            var_15 = -0;
            var_16 = (max(var_16, (!4987798797294796733)));
        }
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            var_17 = ((~(!4987798797294796733)));
            var_18 |= (!1);
            arr_23 [i_1] = (!13458945276414754883);
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                {

                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        var_19 = (min(var_19, (((!(arr_18 [i_1 + 1] [i_1 + 1] [i_1 + 1]))))));
                        var_20 ^= (!3199906577);
                        arr_31 [i_1] [i_6] [i_7] = ((~(~1095060730)));
                    }
                    arr_32 [i_1 + 1] [i_5] [i_6] = -1526590530;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 25;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 25;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 25;i_10 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 25;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 25;i_12 += 1)
                        {
                            {
                                var_21 = ((-(!13458945276414754883)));
                                arr_45 [2] [i_11] [i_11] = (!-var_8);
                            }
                        }
                    }

                    for (int i_13 = 0; i_13 < 25;i_13 += 1)
                    {
                        var_22 = -1140924418;
                        arr_48 [i_8] [i_8] [i_8] [13] [i_8] [21] = (((-(arr_42 [3] [i_8] [i_9] [i_8] [i_10] [i_13]))));
                    }
                    for (int i_14 = 2; i_14 < 24;i_14 += 1) /* same iter space */
                    {

                        for (int i_15 = 0; i_15 < 25;i_15 += 1)
                        {
                            arr_55 [i_8] [i_9] [i_10] [i_14] [i_15] = ((~(((~(arr_40 [i_8] [i_8] [22] [i_8]))))));
                            var_23 = (max(var_23, ((~(!421717899)))));
                            var_24 = (min(var_24, (((-((~(arr_51 [i_14 - 2] [i_14 + 1] [i_14 - 2] [i_14 + 1]))))))));
                        }
                        for (int i_16 = 0; i_16 < 25;i_16 += 1)
                        {
                            arr_59 [18] [i_9] [10] = (~-var_12);
                            var_25 ^= (!29720);
                            arr_60 [i_8] [i_8] [11] [i_14] [11] = (--1095060718);
                        }
                        /* vectorizable */
                        for (int i_17 = 3; i_17 < 24;i_17 += 1) /* same iter space */
                        {
                            var_26 = (max(var_26, 1140924411));
                            var_27 += (~-var_1);
                        }
                        /* vectorizable */
                        for (int i_18 = 3; i_18 < 24;i_18 += 1) /* same iter space */
                        {
                            arr_67 [i_8] [1] [12] [i_14 - 2] [i_14 - 2] [i_18] = -var_12;
                            var_28 = ((!(!4987798797294796733)));
                            arr_68 [i_9] [i_8] |= (~30);
                        }
                        arr_69 [i_8] [i_9] [i_10] [i_14] [i_14] = ((~(~var_12)));
                        var_29 = ((-(!7340256763226193163)));
                    }
                    /* vectorizable */
                    for (int i_19 = 2; i_19 < 24;i_19 += 1) /* same iter space */
                    {
                        var_30 = ((-(arr_65 [i_19] [i_10] [i_9] [i_8])));
                        var_31 = (max(var_31, (((-(arr_40 [i_9] [18] [i_10] [i_19 - 2]))))));
                    }
                    for (int i_20 = 0; i_20 < 25;i_20 += 1)
                    {

                        for (int i_21 = 0; i_21 < 1;i_21 += 1)
                        {
                            arr_76 [i_8] [i_8] = (~13458945276414754866);
                            arr_77 [i_20] = (arr_35 [i_20]);
                        }
                        for (int i_22 = 0; i_22 < 25;i_22 += 1)
                        {
                            var_32 = (((~(!var_10))));
                            arr_81 [i_8] [i_9] [14] [13] [i_22] = -5996168380010915943;
                            arr_82 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] = ((!(~-1140924392)));
                        }
                        for (int i_23 = 0; i_23 < 25;i_23 += 1)
                        {
                            var_33 = ((~((~(~var_7)))));
                            var_34 = ((!(((-(arr_79 [i_23] [i_10]))))));
                            var_35 &= (--4021256090);
                        }
                        for (int i_24 = 1; i_24 < 23;i_24 += 1)
                        {
                            arr_89 [i_24 - 1] [i_24] [i_10] = var_0;
                            var_36 += (!-239);
                        }
                        arr_90 [i_8] = -var_5;
                    }
                }
            }
        }
    }
    #pragma endscop
}

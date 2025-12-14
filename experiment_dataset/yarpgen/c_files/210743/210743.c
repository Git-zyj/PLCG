/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210743
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_20 = ((!((((((arr_1 [i_0] [i_0]) <= var_1)) ? (((!(arr_2 [i_0])))) : var_1)))));
        var_21 ^= (((arr_2 [i_0]) && ((min((arr_0 [i_0] [6]), var_12)))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_22 = ((-(min((arr_3 [i_1] [i_1]), (arr_4 [i_1])))));

        for (int i_2 = 1; i_2 < 21;i_2 += 1)
        {
            var_23 = var_13;

            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                var_24 = ((((((((min(var_1, (arr_8 [15] [i_2 - 1])))) || var_3)))) | ((((-(arr_7 [i_2] [i_2] [9] [i_3]))) % (arr_4 [i_3])))));

                for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                {
                    var_25 = (((arr_11 [i_2 + 1] [i_2]) >> var_18));
                    arr_12 [i_1] [i_1] [i_1] [i_1] [i_2] = min(((min((arr_4 [i_1]), (((!(arr_8 [4] [10]))))))), (arr_4 [i_1]));
                    var_26 = (arr_3 [i_1] [i_2 - 1]);
                }
                for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                {
                    arr_17 [i_2] = ((!(((-(arr_6 [i_2 - 1]))))));
                    var_27 = (min((min(((-18 ? 233 : 18446744073709551607)), (arr_16 [i_2] [i_2 + 1] [i_2] [i_5]))), (min((min(var_7, var_15)), (((71 ? (arr_8 [i_1] [i_1]) : var_17)))))));
                }
                arr_18 [i_1] [i_2] = ((+((var_3 ? (arr_10 [i_1] [i_2 - 1] [i_2 + 1] [19]) : 65535))));
            }
        }
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            var_28 = ((-(~var_1)));
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 20;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 20;i_8 += 1)
                {
                    {
                        var_29 -= (22 >= 2111062325329920);
                        arr_27 [i_7] = ((((arr_10 [i_7 + 2] [i_7 + 2] [i_7 + 1] [i_8 + 1]) > var_3)));
                    }
                }
            }
            arr_28 [i_1] = (arr_25 [17] [i_1] [i_1] [i_6] [i_6] [i_6]);
        }
    }

    /* vectorizable */
    for (int i_9 = 4; i_9 < 15;i_9 += 1)
    {
        var_30 = 2111062325329920;
        var_31 = (arr_7 [i_9] [i_9 + 2] [i_9 + 2] [i_9 + 2]);
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 17;i_10 += 1)
        {
            for (int i_11 = 3; i_11 < 16;i_11 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        for (int i_13 = 1; i_13 < 16;i_13 += 1)
                        {
                            {
                                arr_40 [i_9] [i_9] [i_13] = var_19;
                                arr_41 [i_9] = var_6;
                                arr_42 [i_11 + 1] [i_10] [i_11] [i_12] [i_9] = var_3;
                                var_32 = ((arr_36 [13] [i_10] [i_11 - 1] [i_9 - 2]) <= (arr_36 [i_9 - 4] [i_10] [i_11 - 1] [i_9 - 2]));
                            }
                        }
                    }

                    for (int i_14 = 1; i_14 < 16;i_14 += 1)
                    {
                        var_33 = var_8;
                        arr_46 [i_9 - 2] [i_9] [i_11] = (i_9 % 2 == zero) ? ((((arr_9 [i_11 - 1] [i_11 - 1] [i_9]) + (arr_9 [i_11 - 2] [i_14 + 1] [i_9])))) : ((((arr_9 [i_11 - 1] [i_11 - 1] [i_9]) - (arr_9 [i_11 - 2] [i_14 + 1] [i_9]))));
                        var_34 = (arr_38 [i_9 - 4] [3] [13] [i_9] [i_11] [i_10]);
                        arr_47 [i_9] = (!var_8);
                    }
                    for (int i_15 = 0; i_15 < 17;i_15 += 1)
                    {
                        var_35 = (!var_13);
                        var_36 -= -var_14;
                        arr_50 [i_9] [i_9] [i_11 - 3] [i_15] = ((~(~22)));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_16 = 0; i_16 < 12;i_16 += 1)
    {
        var_37 &= (((arr_39 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16]) | -23));
        var_38 = ((((var_6 ? var_6 : 22)) > (18444633011384221678 && var_18)));
    }
    for (int i_17 = 0; i_17 < 20;i_17 += 1)
    {
        var_39 += (((((((arr_22 [9]) ^ (arr_53 [i_17]))))) >= ((-22 ? (((!(arr_14 [i_17] [i_17] [i_17])))) : (arr_21 [i_17] [i_17])))));
        var_40 = (min(((-(min(65535, (arr_7 [i_17] [i_17] [i_17] [12]))))), (!var_13)));
    }
    /* LoopNest 2 */
    for (int i_18 = 2; i_18 < 17;i_18 += 1)
    {
        for (int i_19 = 0; i_19 < 18;i_19 += 1)
        {
            {
                var_41 = -1;
                var_42 = ((var_18 ? (((var_6 + ((-(arr_10 [i_19] [i_19] [i_19] [i_18])))))) : var_15));
                arr_60 [i_18] [i_18] [i_19] = (min((arr_7 [i_18] [i_18 + 1] [i_18] [i_18]), (((-(!var_5))))));
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32346
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (~0);

    for (int i_0 = 3; i_0 < 16;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] [i_2] = var_8;

                    for (int i_3 = 3; i_3 < 17;i_3 += 1)
                    {
                        var_13 ^= ((var_1 & (var_2 << var_11)));
                        var_14 = (min(var_14, (arr_7 [i_0] [i_1] [i_3] [i_0])));
                    }
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        arr_15 [8] [i_0] [i_2] [i_2] [i_2] [17] = (((max((arr_5 [i_1] [i_1] [i_0 - 1]), var_6)) > (((var_11 ? var_10 : var_6)))));

                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            var_15 = (((arr_13 [i_0]) ? ((-104 + (((arr_7 [i_0] [i_1] [i_2] [i_5]) ? 9 : (arr_12 [9] [i_1] [i_2 - 1] [i_5]))))) : ((((min(var_11, (arr_14 [i_0] [i_1] [i_2] [i_1] [i_4] [i_5]))))))));
                            var_16 = (min(var_16, (arr_5 [i_0 + 1] [i_2 - 1] [i_4])));
                            arr_18 [i_0] [3] [i_1] [i_1] [i_0] = ((var_3 ? ((-((78 ? var_7 : var_2)))) : (var_7 || var_5)));
                            arr_19 [i_0] [i_1] [i_1] [8] [i_0] [4] &= var_8;
                        }
                        for (int i_6 = 1; i_6 < 16;i_6 += 1) /* same iter space */
                        {
                            arr_22 [i_6] [i_0] [i_0] [i_0] = ((var_4 ? (((!var_10) ? (~var_6) : ((var_0 ? var_1 : var_4)))) : ((((min(1, 109)))))));
                            var_17 -= (min((var_4 > var_5), -var_6));
                            arr_23 [i_0] = (!var_4);
                        }
                        for (int i_7 = 1; i_7 < 16;i_7 += 1) /* same iter space */
                        {
                            var_18 = (((arr_12 [i_0 - 1] [i_0 + 2] [i_2 - 1] [i_2 - 1]) > var_7));
                            arr_27 [i_0] [i_7 + 1] [i_4] [i_2] [10] [i_0] [i_0] = ((((min((arr_25 [i_7 - 1]), (arr_16 [i_4] [i_7])))) ? var_8 : (arr_1 [i_0])));
                        }
                        arr_28 [i_0] [i_0] = (~-13271);
                        arr_29 [i_0] = (-((6883671438824982611 ? 249 : 3631598318756651909)));
                        arr_30 [i_0 - 3] [i_0 - 3] [i_0 - 1] [i_0] = ((~(min((arr_16 [i_2 - 1] [i_2 - 1]), var_6))));
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        arr_34 [i_0] [16] [8] [16] |= (((!(arr_4 [i_8]))));
                        var_19 = (min(var_19, (135 <= 8680487410268381717)));
                    }
                    for (int i_9 = 1; i_9 < 15;i_9 += 1)
                    {
                        var_20 = (min(var_20, (var_10 || var_6)));

                        /* vectorizable */
                        for (int i_10 = 1; i_10 < 1;i_10 += 1)
                        {
                            arr_40 [i_0] [i_1] [i_2] [i_9] [i_10 - 1] = var_6;
                            arr_41 [i_0] [10] [1] [i_0] [10] = (arr_5 [i_0] [i_1] [i_2]);
                        }
                    }
                    arr_42 [i_0] [2] [i_0] = ((212 ? 10317 : 1));

                    for (int i_11 = 4; i_11 < 16;i_11 += 1)
                    {
                        arr_45 [10] [i_1] [i_0] [i_11] [i_1] = (max(((!(arr_3 [i_0]))), (!var_4)));
                        arr_46 [i_0] [0] [5] [i_11 - 3] = ((max(212, ((max(-99, 1))))));
                    }
                    /* vectorizable */
                    for (int i_12 = 3; i_12 < 17;i_12 += 1)
                    {
                        arr_50 [i_0] [i_0] [i_2] [i_12] [8] = (arr_32 [i_0] [i_1] [i_2] [i_1] [i_2] [i_12 + 1]);
                        var_21 = var_11;

                        for (int i_13 = 1; i_13 < 15;i_13 += 1)
                        {
                            arr_53 [i_0] [i_1] [i_2] [i_12 - 3] [i_0] = (~-98);
                            var_22 = ((!(((var_0 ? 0 : var_9)))));
                            arr_54 [i_0] [i_1] [i_0] [i_0] [i_13 - 1] = ((var_9 >> (((arr_6 [i_0 - 1]) + 5539590532560988878))));
                        }
                    }
                    for (int i_14 = 3; i_14 < 16;i_14 += 1)
                    {
                        arr_59 [i_14] [i_0] [i_2] [i_1] [i_0] [i_0] = ((~(min(var_11, var_10))));
                        arr_60 [i_0 + 2] [6] [6] [i_0] &= (((((16 ? 2013777861 : 1))) ? var_10 : (arr_0 [i_0] [i_0])));
                        arr_61 [i_0] = (((15427910585453583065 | (arr_43 [i_0 + 1] [i_2 - 1] [i_14 + 1] [i_14 - 1] [i_14]))));
                    }
                    for (int i_15 = 0; i_15 < 18;i_15 += 1)
                    {
                        var_23 = (max(var_23, var_10));

                        /* vectorizable */
                        for (int i_16 = 2; i_16 < 17;i_16 += 1)
                        {
                            var_24 = (min(var_24, (((-(arr_20 [i_2 - 1] [i_2] [i_2 - 1] [10] [12] [i_2 - 1] [i_2 - 1]))))));
                            var_25 &= 1;
                            arr_66 [i_0] = (((!var_8) ? var_10 : (((arr_24 [i_0] [i_1]) ? 3202101536369474645 : var_5))));
                            var_26 = (max(var_26, (((~(arr_8 [9] [i_1] [i_1]))))));
                            arr_67 [i_0] [i_0] [i_2] [i_2] [i_0] = ((var_9 ? 9365803568318818707 : (arr_14 [i_0] [i_1] [i_2] [i_15] [i_2 - 1] [i_2])));
                        }
                    }
                }
            }
        }
        arr_68 [i_0] = (((!var_11) ? 1 : ((((var_5 ? 171 : var_2)) * (54 > 2281189443)))));
        var_27 = (max(var_27, (((~3048994532) ^ var_6))));
        var_28 += ((+((((arr_63 [i_0 - 1] [i_0 + 1] [i_0] [i_0]) && var_6)))));
        var_29 = (min(var_29, (((((((arr_49 [6] [i_0 + 2]) ? (arr_49 [0] [i_0 - 2]) : (arr_49 [0] [i_0 - 3])))) && (arr_57 [2] [0] [2]))))));
    }
    for (int i_17 = 3; i_17 < 16;i_17 += 1) /* same iter space */
    {
        var_30 ^= (((arr_64 [2]) ? (((!((min((arr_64 [16]), var_5)))))) : ((max((arr_0 [i_17] [i_17 - 2]), var_3)))));

        for (int i_18 = 0; i_18 < 1;i_18 += 1)
        {
            var_31 = (!0);
            var_32 = var_10;
        }
        for (int i_19 = 0; i_19 < 18;i_19 += 1)
        {
            arr_77 [i_17] [i_17] [6] = var_6;
            var_33 *= 939524096;
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20492
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_4;

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = -1;
        var_21 = min((arr_1 [i_0]), (arr_1 [i_0]));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_22 = (!(((1 ? 1 : 1))));
        var_23 = (max(var_23, (((!-3845525218300102764) ? ((((((min(var_3, var_12))) < (min((arr_0 [i_1] [i_1]), var_19)))))) : (((var_6 < var_16) ? ((min(25848, var_8))) : (arr_5 [1] [i_1])))))));
        arr_6 [i_1] = (((arr_3 [i_1]) ? (max(((max(-1703993992, (arr_0 [i_1] [i_1])))), (arr_4 [i_1]))) : 251));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                {
                    var_24 = -508508713;
                    var_25 = var_8;
                    var_26 = (arr_3 [10]);
                    arr_12 [i_1] [i_2] [2] |= var_3;
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                for (int i_7 = 3; i_7 < 16;i_7 += 1)
                {
                    {
                        arr_26 [3] [i_4] [i_6] [i_6] [i_4] [i_4] = (var_4 ^ 687239575);
                        arr_27 [i_4] [i_4] [4] [i_5] [i_6] [i_7] = (arr_14 [i_7 + 1]);
                        arr_28 [i_5] [i_5] [i_4] [i_5] [i_5] [i_5] = (max((((var_5 ? (arr_25 [i_4] [i_4] [i_4] [i_4]) : -1703993992))), (((!(((arr_16 [i_4]) < 1)))))));
                    }
                }
            }
        }
        arr_29 [i_4] = min(((((var_7 ^ -1284) && (min(1, 0))))), ((((min((arr_21 [i_4] [i_4] [i_4]), var_8))) ? 2428 : (arr_20 [i_4] [i_4] [i_4]))));
    }
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 13;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 0;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                {
                    arr_40 [i_8] [i_9] [i_10] [6] = (arr_31 [i_8]);

                    for (int i_11 = 0; i_11 < 13;i_11 += 1)
                    {

                        /* vectorizable */
                        for (int i_12 = 0; i_12 < 13;i_12 += 1) /* same iter space */
                        {
                            arr_48 [8] [i_11] [i_11] [i_11] [i_11] [i_10] = (!30705);
                            arr_49 [i_8] [i_10] [i_10] [6] [i_12] = var_19;
                        }
                        for (int i_13 = 0; i_13 < 13;i_13 += 1) /* same iter space */
                        {
                            arr_54 [i_8] [i_8] [i_10] [i_10] [i_13] = ((((min(((max((arr_15 [i_10] [i_13]), (arr_37 [11] [i_10] [i_11] [i_13])))), (((arr_7 [i_8] [i_9]) ? var_2 : (arr_22 [1] [i_10] [1] [1])))))) ? (min(((max(var_3, var_17))), (min(var_1, var_11)))) : (arr_51 [i_10] [i_10])));
                            var_27 ^= (arr_47 [5] [i_9 + 1] [i_10] [i_11]);
                        }
                        for (int i_14 = 0; i_14 < 13;i_14 += 1)
                        {
                            arr_58 [i_10] [10] [i_10] [i_11] = ((((((((arr_5 [i_11] [i_10]) == 1703993991)) ? (((1 == (arr_18 [i_11] [i_11])))) : (!var_10)))) ? (!var_3) : (min(3645825978286841488, (arr_53 [i_8] [i_10])))));
                            arr_59 [i_14] [i_10] [i_10] [i_10] [i_8] = (((!(arr_3 [i_9 + 1]))));
                        }
                        /* vectorizable */
                        for (int i_15 = 1; i_15 < 12;i_15 += 1)
                        {
                            var_28 = (max(var_28, (((var_2 ? ((4294967271 ? -971139798 : -7)) : (!223))))));
                            var_29 = (min(var_29, ((((((1 ? var_17 : -9252))) ? (((!(arr_62 [i_8] [i_8] [i_8] [i_10] [i_11] [i_11] [i_15])))) : (arr_55 [i_9 + 1] [i_9 + 1]))))));
                            var_30 |= ((arr_14 [i_9 + 1]) ? var_8 : (arr_14 [i_15 - 1]));
                            var_31 ^= (((arr_7 [i_9 + 1] [i_9 + 1]) | (arr_7 [i_9 + 1] [i_9 + 1])));
                            arr_64 [i_15 + 1] [i_15 + 1] [i_15 + 1] [i_15 - 1] [i_10] = var_6;
                        }
                        var_32 = min((max((((arr_11 [1] [i_9] [i_11]) ? 1268 : (arr_35 [i_8] [i_9 + 1]))), ((max(var_11, 54574512))))), ((min(61, (arr_22 [i_11] [11] [i_9 + 1] [i_8])))));
                    }
                    for (int i_16 = 1; i_16 < 12;i_16 += 1)
                    {
                        var_33 = (arr_62 [i_8] [i_8] [i_9 + 1] [i_10] [1] [i_10] [i_16]);
                        var_34 = (max(((!(arr_52 [i_9] [i_9] [i_9] [i_9 + 1] [i_9 + 1]))), (arr_65 [i_8] [i_10] [i_10] [i_16 - 1])));
                    }
                    for (int i_17 = 0; i_17 < 13;i_17 += 1) /* same iter space */
                    {
                        arr_72 [i_10] = (max(((min(var_2, (((arr_50 [6] [7]) + (arr_16 [0])))))), ((var_17 ? ((((arr_23 [i_10] [i_10]) | 160))) : ((var_5 ? (arr_33 [2] [i_17]) : var_8))))));
                        var_35 = ((((((max(1671201731, var_19)) ^ (((max(1, (arr_67 [i_10] [i_9] [i_9 + 1] [11] [i_17])))))))) ? (((!-1284) ? (arr_8 [i_9 + 1] [i_9] [i_9 + 1]) : (arr_53 [i_8] [i_10]))) : (!-9252)));
                    }
                    /* vectorizable */
                    for (int i_18 = 0; i_18 < 13;i_18 += 1) /* same iter space */
                    {
                        var_36 = (((arr_42 [i_8] [i_8] [i_8] [i_10] [4]) ? (arr_23 [i_10] [i_10]) : (arr_53 [i_8] [i_10])));
                        arr_75 [i_10] = (((arr_11 [i_9 + 1] [i_9 + 1] [i_9 + 1]) - (!var_3)));
                        var_37 = (((arr_45 [i_8] [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_9 + 1]) + var_13));
                        arr_76 [i_10] = -1703993992;
                    }
                }
            }
        }
    }
    #pragma endscop
}

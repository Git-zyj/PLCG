/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212870
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min((0 & 10904), var_8));
    var_13 = ((-((max(var_4, var_3)))));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        var_14 = (max(var_14, (((!(arr_0 [i_0 - 1]))))));
        arr_2 [i_0] [i_0] = (arr_0 [i_0 - 1]);
        arr_3 [i_0] [i_0 - 3] = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 3; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    {

                        for (int i_5 = 1; i_5 < 12;i_5 += 1)
                        {
                            var_15 = (((max(((max(var_5, var_3))), ((var_5 << (var_9 - 1073488459))))) << (arr_11 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])));
                            arr_15 [i_1] [i_2] [i_3] [i_4] [i_5] = (((((min(var_0, (arr_13 [i_1] [i_1] [i_1] [i_1] [i_1])))) ? (((arr_13 [i_1] [3] [3] [3] [i_1]) ? var_0 : (arr_8 [i_1] [i_1] [i_1]))) : (arr_8 [i_1] [i_1] [i_3]))));
                            arr_16 [i_1] = var_10;
                            var_16 = (((min(-0, var_3)) >> (209 - 209)));
                            arr_17 [1] [i_1] [i_3] [i_3] [i_3] [i_3] = (~var_2);
                        }
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            var_17 = (max(var_17, 205));
                            arr_21 [i_1] [i_2] [i_1] = ((!((((arr_8 [i_3 - 3] [i_1] [i_2 - 1]) / 209)))));
                            var_18 = -1;
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            arr_24 [i_1] [i_1] [i_3 - 3] [i_4] [i_7] = (arr_23 [i_2] [i_2 - 1] [i_2] [i_2 - 2] [i_2] [i_2] [i_2]);
                            arr_25 [i_1] [i_3] [i_1] [12] [i_1] |= 1;
                        }

                        for (int i_8 = 2; i_8 < 9;i_8 += 1)
                        {
                            arr_29 [i_1] [i_2 - 2] [i_3] [i_4] [i_2 - 2] [i_1] [i_8] = (arr_26 [i_1] [i_1] [i_3 - 1] [i_4] [i_8 + 2] [i_1] [i_1]);
                            arr_30 [i_1] [i_1] [i_3] [i_4] = ((((((arr_1 [i_8 + 1]) / (arr_14 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))) ? (arr_22 [i_1] [i_1] [i_8 + 2] [i_1] [i_8 + 2] [i_3 - 2]) : -11));
                            arr_31 [i_1] = (~var_11);
                            arr_32 [i_8] &= ((((147 % 125) & (max((arr_14 [i_1] [i_2] [i_2] [i_4] [i_3] [i_2]), (arr_1 [i_1]))))));
                        }
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            var_19 += (arr_27 [i_3]);
                            arr_35 [i_1] [i_2] [10] [i_4] [i_1] = ((((max((arr_8 [i_1] [i_1] [i_3 - 3]), var_10))) ? (arr_20 [i_1] [i_1] [i_3] [i_4] [i_9]) : (18446744073709551590 > 1)));
                        }
                        arr_36 [i_1] = ((-2053698282098321540 ? ((min((arr_1 [i_1]), 36957))) : var_7));

                        for (int i_10 = 0; i_10 < 13;i_10 += 1)
                        {
                            arr_40 [i_1] = -1787;
                            var_20 = 147;
                        }
                    }
                }
            }
        }
        arr_41 [i_1] [i_1] = ((72 ? (!-32751) : ((((((!(arr_12 [i_1])))) < 26892)))));

        for (int i_11 = 2; i_11 < 12;i_11 += 1)
        {
            var_21 = (((var_0 >> 1) || (arr_42 [i_1] [i_1] [i_11 + 1])));
            var_22 = ((var_7 ^ ((((~var_1) >= (arr_1 [i_11]))))));
        }
    }
    var_23 = var_11;
    #pragma endscop
}

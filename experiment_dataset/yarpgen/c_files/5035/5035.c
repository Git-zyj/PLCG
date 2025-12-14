/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5035
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_6;
    var_18 = (535218190 << (((var_9 & var_16) ? (!var_10) : 6514)));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 23;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        var_19 = (max(var_19, 49152));

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_20 = (!6514);
                            arr_11 [i_0] [i_0] = (((arr_8 [i_1] [i_4] [i_2] [i_4]) >> ((((1073741823 ? (arr_0 [20] [i_1]) : (arr_5 [3] [i_2] [i_0]))) - 412267462))));
                            arr_12 [1] = (((arr_0 [i_2] [i_4]) >= (arr_2 [i_2 - 2])));
                            arr_13 [i_0] [i_0] [i_0] [17] [i_3] [i_0] = (((-(arr_8 [i_4] [i_3 + 1] [i_2] [i_1]))));
                        }
                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            var_21 = var_6;
                            var_22 = (((arr_7 [i_0] [i_0] [i_2] [i_3] [i_0] [i_5]) ? 535218175 : ((var_12 ? 10 : (arr_5 [i_0] [i_1] [3])))));
                            var_23 = (min(var_23, (arr_4 [17] [i_2] [i_3] [17])));
                        }
                    }
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        arr_20 [i_0] [i_0] = min(0, 61893);

                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            var_24 = (~3202757323);
                            var_25 = (max(var_25, var_9));
                            arr_24 [i_0] [i_0] [i_0] [i_0] [i_7] = (arr_18 [i_7] [i_6] [i_2] [i_0] [i_0]);
                            arr_25 [i_0] [i_0] [i_0] [i_7] [i_6] [i_7] = var_15;
                        }
                        var_26 = (min(-2595612575378748283, ((((max((arr_1 [1]), var_12))) ? ((max((arr_0 [i_0] [13]), (arr_16 [i_0] [i_1] [i_2] [i_0])))) : (1 / 15363107683491425022)))));
                    }
                    for (int i_8 = 2; i_8 < 21;i_8 += 1) /* same iter space */
                    {
                        var_27 = (max((arr_14 [i_8 + 2] [i_1] [i_1] [i_1] [i_1] [i_2 - 4]), (((arr_14 [i_8 + 1] [i_1] [i_1] [i_8 - 1] [i_0] [i_2 + 1]) ? (arr_14 [i_8 + 2] [i_1] [i_2 + 1] [i_8 + 1] [i_0] [i_2 - 2]) : (arr_14 [i_8 - 1] [i_8 - 1] [i_2] [i_8 - 1] [i_0] [i_2 - 2])))));
                        var_28 = 12137;
                        arr_28 [0] [15] [i_1] [i_2] [i_2] [0] = (((~var_14) < -0));
                    }
                    for (int i_9 = 2; i_9 < 21;i_9 += 1) /* same iter space */
                    {
                        var_29 = ((((min((arr_19 [i_2 - 4] [i_9] [i_9 + 2] [i_9 + 3] [i_9] [i_9]), (arr_19 [i_0] [i_9] [i_9 + 2] [i_9] [i_9] [i_0])))) ? (max((max(2716713104, 15363107683491425010)), ((max(var_10, var_1))))) : var_8));

                        for (int i_10 = 2; i_10 < 23;i_10 += 1)
                        {
                            var_30 = (min(15363107683491425001, -6508));
                            arr_34 [i_0] [i_0] [i_2] [i_2] [i_10] = (arr_9 [i_0] [i_1] [i_2] [i_0] [i_0] [i_2]);
                            arr_35 [i_9] [i_0] = ((((((((arr_27 [i_1] [i_9 + 2] [i_2] [i_1] [i_0]) - 1)) + -6529))) ? var_8 : (((arr_32 [i_0] [i_0] [i_0] [i_0] [i_9 - 1] [i_10 + 1]) + (max(var_2, (arr_7 [i_0] [i_1] [i_1] [i_9 - 1] [i_10] [i_10])))))));
                        }
                        arr_36 [i_0] [7] [12] = (arr_4 [9] [16] [i_2] [i_9 + 3]);
                    }
                    var_31 = (max(var_31, (((!(arr_33 [i_0] [0] [i_1] [i_1] [i_2]))))));
                }
            }
        }
        var_32 ^= (((-32767 - 1) ? (((arr_17 [i_0] [i_0] [i_0] [i_0]) / var_3)) : (114 ^ 1583359206)));
        var_33 |= (-var_0 - var_0);
    }
    #pragma endscop
}

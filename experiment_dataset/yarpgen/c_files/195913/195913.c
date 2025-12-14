/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195913
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        arr_4 [10] |= (((arr_2 [8]) >> (arr_3 [i_0 + 2])));
        arr_5 [i_0] = (((arr_1 [i_0 + 2]) - (arr_1 [i_0 + 2])));
        arr_6 [i_0] = (arr_0 [i_0]);

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_15 = var_11;
            var_16 = 154;
            var_17 = 137438953472;
        }
    }
    var_18 = ((var_12 && ((((!10) ? -4455759475110991289 : (max(9, 0)))))));

    /* vectorizable */
    for (int i_2 = 1; i_2 < 12;i_2 += 1)
    {
        arr_12 [i_2] [i_2] = (arr_7 [i_2 - 1] [i_2] [i_2]);
        var_19 = (min(var_19, (arr_8 [16] [i_2])));
    }
    /* vectorizable */
    for (int i_3 = 3; i_3 < 15;i_3 += 1)
    {
        var_20 = -var_14;
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 4; i_6 < 15;i_6 += 1)
                {
                    {
                        var_21 &= (arr_16 [i_3 - 1] [i_4] [i_4]);
                        var_22 = (min(var_22, ((-((2784202677868652779 ? var_8 : (arr_7 [i_3] [i_6] [i_6])))))));
                        var_23 = (min(var_23, ((((arr_21 [i_3 + 2] [i_4]) != (arr_21 [i_4] [i_4]))))));

                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            var_24 = ((-(arr_28 [i_3] [i_3] [i_5] [i_5] [i_6 - 2] [i_6] [i_7])));
                            var_25 = (max(var_25, 8));
                            arr_29 [i_7] [i_3] = 6821524599243386009;
                        }
                    }
                }
            }
        }
        var_26 = 2004319567898683149;
    }
    for (int i_8 = 0; i_8 < 22;i_8 += 1)
    {
        var_27 = (max(var_27, ((((!(arr_1 [i_8])))))));
        var_28 = (min(-var_12, var_9));
        arr_32 [i_8] [i_8] = (((arr_1 [i_8]) == (arr_3 [i_8])));
        arr_33 [i_8] = (min(((min((min((arr_1 [i_8]), 251658240)), (var_1 / var_13)))), 10));
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 22;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 22;i_11 += 1)
                {
                    {
                        var_29 = ((((!((max(var_0, 248))))) ? (arr_7 [i_8] [i_8] [i_8]) : -var_2));
                        var_30 |= (arr_0 [23]);
                        var_31 = (max(var_31, (((var_0 != (((!((min((arr_7 [i_8] [i_11] [i_11]), var_2)))))))))));

                        for (int i_12 = 1; i_12 < 20;i_12 += 1)
                        {
                            var_32 = (-9223372036854775807 - 1);
                            arr_46 [i_8] [i_9] [i_10] [i_11] [i_8] = 3558558002;
                            arr_47 [i_8] [i_9] = (arr_36 [i_8]);
                            var_33 += (max(((-((16777215 ? 128 : 0)))), (arr_9 [i_11])));
                            var_34 = (max(var_34, ((((arr_38 [i_11] [i_11]) ? var_13 : (((arr_39 [i_9] [i_12 + 1] [i_10] [i_12]) ? (arr_39 [i_8] [i_10] [i_10] [i_10]) : (arr_39 [i_9] [i_11] [i_11] [i_12]))))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

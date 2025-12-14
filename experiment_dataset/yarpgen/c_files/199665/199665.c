/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199665
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((min(var_9, var_0)) ? ((((((1 ? var_2 : var_5))) && var_7))) : (((((1 ? var_5 : var_7))) ? 65024 : var_2)));
    var_11 = var_7;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_1] [1] = var_0;
                    arr_10 [i_0] [i_2 - 1] = ((-(arr_6 [i_0] [i_0])));
                    arr_11 [i_0] [19] [i_0] [11] = var_3;
                    var_12 = (var_6 ^ var_8);
                }
            }
        }
        var_13 = ((!((((arr_7 [i_0] [i_0] [i_0] [i_0]) ? var_0 : var_9)))));
        arr_12 [i_0] = (arr_4 [i_0]);
    }
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        var_14 = (((-(arr_0 [14]))));

        for (int i_4 = 3; i_4 < 18;i_4 += 1)
        {
            /* LoopNest 3 */
            for (int i_5 = 1; i_5 < 15;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 16;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        {
                            var_15 *= (arr_6 [i_5 + 2] [i_6]);
                            var_16 ^= (((((~(~var_3)))) ? (((~var_5) ? (arr_8 [i_3] [i_7]) : ((~(arr_3 [i_6] [i_6]))))) : var_0));
                            var_17 = arr_6 [i_3] [i_5];
                            arr_28 [i_3] [i_5] [i_5] [i_5] [i_7] = 62034;
                            arr_29 [i_3] [i_5] [i_5] = (((!var_3) && (arr_20 [i_4] [i_5] [i_7])));
                        }
                    }
                }
            }

            for (int i_8 = 1; i_8 < 1;i_8 += 1)
            {
                arr_33 [i_3] [i_3] [i_8] = (arr_13 [i_3]);
                arr_34 [i_3] [i_8] [i_8] [i_3] = (max((min((max(1, var_7)), ((max((arr_15 [i_4] [i_8]), 0))))), (arr_16 [15])));
            }
            for (int i_9 = 0; i_9 < 19;i_9 += 1)
            {
                var_18 = var_4;
                arr_37 [i_3] [i_3] [i_3] [i_3] = ((-(arr_26 [i_4] [i_4] [i_4 - 1] [i_4] [i_4 + 1] [14] [i_9])));
                var_19 = (min(((min((arr_32 [i_3] [i_3] [i_9] [i_9]), ((!(arr_5 [i_4] [i_9])))))), ((19692 ? var_1 : (arr_36 [i_3] [i_3])))));
                arr_38 [i_4] = ((((min((arr_5 [i_3] [i_3]), (arr_27 [i_3] [i_9] [i_3] [i_9])))) && ((!(((var_2 ? (arr_5 [i_3] [i_3]) : 12505074061727515082)))))));
                var_20 += ((-((+(min((arr_7 [i_9] [i_4] [i_4] [i_4]), var_5))))));
            }
            for (int i_10 = 0; i_10 < 19;i_10 += 1)
            {

                /* vectorizable */
                for (int i_11 = 1; i_11 < 15;i_11 += 1)
                {
                    arr_43 [i_3] [13] [i_4 - 3] [i_10] [i_10] [i_11] = arr_32 [1] [10] [i_10] [i_11];
                    var_21 -= var_3;

                    for (int i_12 = 0; i_12 < 19;i_12 += 1)
                    {
                        arr_46 [i_3] = (arr_8 [i_4 - 3] [i_4 + 1]);
                        arr_47 [i_12] = (((arr_45 [i_11 + 3] [i_11 + 3] [i_11 + 3] [i_11 + 3] [i_11 + 1] [i_11 + 1] [17]) ? var_5 : (arr_32 [i_11 + 3] [i_11] [i_10] [i_11])));
                        var_22 = (arr_20 [i_4] [i_10] [i_10]);
                        arr_48 [i_3] [9] [i_3] [i_3] [i_3] [i_3] [2] = arr_6 [i_3] [i_10];
                        var_23 = 62034;
                    }
                    var_24 = (arr_5 [i_4 - 3] [i_11 + 1]);
                    arr_49 [1] = (((arr_4 [i_10]) >= var_9));
                }
                var_25 *= 19710;
                var_26 = var_8;
                arr_50 [i_3] = (min(((min(var_3, (arr_16 [i_10])))), (((var_5 && var_1) ? 1 : (((arr_30 [i_10]) ? (arr_41 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]) : 1))))));
            }
            arr_51 [i_3] = (((((var_7 | (max(2147483584, var_0))))) ? (max(var_1, ((var_2 ? var_3 : var_8)))) : 1));
            var_27 = (((arr_0 [10]) ? (((arr_31 [i_4 + 1] [0] [i_4 + 1] [i_4]) ? (arr_18 [i_4 - 1]) : (arr_18 [i_4 + 1]))) : (((!(((var_4 ? (arr_18 [i_3]) : (arr_40 [2] [i_3] [i_3])))))))));
        }
        for (int i_13 = 1; i_13 < 17;i_13 += 1)
        {
            var_28 = (min(var_28, (arr_20 [i_3] [1] [i_13])));
            var_29 = (min(var_29, ((max((~var_9), ((~(arr_8 [i_3] [i_13]))))))));
        }
        arr_56 [i_3] [i_3] = 1;
    }
    var_30 -= var_6;
    #pragma endscop
}

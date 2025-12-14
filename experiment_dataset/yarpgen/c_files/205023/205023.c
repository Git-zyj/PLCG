/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205023
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    var_16 += (max(((min((min((arr_7 [i_0] [i_1]), (arr_6 [i_0] [i_1 + 1]))), (((((arr_4 [i_0] [i_1 - 1]) + 2147483647)) << (((arr_2 [i_0 - 1] [i_1] [i_1]) - 2097538721))))))), ((~(((arr_3 [i_0]) | var_1))))));
                    arr_8 [i_1] [i_1] [i_2] = (-((-1116985403 * (min(4194296, (arr_4 [14] [i_1]))))));
                }
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {

                    /* vectorizable */
                    for (int i_4 = 2; i_4 < 22;i_4 += 1)
                    {
                        arr_15 [i_1 - 1] [i_1] [i_3] [i_4] [i_3] = (((arr_11 [i_4 + 1]) ? (arr_11 [i_4 + 1]) : (arr_11 [i_4 + 1])));
                        arr_16 [i_3] [i_3] &= (((((15 < (arr_5 [i_4])))) & (((arr_10 [i_0] [i_3] [i_4]) ? var_0 : (arr_4 [i_1 + 2] [i_1 + 2])))));
                    }

                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        arr_20 [i_5] [10] [i_1] [i_0] = min(((max(602875854, (arr_12 [i_0 + 3] [i_0] [i_1] [11] [i_3] [i_5])))), ((var_9 & (((arr_7 [i_5] [i_3]) ^ 28379)))));

                        for (int i_6 = 1; i_6 < 22;i_6 += 1) /* same iter space */
                        {
                            var_17 += ((((((-(((arr_13 [i_5]) << (((arr_18 [i_0] [i_3] [i_5] [i_5]) - 3135985998)))))) + 2147483647)) << (((((min((((!(arr_22 [i_0] [i_0 - 1] [13] [i_0] [i_0 + 1])))), (min((arr_5 [i_5]), (arr_4 [i_1] [i_3]))))) + 725656106)) - 25))));
                            var_18 += ((!((((arr_11 [i_0]) * ((var_7 << (144044819331678208 - 144044819331678151))))))));
                        }
                        for (int i_7 = 1; i_7 < 22;i_7 += 1) /* same iter space */
                        {
                            var_19 = (max(var_19, var_12));
                            arr_26 [i_0] [i_1] [i_1] [i_3] [i_1] [i_7] [i_7] = (max(((((max(57423, 96))) << (((((arr_12 [17] [i_1] [i_1] [i_7 - 1] [i_7] [i_1]) + 7150927512856649953)) - 14)))), (((((arr_24 [i_0] [i_0] [i_0] [i_0] [i_0]) ^ (arr_25 [i_0] [i_0 + 1] [i_0] [i_0] [i_0 - 1]))) | (((arr_19 [i_3] [i_3] [i_3] [11] [i_3] [i_3]) ^ (arr_4 [i_0] [i_0])))))));
                            arr_27 [i_0] [i_0] [i_0] [i_0] [i_5] [i_7] [i_7 + 1] = (((((((arr_2 [i_0 + 4] [i_1] [i_3]) & (arr_2 [i_0] [i_3] [i_5]))) + ((((arr_7 [i_3] [i_1]) == (arr_22 [i_0] [i_1] [i_3] [i_5] [i_7 + 1])))))) - (max((arr_7 [i_0] [i_1]), (((arr_25 [i_0] [i_1 + 1] [i_3] [23] [20]) + (arr_19 [i_5] [i_5] [i_5] [i_3] [23] [i_0])))))));
                            arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 + 2] [i_0] = ((min((arr_13 [i_3]), (arr_2 [i_1 + 2] [12] [i_7]))));
                        }
                    }
                }
                var_20 &= (arr_0 [i_1]);
            }
        }
    }
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 15;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 15;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 15;i_10 += 1)
            {
                {
                    var_21 += var_14;
                    arr_38 [i_10] [i_10] = ((-(((arr_33 [i_8] [i_8] [i_8]) ? (arr_1 [i_8]) : var_6))));
                    var_22 = ((((max((arr_36 [i_8]), 6749))) < (((~(min((arr_7 [i_8] [i_9]), (arr_33 [i_8] [i_10] [i_8]))))))));
                    arr_39 [i_8] [i_9] [i_10] [i_9] = (arr_3 [i_8]);
                }
            }
        }
    }
    var_23 = ((!((min(var_4, var_4)))));
    #pragma endscop
}

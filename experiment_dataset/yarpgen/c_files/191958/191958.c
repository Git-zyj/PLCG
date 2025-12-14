/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191958
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                var_17 = ((((min((((!(arr_1 [i_0])))), (arr_3 [i_0] [i_0] [i_0])))) && 0));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_18 = (((((var_15 > (arr_13 [i_1 - 3] [i_1 - 2] [i_1 - 3] [i_1 + 2] [i_1])))) < ((min(25, var_16)))));
                                arr_14 [i_0] [5] [i_2] [i_3] [i_3] [i_4] [i_4] = 46265;
                                var_19 = (max(var_19, (((!((((max(var_0, (arr_11 [i_0] [i_0] [i_1 + 1] [i_0] [i_2] [i_3] [i_4])))) > (((var_14 && (arr_12 [i_0] [i_1] [i_2] [i_3])))))))))));
                                arr_15 [i_4] [i_3] [i_2] [i_2] [12] [i_1] [i_0] = (((((max((arr_13 [i_0] [i_1] [i_2] [i_3] [i_4]), ((!(arr_13 [i_0] [4] [i_2] [i_3] [i_4]))))))) & ((-var_14 & (((arr_10 [i_0] [i_1] [i_3] [11]) / (arr_12 [i_1 - 1] [9] [i_3] [i_4])))))));
                            }
                        }
                    }
                }
                var_20 = (max(var_20, ((((arr_7 [i_0] [i_0] [i_1]) >= (((((arr_6 [i_0] [i_0] [i_1]) < ((~(arr_3 [i_0] [i_0] [i_1 - 1]))))))))))));
            }
        }
    }
    var_21 = var_14;
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            {
                arr_22 [i_5] [i_5] [i_5] = (min((min((((arr_19 [i_6] [i_5]) * (arr_12 [i_5] [i_6] [5] [1]))), (~-512))), ((min((((arr_18 [i_6] [i_5]) != var_6)), (var_15 != -9674))))));
                var_22 = (arr_5 [i_6]);
                var_23 = ((-(arr_21 [i_6])));
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    for (int i_8 = 3; i_8 < 9;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 11;i_9 += 1)
                        {
                            {
                                var_24 = (arr_6 [i_9] [i_7] [i_6]);
                                arr_31 [i_5] [i_6] [i_7] [i_7] [i_8] = (((arr_23 [i_8 - 2]) ? (((var_7 * 3421384206) & (var_4 <= var_12))) : ((((!((max((arr_18 [2] [7]), var_10)))))))));
                                var_25 = (((arr_25 [i_8 + 2] [i_7] [i_8 - 1] [i_7]) & ((min(0, (arr_25 [i_8 + 1] [i_8 - 1] [i_8 + 2] [10]))))));
                                var_26 = (((arr_30 [i_9] [i_9] [i_9] [i_9] [i_9]) + 190));
                            }
                        }
                    }
                }
                var_27 = (((((511 & ((min(32767, (arr_13 [i_6] [i_6] [12] [8] [i_5]))))))) | 31));
            }
        }
    }

    for (int i_10 = 0; i_10 < 1;i_10 += 1)
    {
        var_28 -= (arr_20 [9] [i_10] [i_10]);
        var_29 = ((((min(((max(var_15, var_6))), (((arr_28 [i_10] [i_10] [5]) / (arr_6 [i_10] [i_10] [i_10])))))) / ((-(var_1 ^ var_0)))));
        arr_35 [1] &= (max((arr_17 [i_10]), ((~((~(arr_7 [i_10] [i_10] [i_10])))))));
        var_30 -= (max(((31 & (((min((arr_28 [i_10] [i_10] [i_10]), (arr_10 [7] [i_10] [i_10] [i_10]))))))), ((((arr_6 [9] [i_10] [i_10]) / (arr_5 [i_10]))))));
    }
    for (int i_11 = 3; i_11 < 24;i_11 += 1)
    {
        var_31 += (arr_37 [i_11 - 3]);
        arr_38 [i_11] = ((62 / (arr_37 [16])));
        var_32 &= (max((((arr_37 [i_11 - 1]) >> (((arr_37 [i_11 - 2]) - 17371)))), (arr_37 [i_11 + 1])));
        arr_39 [i_11] [i_11] = (((((var_7 | 32767) ? (!var_14) : var_5)) >= (arr_37 [i_11])));
        var_33 = ((~((((arr_37 [i_11 - 2]) < (arr_37 [i_11 - 3]))))));
    }
    #pragma endscop
}

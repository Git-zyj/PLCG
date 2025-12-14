/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200737
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                var_19 = ((((min((arr_3 [i_0] [i_0]), (arr_3 [i_0] [i_0])))) ? 15981755542629356912 : ((((((arr_3 [i_0] [i_1 + 2]) + 2147483647)) << (((((arr_3 [i_0] [i_0]) + 117)) - 27)))))));

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_20 = ((!((((arr_9 [i_3] [i_3]) ^ (arr_9 [i_3] [i_3]))))));
                                var_21 = var_9;
                                arr_12 [i_0] [i_3] [i_1] [i_2] [i_2] [i_2] [i_4] = (min((((min(var_7, 487345790)) & (((arr_0 [i_2] [0]) | -1)))), ((((arr_11 [i_3] [i_3] [i_2] [i_2] [i_2]) > (min(-11, var_18)))))));
                            }
                        }
                    }
                    var_22 = (((((arr_0 [i_2] [i_2]) > (arr_9 [i_0] [i_2]))) ? 6300392800709489934 : (arr_11 [i_2] [i_1 + 1] [i_2] [i_1 + 2] [i_1])));
                    var_23 |= (((((-(var_2 % var_13)))) / (((((arr_2 [i_0]) == 1)) ? (arr_10 [9] [i_1 - 1] [i_1 - 2] [i_1 - 2] [i_1 - 2]) : ((((arr_3 [i_0] [i_0]) * (arr_11 [i_2] [i_1 - 3] [i_1 - 3] [i_1 + 2] [i_2]))))))));
                    var_24 = (((((arr_2 [i_1 - 2]) / ((max(var_5, var_11))))) & (((60052 && (!var_4))))));
                }
                for (int i_5 = 1; i_5 < 10;i_5 += 1) /* same iter space */
                {
                    var_25 = 1;
                    var_26 = (((((~1) + 2147483647)) >> 1));
                    var_27 = var_12;
                }
                for (int i_6 = 1; i_6 < 10;i_6 += 1) /* same iter space */
                {
                    arr_17 [i_0] [i_0] [i_0] [i_0] = (((((min(var_13, (arr_2 [i_0])))) ? (arr_16 [i_0]) : (arr_9 [4] [4]))));
                    arr_18 [i_0] [i_1] [i_1] [i_0] = arr_0 [i_0] [i_1 - 3];
                    arr_19 [i_1 + 2] [i_1 + 2] [i_1 + 2] = (arr_6 [i_0] [i_0]);
                    arr_20 [i_0] [i_0] [i_0] [i_0] = (((arr_14 [i_0] [i_0]) > ((((min((arr_6 [i_0] [i_0]), 54384))) ? (arr_8 [i_6 + 3] [i_6 - 1] [i_6] [i_6 - 1]) : (((min(60052, (arr_6 [i_0] [i_1])))))))));
                    var_28 = ((var_17 > (((arr_11 [12] [12] [i_1] [i_6 - 1] [i_6]) ? (arr_11 [8] [8] [i_1 - 2] [i_6 + 3] [8]) : (arr_9 [i_1 + 1] [4])))));
                }
                for (int i_7 = 1; i_7 < 10;i_7 += 1) /* same iter space */
                {
                    arr_24 [i_0] [i_0] [i_0] [i_0] = (((((-(2226712839552176843 * 0)))) ? (((((min((arr_9 [i_0] [12]), var_9))) ^ (min((arr_21 [i_1] [i_1] [i_1] [i_0]), var_13))))) : (((((~(arr_21 [i_0] [i_0] [i_0] [i_0])))) ? (~4294950912) : var_5))));

                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        arr_27 [i_7] = (((((((min(1, var_17))) | (arr_0 [i_7 - 1] [i_7 + 2])))) ? -var_17 : (arr_26 [i_0] [i_1] [i_0] [i_0])));
                        var_29 = (((var_18 ? (arr_22 [i_1 - 3] [i_1 - 3] [i_7 + 3]) : var_5)));
                        var_30 = (~(((((!(arr_6 [i_1] [i_1]))) || (arr_6 [i_7 + 2] [i_1 - 1])))));
                        arr_28 [i_0] = (arr_8 [i_0] [i_1] [i_7 - 1] [i_0]);
                        arr_29 [i_0] [i_0] [i_7] = ((!(((arr_9 [4] [4]) || 1))));
                    }
                    arr_30 [i_0] [i_0] [i_0] [i_0] = min((arr_6 [i_0] [i_1 - 1]), (((min(5480, -959689247)) | (var_3 | var_2))));
                }
                var_31 = (((!var_16) | (((arr_1 [i_0] [4]) | 12207))));
                arr_31 [i_0] [i_0] = (((arr_8 [i_1] [i_1] [i_1 + 1] [i_1 + 1]) ? (((((arr_5 [7]) ? (arr_15 [i_0] [i_0] [i_0] [i_0]) : var_5)) + ((19918 ? -18981 : -12832)))) : (!var_1)));
            }
        }
    }
    var_32 = ((~((min((var_0 > var_5), var_5)))));
    #pragma endscop
}

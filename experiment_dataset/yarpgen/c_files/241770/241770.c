/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241770
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((min((var_4 / var_4), ((var_9 ? var_4 : var_7))))) < ((var_2 ? (max(3182003904, 1122433020)) : var_3))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_13 = (((((~(arr_4 [i_0]))) >= (((arr_0 [i_0]) ? (arr_4 [i_1]) : (arr_2 [i_0] [12]))))) ? ((-(((arr_3 [i_1]) ? (arr_3 [i_1]) : (arr_3 [i_0]))))) : ((~(arr_3 [i_0]))));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_13 [i_2] [i_0] [12] [i_0] [i_2] = (max((((arr_7 [i_0] [i_2] [i_0]) ? (((arr_7 [i_0] [i_1] [i_1]) ? (arr_5 [i_3]) : (arr_4 [i_1]))) : (((arr_1 [i_4]) ? (arr_10 [0] [i_3] [i_2] [i_2] [10] [i_0]) : (arr_0 [9]))))), (max((arr_7 [11] [i_0] [i_2 - 3]), -63518))));
                                var_14 = (-(((((2018 ? 1 : -76))) ? (((arr_2 [i_1] [3]) ? (arr_1 [i_0]) : (arr_4 [i_2]))) : (arr_9 [i_2 + 2] [i_1] [i_2 + 2] [i_1]))));
                            }
                        }
                    }
                }
                arr_14 [i_1] = ((((((arr_2 [3] [i_0]) ? (((arr_2 [i_0] [i_0]) >> (((arr_4 [i_0]) + 51)))) : (((arr_1 [i_0]) ? (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_10 [11] [i_0] [i_0] [i_1] [i_1] [i_1])))))) ? ((((((arr_2 [i_0] [i_0]) ? (arr_9 [i_0] [i_0] [i_1] [i_1]) : (arr_12 [i_1] [i_1] [i_1] [i_1] [i_1])))) ? ((-(arr_10 [i_1] [i_1] [i_0] [10] [i_1] [i_1]))) : (arr_4 [i_0]))) : (((arr_4 [i_0]) ? (arr_5 [i_1]) : (((arr_11 [i_1] [i_1] [i_0] [6] [i_1] [i_0]) ? (arr_12 [8] [8] [i_1] [8] [i_1]) : (arr_7 [i_0] [3] [i_0])))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 17;i_6 += 1)
        {
            {
                arr_19 [i_5] [i_5] [i_5] |= (((((max(63525, 1122433020)) ? (((arr_15 [i_6]) ^ (arr_15 [i_6]))) : ((~(arr_17 [i_5] [i_5] [i_5])))))));
                arr_20 [i_6] [i_6] = ((((min(4294967295, 106))) ? (((!(((arr_17 [6] [6] [6]) && (arr_15 [i_5])))))) : (((arr_16 [i_6 - 2] [i_6]) ? (arr_16 [i_6 - 1] [i_6]) : (arr_16 [i_6 - 3] [i_6])))));
                var_15 = max((((!(arr_16 [i_5] [i_6])))), (((arr_18 [i_5]) ? (arr_15 [i_6]) : (((~(arr_16 [i_5] [i_6])))))));
            }
        }
    }
    var_16 = var_0;
    var_17 = (((((-(var_11 * var_4)))) ? (((((32755 ? -121 : 1483063180))) * (var_5 + var_11))) : (((((var_9 > var_8) != var_11))))));
    #pragma endscop
}

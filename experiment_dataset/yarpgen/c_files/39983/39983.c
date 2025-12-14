/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39983
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_12 = (min(var_12, 2369276191755842100));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_16 [i_2] [i_1] [i_2] [i_3] |= ((~(min((arr_3 [i_0 - 1]), (arr_3 [i_0 - 2])))));
                                var_13 = (~((((arr_15 [i_2] [i_2] [1] [i_2]) ? (arr_14 [i_0 - 2] [0] [i_2] [i_3] [2]) : (arr_13 [i_0] [i_0] [i_4] [i_4] [13])))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            {
                var_14 -= ((((!(((~(arr_19 [i_5] [i_6])))))) ? (arr_18 [2]) : ((((((arr_17 [i_6]) ? (arr_22 [14]) : (arr_18 [i_5])))) ? (((~(arr_22 [14])))) : (arr_22 [6])))));
                var_15 = (max(var_15, (arr_22 [6])));
                arr_24 [i_5] [i_6] = (((((((((arr_20 [i_6]) ? (arr_20 [i_6]) : (arr_18 [15])))) ? -78 : ((-(arr_17 [i_5])))))) ? (arr_17 [i_5]) : (((arr_21 [i_5]) ? (arr_17 [7]) : (((-(arr_22 [i_6]))))))));
                arr_25 [6] &= ((arr_20 [12]) ? (max((((187 ? 301977050 : -1))), (((arr_19 [i_5] [i_6]) ? (arr_21 [i_6]) : (arr_19 [i_5] [2]))))) : (((((!(arr_17 [i_5]))) ? (((!(arr_19 [i_6] [i_6])))) : (arr_22 [10])))));
                arr_26 [6] |= ((!(arr_22 [6])));
            }
        }
    }
    var_16 = ((var_6 ? ((-((var_11 ? var_10 : var_8)))) : var_2));
    var_17 = -var_8;
    #pragma endscop
}

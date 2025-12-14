/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223767
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_12 [i_1] [i_1] [i_1] |= ((-(((arr_10 [i_3] [i_3] [i_2] [i_3] [i_3] [i_0]) ? (arr_5 [i_0]) : (arr_5 [i_0])))));
                            arr_13 [i_0] [6] [i_1] [i_2] [i_2] [i_3] = (((((~(arr_7 [i_0] [i_1] [i_0] [i_3])))) ? ((6 ? (arr_0 [i_1] [i_3]) : (arr_11 [i_3] [13] [i_0] [i_0] [i_0]))) : ((((max((arr_10 [i_0] [i_0] [i_2] [2] [i_0] [i_2]), (arr_1 [5]))))))));
                            arr_14 [i_0] [i_0] [9] [7] [i_3] = ((((!(arr_8 [i_0] [3] [i_0] [i_0])))) | (arr_8 [i_3] [i_1] [i_2] [i_1]));
                            arr_15 [i_0] [i_1] [i_2] [3] [i_3] [i_2] = min((((var_5 ? var_4 : (arr_1 [i_0])))), (((!(arr_6 [i_0] [i_0] [i_2] [i_3])))));
                            arr_16 [i_0] [0] [i_0] [i_0] = (((((var_8 ? (((arr_2 [i_0] [i_0]) ? 1696207903 : var_6)) : ((var_4 ? (arr_6 [13] [i_1] [i_1] [i_1]) : (arr_6 [i_0] [i_0] [i_2] [i_3])))))) ? (((arr_1 [i_0]) + (arr_1 [i_0]))) : ((-((min((arr_7 [i_3] [i_2] [i_1] [i_0]), 1)))))));
                        }
                    }
                }
                arr_17 [i_1] = (max(-447427885, 231));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 0;i_6 += 1)
                        {
                            {
                                arr_27 [i_4] [i_4] [i_4] [11] [1] [i_6 + 1] [1] = ((-((((max((arr_5 [i_4]), var_11))) ? ((min(var_10, var_8))) : (arr_21 [i_0])))));
                                arr_28 [i_0] [i_4] [i_6] = ((((((arr_8 [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 + 1]) >> (arr_24 [i_5] [i_6 + 1] [1])))) || ((!((-1952560567 && (arr_9 [i_4] [i_5] [i_4])))))));
                                arr_29 [i_0] [i_0] [6] [i_4] [i_0] = (arr_24 [i_0] [i_1] [i_0]);
                            }
                        }
                    }
                }
                arr_30 [10] [1] [10] = ((((((arr_25 [i_0] [i_0] [i_0] [i_0] [9] [i_0]) ? (arr_22 [i_0] [i_1] [i_1] [1]) : (arr_22 [i_0] [i_1] [i_1] [i_0])))) ? (max(0, ((1 ? (arr_4 [i_0]) : 1)))) : var_13));
            }
        }
    }
    var_14 = (-var_8 * var_0);
    var_15 = ((62835 != (min((1 & var_6), var_5))));
    /* LoopNest 3 */
    for (int i_7 = 2; i_7 < 10;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 12;i_9 += 1)
            {
                {
                    arr_39 [i_7] [i_7] [i_9] = (arr_31 [i_8]);
                    arr_40 [i_7] [i_7] = ((((arr_10 [13] [4] [i_8] [i_8] [i_8] [i_9]) ? var_12 : (arr_0 [i_9] [i_9]))));
                    arr_41 [i_9] [i_7] [i_7] [i_7] = (arr_11 [i_7] [i_7] [4] [i_7] [i_7]);
                }
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197585
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_17 = (max(var_17, (arr_1 [0])));
                arr_5 [i_0] [i_0] = (((((65522 & (max((arr_2 [i_0] [i_1]), var_16))))) ? (min(((max(var_3, (arr_1 [0])))), ((22 | (arr_3 [i_0] [12] [i_1]))))) : var_0));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_18 *= (((arr_11 [i_0] [i_3]) ? (arr_10 [i_1] [11]) : var_2));
                            var_19 = (max(var_19, var_14));
                        }
                    }
                }
                var_20 = (arr_3 [i_0] [i_1] [i_1]);
            }
        }
    }
    var_21 = var_12;

    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_22 = (max(var_22, (max((arr_12 [i_4]), (max((arr_12 [i_4]), (arr_12 [i_4])))))));
        arr_14 [i_4] = (((min((arr_4 [i_4] [i_4] [i_4]), (arr_0 [i_4]))) | ((((arr_11 [1] [i_4]) ^ (arr_4 [i_4] [i_4] [i_4]))))));
        arr_15 [6] [i_4] = (arr_10 [11] [i_4]);
        var_23 ^= ((((((arr_3 [10] [i_4] [10]) ? (arr_8 [i_4] [8] [i_4]) : (arr_3 [i_4] [i_4] [i_4])))) ? ((((min((arr_1 [i_4]), (arr_3 [i_4] [i_4] [i_4])))) ? (arr_10 [10] [i_4]) : (((var_6 ? -22 : var_14))))) : (arr_13 [i_4])));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        var_24 = (((arr_16 [i_5] [i_5]) ? var_6 : var_2));
        var_25 = (((arr_16 [i_5] [11]) <= (arr_16 [i_5] [i_5])));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 18;i_7 += 1)
            {
                {
                    var_26 = (max(var_26, ((((arr_21 [i_7 + 2]) ? (arr_24 [13] [i_6] [i_7 - 1] [i_6]) : var_10)))));
                    var_27 = (((arr_20 [i_7 - 1]) ? var_7 : var_5));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            {
                                arr_31 [i_5] [i_6] [i_9] [i_8] [i_5] = ((14 & (arr_30 [4] [i_7 + 2] [i_7] [i_8] [i_9])));
                                var_28 += (((arr_20 [i_9]) ? (arr_24 [3] [i_7 + 2] [i_7] [i_6]) : (((arr_27 [i_5] [i_5] [i_6] [5] [5] [i_9]) % (arr_18 [i_6] [i_7 + 2] [i_9])))));
                            }
                        }
                    }
                }
            }
        }
        arr_32 [i_5] = ((~(arr_24 [i_5] [i_5] [i_5] [i_5])));
    }
    #pragma endscop
}

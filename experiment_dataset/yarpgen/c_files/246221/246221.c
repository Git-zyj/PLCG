/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246221
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_16 *= (arr_5 [i_1]);
                arr_7 [i_0] = (((((var_1 % (((var_11 < (arr_3 [i_0] [i_1]))))))) ^ (arr_5 [i_0])));
                var_17 = (max(var_17, (((((!((min((arr_2 [i_0]), (arr_3 [i_1] [5])))))) ? ((var_12 ? (((arr_5 [i_0]) ? (arr_0 [i_1]) : (arr_5 [i_0]))) : (!var_13))) : var_8)))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                var_18 = (((((~(((arr_11 [i_5] [i_3] [i_2]) ? (arr_11 [i_6] [i_3] [i_3]) : var_4))))) ? var_14 : (((((((arr_11 [10] [i_3] [18]) != (arr_15 [i_5] [i_3] [i_4] [i_5] [15] [i_4]))))) * (arr_9 [i_3])))));
                                arr_19 [i_3] [i_5] [i_2] [i_3] [i_3] = ((var_1 & ((((((arr_17 [i_2] [i_3] [i_3] [i_5] [i_6]) ^ (arr_9 [i_2])))) ? ((((arr_11 [i_6] [i_3] [i_3]) << (((arr_14 [i_6] [i_3] [i_4] [i_5]) - 305708646))))) : ((var_2 ? (arr_15 [i_6] [i_5] [21] [i_4] [i_3] [i_2]) : var_6))))));
                                var_19 = (((-(((arr_14 [i_2] [i_2] [10] [i_5]) + var_13)))) > ((((!(~var_15))))));
                            }
                        }
                    }
                    arr_20 [i_3] [18] [i_4] = (max(((-((-(arr_13 [i_2] [1] [i_4]))))), (arr_12 [i_2] [i_3])));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 2; i_7 < 14;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 18;i_8 += 1)
        {
            {
                arr_25 [i_7] [i_8] [i_8] = (max((((-(arr_13 [21] [i_7 - 2] [i_7])))), ((~(arr_11 [i_7] [i_7] [i_7])))));
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 18;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {
                        {
                            arr_32 [13] [i_8] [i_8] [1] [7] [i_7 + 1] = ((~((((((arr_11 [i_7 + 4] [i_7] [i_10]) | var_0))) ? var_9 : (min(var_14, (arr_17 [i_7] [i_8] [i_8] [i_8] [2])))))));
                            var_20 = arr_11 [i_7] [i_8] [i_9];
                        }
                    }
                }
            }
        }
    }
    var_21 = (min(((((((var_2 ? var_11 : var_7))) ? (var_2 < var_4) : var_0))), var_5));
    #pragma endscop
}

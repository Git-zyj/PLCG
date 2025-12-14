/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44219
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_17;
    var_20 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    arr_8 [0] [i_0] [i_2] |= arr_3 [i_0] [i_1];
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_21 = ((~(((arr_12 [i_0] [i_1] [i_1 + 1] [i_1] [i_3] [i_4] [i_1]) ? var_18 : (arr_12 [i_1 - 2] [i_1] [i_1 - 3] [i_1] [i_1] [i_4] [i_4])))));
                                var_22 = arr_13 [12] [i_1 - 3] [i_2 - 1] [i_2 - 1] [i_3 - 3] [i_2 - 1];
                                var_23 += ((!var_9) * ((var_4 / (arr_3 [i_2 + 3] [i_1 - 2]))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 3; i_5 < 22;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 23;i_6 += 1)
        {
            {
                arr_21 [i_6] = var_18;
                arr_22 [i_6] [i_6] = var_7;
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        {
                            var_24 = (((((var_10 ? (((var_18 ? (arr_25 [i_8] [i_8] [i_6] [i_8]) : -3157487596412305711))) : (min(var_5, 9061181937736082900))))) ? ((((-7705861623676919493 == (arr_24 [7] [i_5]))))) : ((var_5 ? ((~(arr_26 [i_8] [i_7] [i_6 + 2] [i_6] [i_5] [i_5]))) : 18446744073709551611))));
                            var_25 += var_4;
                            var_26 = (max(((var_3 * (arr_17 [i_5 - 1]))), ((max(var_11, var_12)))));
                        }
                    }
                }
                arr_28 [i_6] = 18446744073709551608;
            }
        }
    }
    #pragma endscop
}

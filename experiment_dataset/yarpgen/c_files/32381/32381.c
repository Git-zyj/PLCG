/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32381
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_2] = ((!(((~((11740 ? (arr_4 [i_2]) : (arr_2 [i_0]))))))));
                    var_12 = var_7;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 10;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 7;i_4 += 1)
        {
            {
                arr_13 [i_4] = (((((arr_11 [i_4 + 4] [i_4 + 1] [i_4 + 3]) ? var_6 : ((2147483647 ? var_8 : -875325865)))) * 7843028033427780473));
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 10;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            {
                                var_13 = (max(var_13, (arr_12 [i_6 - 1] [i_4 + 2] [i_3 + 1])));
                                arr_21 [2] [i_7] [i_7] [i_7] [i_7] &= (max(((7652 ? ((((arr_1 [i_3]) ? -2147483626 : (arr_16 [i_3] [i_3] [6] [6])))) : (arr_8 [i_3 - 1]))), (((var_6 >> (((arr_12 [9] [6] [6]) - 20429)))))));
                            }
                        }
                    }
                }
                arr_22 [i_3] [i_4] [4] = ((((((!1) != var_0)))) * (max((1 | 11), 52579)));
                var_14 = (((((arr_20 [i_4 + 4] [i_4 + 3] [i_4 + 2] [i_3] [i_3 + 1] [i_3] [i_3]) & (arr_12 [i_4] [i_4] [i_4]))) < 875325864));
                /* LoopNest 2 */
                for (int i_8 = 1; i_8 < 10;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 10;i_9 += 1)
                    {
                        {
                            var_15 |= (((arr_3 [16] [i_4] [16]) >> (((((((arr_0 [i_3 + 1]) / (arr_17 [4] [4] [i_3])))) || (!var_6))))));
                            var_16 = (max(((((arr_23 [i_3] [i_4] [i_3]) < (arr_9 [i_3 + 1] [i_3 + 1])))), 9223372036854775807));
                            var_17 -= ((((55813 ? ((-1 & (arr_17 [i_3] [1] [i_3 + 1]))) : ((((arr_8 [i_3 + 1]) >> (16777215 - 16777196)))))) ^ (((~(-268435456 && 1))))));
                            arr_27 [i_3] = (((((max((arr_1 [i_3]), 7253028299530743056)))) || (((((max(875325864, 0))) ^ (arr_26 [i_3] [3] [3] [i_4] [i_4]))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

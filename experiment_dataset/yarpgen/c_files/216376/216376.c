/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216376
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_0] = (min(((((arr_0 [i_1 - 1] [i_1 - 1]) << (((arr_0 [i_1 - 1] [i_1 - 1]) - 6893))))), var_5));
                var_12 += ((var_6 ? ((max(((var_4 || (arr_2 [i_0] [3]))), (((arr_0 [i_0] [i_1]) || var_9))))) : (((arr_0 [i_1 - 1] [i_1 - 1]) >> (-var_2 - 1989701071)))));

                /* vectorizable */
                for (int i_2 = 3; i_2 < 11;i_2 += 1)
                {
                    var_13 *= ((!(arr_2 [i_1 + 1] [i_2 + 1])));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_0] [i_1 - 1] [i_2] [i_2] [i_4] [i_4] = (((arr_3 [i_3 + 1]) ? var_9 : var_7));
                                arr_13 [i_2] = (arr_1 [i_3]);
                                var_14 = (((arr_5 [i_0] [i_1 + 1] [i_3 + 1]) ? (arr_8 [i_2 + 1] [i_2 + 1] [2] [i_2]) : (arr_1 [i_1])));
                                arr_14 [i_2] [i_1 - 1] [i_3 + 2] = ((arr_0 [i_1 + 1] [i_2 + 1]) >> (arr_2 [i_1 + 1] [i_2 + 2]));
                            }
                        }
                    }
                }
                arr_15 [i_1 + 1] &= (arr_0 [i_0] [i_0]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        for (int i_6 = 4; i_6 < 13;i_6 += 1)
        {
            {
                var_15 = ((((-(arr_18 [i_6 + 2] [i_6 - 1] [i_5])))) ? (((min(var_6, var_3)) << (((arr_18 [i_6 + 1] [i_6 - 3] [i_6]) + 16383)))) : ((max(((var_10 ? var_10 : var_0)), var_4))));
                var_16 = (max(var_16, (((var_8 ^ ((((!(arr_18 [i_5] [i_5] [1]))) ? (((-127 - 1) ? (arr_19 [6] [i_6] [i_5]) : var_5)) : (((((arr_18 [8] [12] [i_5]) || var_7)))))))))));
            }
        }
    }
    var_17 = var_2;
    var_18 = ((~(min((min(var_7, var_3)), var_8))));
    #pragma endscop
}

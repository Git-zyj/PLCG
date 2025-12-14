/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30811
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                var_16 = (min((min(((var_11 - (arr_5 [i_1 - 1] [i_0]))), (arr_0 [i_0]))), ((~(((arr_4 [6] [12]) ? (arr_3 [i_0] [i_1]) : var_4))))));
                arr_6 [i_0] [i_1] = var_15;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            {
                arr_13 [2] [i_2] [i_2] = ((!((min((arr_3 [i_2] [3]), (arr_0 [i_2]))))));
                arr_14 [i_2] [i_2 + 2] [i_2] = ((~(min((arr_2 [i_2 + 1]), (arr_0 [i_2 + 2])))));
                var_17 += ((!(((((min(52405, var_13))) ? (((arr_4 [i_2] [i_3]) << (26977 - 26965))) : var_8)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 19;i_5 += 1)
        {
            {
                var_18 ^= ((~((((max(16, 52380))) + (4267 <= 13131)))));
                var_19 = (((arr_17 [i_5]) + (max(39, 2097024))));
                var_20 = (((~((var_2 ? (arr_18 [i_5] [i_5]) : -4366860379336384984)))));

                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    var_21 = (((arr_19 [i_5] [i_5]) >= (-398165662280959604 <= -766123236134523457)));
                    var_22 = ((!(((!var_2) && var_6))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 21;i_8 += 1)
                        {
                            {
                                arr_28 [i_4] [i_7] [i_5] [i_7] [i_5] [i_4] = (min((arr_16 [i_4]), (min((arr_22 [i_5 + 2] [i_5 + 2]), 2147483628))));
                                var_23 |= (((((arr_27 [i_5 + 1] [i_5] [2] [i_5 - 1] [i_5 + 1] [i_5]) <= (arr_27 [i_5] [i_5] [i_5] [i_5 - 1] [i_5 + 1] [i_5]))) ? (arr_27 [i_5 + 2] [i_5] [4] [i_5 - 1] [i_5 + 1] [i_8]) : (((min((arr_27 [i_5] [i_5] [i_5 + 1] [i_5 - 1] [i_5 + 1] [i_5 + 1]), (arr_27 [2] [2] [i_4] [i_5 - 1] [i_5 + 1] [i_8])))))));
                                var_24 = (arr_26 [2] [i_5]);
                                var_25 = (max(var_25, (arr_21 [i_5 + 1] [i_6] [i_7])));
                            }
                        }
                    }
                }
                for (int i_9 = 0; i_9 < 21;i_9 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 21;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 18;i_11 += 1)
                        {
                            {
                                var_26 = ((7957475064311080592 || (!52402)));
                                var_27 = (min(var_27, (((!(arr_20 [i_11 - 1] [i_10] [0] [i_4]))))));
                            }
                        }
                    }
                    var_28 = (min((min((arr_25 [i_4] [i_4] [i_4] [i_5 + 1]), var_4)), ((max(28207, -27337)))));
                }
            }
        }
    }
    #pragma endscop
}

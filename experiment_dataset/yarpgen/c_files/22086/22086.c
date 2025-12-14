/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22086
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_10 -= (~((~((-(arr_13 [i_0] [i_1 + 3] [i_1 + 3] [i_2] [i_3] [i_4 + 2]))))));
                                var_11 ^= var_8;
                                var_12 += ((((min((arr_0 [i_0 + 2] [1]), (arr_12 [0] [i_1] [i_2] [i_3] [i_4])))) != (((arr_12 [i_1 - 3] [12] [12] [i_4 + 1] [i_4]) * (arr_12 [i_1 - 1] [i_1 - 1] [i_1] [1] [i_2])))));
                                var_13 &= (((arr_11 [i_0] [i_0] [i_0 + 2] [i_1 + 2] [i_4 + 2] [i_4]) ? ((((!(((-(arr_12 [i_0] [i_1] [i_2] [i_2] [i_4 - 2])))))))) : (((arr_7 [i_0 + 2]) ? (arr_12 [i_1 - 3] [i_1 + 3] [i_1 + 3] [i_4 - 1] [i_4 + 2]) : (((arr_5 [1]) ? (arr_10 [i_0 - 1] [i_1] [i_2] [i_3] [1] [i_4]) : (arr_6 [i_1] [i_2] [4] [i_4 + 1])))))));
                                arr_14 [i_0 - 1] [i_0 + 2] [i_0] [i_2] [13] [13] [6] = 1;
                            }
                        }
                    }
                }
                var_14 = ((((min(var_9, (arr_12 [i_0] [i_0] [9] [i_0] [1]))) ? ((0 ? (arr_11 [i_0 + 1] [i_0] [1] [i_1] [i_1] [i_1]) : (arr_9 [i_1 + 2]))) : (arr_10 [i_0 + 1] [i_0 + 1] [4] [i_1] [i_1] [i_1 - 1]))));
            }
        }
    }
    var_15 -= var_3;
    var_16 -= (((((var_6 ? var_1 : 8))) ? var_1 : var_1));
    var_17 = var_2;
    #pragma endscop
}

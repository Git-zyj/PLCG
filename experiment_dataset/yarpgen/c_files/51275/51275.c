/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51275
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, (((min(((var_0 ? 340 : 8593760551299037640)), ((max(16383, 46210)))))))));
    var_16 = var_7;
    var_17 = (min(var_17, var_7));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_10 [0] [i_0] [i_0] [i_0] = (((min((max(268433408, 8997930411009281712)), (arr_3 [i_0] [i_1 - 1]))) != (((((-(arr_9 [i_3] [i_3] [i_0] [i_3]))))))));
                            var_18 ^= arr_0 [i_2];
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 22;i_6 += 1)
                        {
                            {
                                arr_19 [i_0] [16] [14] [7] [i_6 + 1] = (((arr_2 [i_0] [i_0 + 2] [i_6 + 1]) | (arr_2 [i_0] [i_0 + 2] [i_6 + 1])));
                                var_19 = (((arr_0 [i_0]) | 0));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 ^= var_4;
    #pragma endscop
}

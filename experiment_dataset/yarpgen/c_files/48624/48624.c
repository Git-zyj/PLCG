/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48624
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_2] [i_2] = ((!((min((var_10 - 176), ((((arr_3 [i_0]) ? 0 : (arr_0 [10])))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_14 [1] [i_1] [2] [14] [14] [i_4] = ((374439950 | (arr_7 [0] [i_2] [i_3] [18])));
                                arr_15 [3] [9] [i_2] [i_3] [i_4] [i_3] [i_0] = 374439950;
                                arr_16 [1] [14] [6] [i_3] [i_2] [10] = 85;
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = (max((var_7 && 4294967274), (max(1, 39))));
    #pragma endscop
}

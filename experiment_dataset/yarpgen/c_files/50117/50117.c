/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50117
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= (max(-3228486187149293769, var_4));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 24;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_0] = (min(((max((arr_1 [i_0]), (arr_1 [i_1])))), (min((arr_5 [i_1 - 2] [i_1] [i_1 + 1]), (min(4844246277821797169, var_4))))));
                arr_7 [i_0] [i_1 + 1] = arr_2 [i_1] [2] [2];
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_13 = -3228486187149293769;
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_4 + 1] = ((-(arr_2 [i_1 + 1] [i_1 - 4] [i_4 + 2])));
                                var_14 = ((!(arr_10 [i_1] [i_1 + 1])));
                                var_15 = (((arr_11 [7]) & (arr_0 [i_1])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 |= var_1;
    var_17 = var_1;
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239466
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_16 ^= (arr_5 [i_3] [10] [i_0]);
                            arr_9 [i_1] [i_2] [i_1] [i_1] [i_1] = (max(-var_10, ((1 ? var_10 : 94))));
                            var_17 = (min(var_17, ((((((var_13 + (arr_3 [i_1])))) ? var_0 : ((var_4 - (arr_3 [i_0]))))))));
                            var_18 = (max(var_18, (((-((-(arr_3 [i_2]))))))));
                        }
                    }
                }
                var_19 = (min(var_19, (1885655649 << 1)));
            }
        }
    }
    var_20 += -var_13;
    var_21 = (1 ? var_14 : (((max((!-2459), 28025)))));
    #pragma endscop
}

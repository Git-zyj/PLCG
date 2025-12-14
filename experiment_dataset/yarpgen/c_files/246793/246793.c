/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246793
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_20 *= max(var_2, var_17);
                    var_21 = (min((arr_2 [i_1]), (((!var_16) ? (arr_0 [i_0]) : (max(var_7, var_5))))));
                    arr_6 [i_1] [i_1] [i_1] = var_15;
                }
            }
        }
    }
    var_22 = var_17;
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            {
                var_23 &= 5614;
                arr_11 [i_3] [4] = (max((min((~var_19), 381667385422371937)), ((max(var_9, (max(-19580, var_2)))))));
                /* LoopNest 3 */
                for (int i_5 = 2; i_5 < 14;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 12;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            {
                                arr_20 [i_3] [i_3] = max((min((arr_18 [i_3] [i_6] [i_3] [i_3] [i_3]), (~var_10))), (arr_15 [i_3] [i_4] [i_3] [i_7]));
                                var_24 += (min(((min((arr_18 [i_3] [i_4] [4] [i_6] [i_7]), var_17))), -654554394));
                                var_25 *= (arr_19 [i_7] [i_3] [i_5] [i_3]);
                                var_26 = (min(-var_1, var_18));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

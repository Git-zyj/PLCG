/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248542
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((-((-(var_10 + var_15)))));
    var_18 = (((var_11 * (var_4 + var_6))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_19 = var_9;
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_20 = -var_8;
                                var_21 += ((-(~var_8)));
                                var_22 = (max(var_22, (((-var_5 % (var_4 >= var_2))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

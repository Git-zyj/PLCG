/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240865
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_6 [12] [i_0] = (max((arr_2 [i_0] [i_1 + 3] [i_0]), (!0)));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_16 += (max((max(((var_1 ? var_14 : 4294967295)), var_2)), -1518393288));
                                arr_12 [i_0] [i_4] [i_2] [i_3 - 1] [i_0] = ((((((((arr_8 [1] [1] [i_4]) ? 5267389758780666440 : -1518393291))) ? 56 : var_9)) % (((~var_10) | var_12))));
                            }
                        }
                    }
                    var_17 *= (max(((-(arr_3 [i_0] [i_0]))), (max(1, 4294967288))));
                }
            }
        }
    }
    var_18 = var_12;
    #pragma endscop
}

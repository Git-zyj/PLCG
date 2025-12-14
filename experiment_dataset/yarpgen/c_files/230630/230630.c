/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230630
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 181;
    var_14 = ((((-(~var_10)))) ? var_8 : var_7);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_15 ^= var_2;
                                var_16 = (((((arr_11 [i_0] [i_0] [i_2] [i_3] [i_4] [i_4] [i_4]) - var_0))) - ((((arr_10 [i_0] [i_0] [i_2] [i_3] [i_4]) ? (min(1, var_6)) : ((var_11 ? 939939398 : var_0))))));
                                arr_12 [i_0] [i_1 - 1] [9] [i_3] [i_4] [i_1] = ((4279218374 ? 8 : 0));
                            }
                        }
                    }
                    arr_13 [i_0] [i_0] [i_1 - 1] [i_0] = var_5;
                }
            }
        }
    }
    var_17 = var_0;
    #pragma endscop
}

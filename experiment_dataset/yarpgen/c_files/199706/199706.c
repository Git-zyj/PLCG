/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199706
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = -var_2;
    var_19 = (var_7 * var_16);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_20 -= (((min(var_17, 16124996508122943867)) * var_5));
                                arr_15 [i_1] [i_1] [i_0] [i_1] [i_0] = (max((((13196 - 2430871757) - var_16)), (((12789304052043773361 ? 33510 : 1864095538)))));
                            }
                        }
                    }
                }
                arr_16 [i_0] = (((((((min(var_17, (arr_11 [i_0]))))) / (min((arr_0 [i_0] [i_0]), var_16)))) > (((min((arr_14 [12] [i_0] [12] [i_0] [12] [i_0]), -57))))));
                var_21 = (max((((((min(var_9, (arr_10 [i_0] [i_1] [i_1]))))) / var_4)), var_2));
                var_22 = var_6;
            }
        }
    }
    #pragma endscop
}

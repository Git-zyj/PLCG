/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4357
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_5;
    var_11 = 682;
    var_12 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_13 = (min(var_13, (((var_6 >> ((((arr_0 [i_1 + 1] [i_1 + 1]) <= (arr_0 [i_1 + 2] [15])))))))));
                            arr_13 [16] [i_0] [i_2] [i_0] = ((((max((arr_2 [i_0]), (!183)))) > ((+((max((arr_2 [i_0]), 183)))))));
                            var_14 = (max(var_3, (max((min(72, var_2)), (arr_1 [i_3])))));
                            var_15 = (min(var_15, (((+(max((arr_10 [i_1 + 2] [i_2] [i_2]), var_9)))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        {
                            arr_20 [i_1] [i_0] = var_3;
                            var_16 = (((arr_18 [i_0] [i_1 + 2] [i_1 + 2] [i_1 + 2]) ? ((-(arr_14 [i_1] [i_5]))) : ((+(((arr_6 [i_0]) + var_3))))));
                            var_17 = var_1;
                            arr_21 [13] [i_0] [i_4] [i_0] [i_0] = (max((max(((var_0 ? 1684965758 : var_8)), (~599218149))), (((~((min(-23858, -89))))))));
                            var_18 -= (max((((-(~32)))), (~var_0)));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

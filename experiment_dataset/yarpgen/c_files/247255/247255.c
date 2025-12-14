/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247255
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_17 = (min((((((var_14 ? var_7 : var_2))) & (max((arr_0 [i_4]), var_1)))), ((min((arr_0 [i_0]), (arr_0 [i_4]))))));
                                arr_11 [i_1] [i_1] [i_1] [i_3] [21] = ((((((~-22512) ? (((arr_10 [i_1] [i_1]) | (arr_8 [i_0] [9] [13] [i_3]))) : var_9))) ? (((~var_4) ? (var_1 & var_3) : (~var_6))) : (~3674677745)));
                            }
                        }
                    }
                }
                arr_12 [16] |= ((((max((((var_6 || (arr_3 [i_1] [i_0])))), ((18820 ? var_8 : 620289550))))) ? (min((min(var_10, var_0)), ((620289550 ^ (arr_2 [i_1] [i_0]))))) : ((((((3674677738 ? (arr_2 [i_0] [i_1]) : (arr_9 [i_0] [i_0] [15] [i_0]))) > ((((arr_1 [i_0] [i_1]) ? 3674677745 : 3674677728)))))))));
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 4; i_6 < 19;i_6 += 1)
                    {
                        {
                            var_18 = (min(var_18, ((max(411066844, 2147483647)))));
                            var_19 = (min(var_19, var_1));
                        }
                    }
                }
            }
        }
    }
    var_20 |= ((var_15 ? ((var_3 ? 1 : ((-32749 ? 2064676335 : 4264082586)))) : (((((~var_6) > 620289552))))));
    var_21 = (~(((((max(var_2, var_11)))) & var_0)));
    var_22 = (min(var_9, ((((var_1 - -32728) + -85)))));
    /* LoopNest 2 */
    for (int i_7 = 4; i_7 < 20;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 23;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        {
                            var_23 = 73;
                            var_24 = 620289550;
                            var_25 = (max(var_25, (1 + 1)));
                        }
                    }
                }
                arr_33 [i_8] = (min((((var_13 ^ 2230290960) ? (((arr_29 [i_8]) ? (arr_26 [i_7] [i_8] [i_7]) : (arr_24 [i_8]))) : ((1195436404 ? (arr_22 [i_8]) : 0)))), (min(var_12, 3674677747))));
            }
        }
    }
    #pragma endscop
}

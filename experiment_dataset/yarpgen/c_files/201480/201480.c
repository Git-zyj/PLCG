/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201480
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= 4095;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_16 = min((~var_3), (((var_2 ? 0 : (arr_3 [i_1 + 1] [i_1 + 2])))));

                for (int i_2 = 3; i_2 < 12;i_2 += 1) /* same iter space */
                {
                    var_17 = (((!var_12) ? (((var_4 ? ((10601025959013855600 ? 1 : 1030720693)) : (~1030720699)))) : (1225609283 | 5915969250352339273)));
                    var_18 ^= (arr_0 [6]);
                }
                for (int i_3 = 3; i_3 < 12;i_3 += 1) /* same iter space */
                {
                    var_19 -= ((!var_3) ? var_14 : (min((arr_10 [8] [i_3 - 3] [8]), 0)));
                    var_20 = (((arr_9 [i_0] [i_3 + 1] [i_0]) - (((((3109403864 | 10702098181239532693) <= 3069357990))))));
                    var_21 ^= var_0;
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        for (int i_5 = 4; i_5 < 14;i_5 += 1)
                        {
                            {
                                var_22 = ((-((var_9 % (arr_16 [i_0])))));
                                arr_18 [i_0] [i_0] = ((~((~(arr_7 [i_5 - 2] [i_3 + 1] [13] [13])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = ((((((var_9 >= var_12) ? (5915969250352339273 && 3069358014) : (~510)))) ? var_12 : (((var_7 >= var_12) ? var_9 : (!var_6)))));
    #pragma endscop
}

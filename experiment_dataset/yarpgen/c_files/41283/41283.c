/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41283
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    var_18 = var_2;
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_2] [i_3] [i_0] = var_12;
                                var_19 -= -var_7;
                            }
                        }
                    }
                    arr_15 [i_0] [0] [i_2] [i_1] = (!var_13);
                }
                arr_16 [i_1 - 4] [i_0] = var_3;
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        {
                            arr_23 [i_6] [i_1 + 1] [i_6] = -var_8;
                            arr_24 [i_6] [i_6] = min(((~((var_15 ? var_15 : var_9)))), ((-(~var_11))));
                            var_20 = (((((var_8 ? var_13 : var_4))) ? ((var_1 ? var_3 : var_5)) : (~var_0)));
                            var_21 = ((-var_8 ? -var_5 : (((-(~var_1))))));
                        }
                    }
                }
            }
        }
    }
    var_22 = ((~(((((var_13 ? var_11 : var_17))) ? -var_5 : -var_1))));
    var_23 ^= ((~(!-var_0)));
    var_24 = (min(var_2, ((((max(var_10, var_1))) ? (min(var_3, var_7)) : var_17))));
    #pragma endscop
}

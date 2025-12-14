/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224714
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= ((1602615482 | ((var_0 ? var_2 : (((var_4 ? var_9 : 26692)))))));
    var_12 -= ((var_5 ? var_9 : (6 > -113)));
    var_13 = var_10;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_14 = (max(var_14, (((-3 ? 24155 : 2832071182268436292)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_15 = (((26 && 12710229638699282476) == 24874));
                                arr_13 [i_1] [i_0] [i_1] = (((24149 < -124) ? (arr_5 [i_0] [i_1] [20] [i_0]) : ((((24134 ^ var_1) <= 2832071182268436292)))));
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                {
                    arr_21 [13] [i_0] [i_6] = 38;
                    arr_22 [i_6] [i_5] [12] &= ((18010000462970880 || (!var_9)));
                }
            }
        }
    }
    var_16 = (!var_5);
    #pragma endscop
}

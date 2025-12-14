/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53229
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_4 >> (max(24, ((18446744073709551615 ? var_6 : -5855221565371615114))))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_13 = (min(var_13, (((~(((var_8 <= (max((arr_1 [0]), -7093184411335794365))))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    var_14 = (((~var_7) > -2047));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        var_15 ^= (!var_11);

                        for (int i_4 = 2; i_4 < 17;i_4 += 1)
                        {
                            var_16 = ((var_11 ? var_11 : var_3));
                            arr_16 [i_0] [i_0] [i_1] [i_2] [i_0] [11] = -96;
                            var_17 = (min(var_17, var_8));
                        }

                        for (int i_5 = 4; i_5 < 17;i_5 += 1)
                        {
                            arr_19 [i_0] [i_5] [i_0] [i_0] [9] [i_0] = 64;
                            var_18 = (((6881709216426208202 ^ 5855221565371615114) ? var_6 : (((arr_2 [i_5]) ? var_10 : var_0))));
                            arr_20 [i_5] [i_0] [i_2] [i_0] [i_0] = var_0;
                            arr_21 [15] [i_1] [i_2] [i_2] [i_0] [i_1] = -25;
                        }
                    }
                }
            }
        }
    }
    var_19 = var_2;
    #pragma endscop
}

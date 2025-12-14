/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24546
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (160 * 96);
    var_20 = 160;
    var_21 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_22 ^= ((7218209450486549023 ? (((var_3 + 2147483647) >> (37217 - 37215))) : 873193054283655668));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_23 = ((((((var_10 == -7218209450486549023) % var_7))) && 4301872455333388627));
                                var_24 = (((-var_3 == 437577472) ? var_13 : 18065));
                                var_25 = ((max(var_4, -7218209450486549023)));
                                var_26 = var_16;
                                var_27 = (((((-7218209450486549023 ? 108 : -124))) || ((min(-7218209450486549023, (((128 ? 72 : 7))))))));
                            }
                        }
                    }
                }
                var_28 = (min(var_28, ((var_5 ? var_7 : (!-7218209450486549023)))));
                var_29 = -543430641;
            }
        }
    }
    var_30 = var_11;
    #pragma endscop
}

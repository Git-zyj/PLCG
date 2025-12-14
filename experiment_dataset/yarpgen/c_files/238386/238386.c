/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238386
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= (min(((((max(var_13, 135))) ? ((-1987345648 ? 55667635940250231 : var_7)) : (-23364 ^ -4))), ((((222 % var_3) ^ (~var_14))))));
    var_20 = (((max(((8 ? var_17 : var_14)), var_12)) + var_9));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_21 = ((((var_13 << (((((~1) + 35)) - 33)))) >= (!-1)));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 7;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_22 = var_4;
                                var_23 = ((1525199058 | (!var_0)));
                            }
                        }
                    }
                }
                var_24 = (min(var_24, (((234881024 / 1873572056) ^ (((8645413604025814473 / 55667635940250220) ? 8257279653569339040 : (!1)))))));
            }
        }
    }
    var_25 = (max((((((var_17 ? var_10 : var_13))) ? -24 : (var_2 / var_4))), var_7));
    #pragma endscop
}

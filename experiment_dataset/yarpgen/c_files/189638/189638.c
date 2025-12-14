/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189638
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_20 = (max(2116524810, 185));
                var_21 = ((~(arr_2 [i_1 - 1])));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    var_22 = var_17;
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            {
                                var_23 = 71;
                                var_24 = ((70 ? (arr_11 [i_3 + 1] [i_4 + 1] [i_4 + 1] [i_4 + 1]) : (arr_6 [i_0] [i_0] [i_2])));
                            }
                        }
                    }
                }
                var_25 *= var_3;
                var_26 = (-(9223372036854775807 - var_16));
            }
        }
    }
    var_27 = (((((((255 ? var_14 : 255))) ? (((max(var_8, 255)))) : -9223372036854775807)) >> (((((var_10 ? var_13 : 1))) - 6989434889071316908))));
    #pragma endscop
}

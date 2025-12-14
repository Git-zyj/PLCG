/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243038
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((min((min(0, 116)), (((0 ? var_16 : var_15))))) <= -var_16));
    var_19 = (min(0, var_14));
    var_20 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_21 ^= (!(((1 >> (var_4 - 2669)))));
                            var_22 *= 1;
                        }
                    }
                }
                var_23 = (((((var_5 ? -var_11 : var_15))) && (((((min(var_6, var_8))) ? var_7 : (min(1, var_8)))))));
                var_24 = (min(var_24, ((min((2988573970992782681 >> 1), (var_1 * var_9))))));
            }
        }
    }
    #pragma endscop
}

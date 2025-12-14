/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223446
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_15 = (max(var_15, (~1)));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_16 = (arr_0 [i_0] [i_1]);

                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            var_17 ^= var_14;
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_0] [1] = var_4;
                            var_18 *= (1 <= -9139028721333842811);
                            var_19 = ((var_1 ^ (arr_3 [i_0])));
                        }
                        for (int i_5 = 2; i_5 < 16;i_5 += 1)
                        {
                            var_20 += (((845722130 ? 1 : 696302847931345666)));
                            arr_15 [i_5] [i_0] [i_3] [14] [14] [i_0] [16] = -1;
                            var_21 = arr_5 [i_5] [i_5];
                        }
                    }
                    var_22 = (max(var_22, (arr_1 [i_2])));
                    var_23 = (min(var_23, ((((1 ? (!1211715874556704789) : 524287))))));
                }
            }
        }
    }
    var_24 |= (var_13 >> (((var_14 | -12) + 23)));
    #pragma endscop
}

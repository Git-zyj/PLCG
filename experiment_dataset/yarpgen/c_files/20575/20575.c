/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20575
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_18 = (((~13168) ? (max((max(5287746631899880236, var_10)), var_12)) : ((max((arr_9 [i_0] [i_0] [i_0] [i_0 + 2] [i_3 - 1] [5]), 3700343264)))));
                            var_19 = (max(27, 594624031));
                            arr_10 [i_0] = -710743252834448860;
                        }
                    }
                }
                var_20 ^= var_14;
            }
        }
    }
    var_21 *= ((-(min((!245239743298873852), 9223372036854775807))));
    var_22 += (max(var_5, var_6));
    /* LoopNest 2 */
    for (int i_4 = 2; i_4 < 16;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            {
                arr_16 [i_4] [i_5] = (((((var_9 ? var_8 : -26651))) ? 2147483647 : (!9223372036854775797)));
                arr_17 [i_5] = var_5;
                var_23 = (max((min((arr_3 [i_5] [i_4 - 2] [i_5]), (arr_9 [i_4 + 1] [i_5] [i_5] [i_5] [12] [8]))), 5086904835268476289));
                /* LoopNest 3 */
                for (int i_6 = 2; i_6 < 16;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 17;i_8 += 1)
                        {
                            {
                                var_24 = -var_6;
                                arr_24 [i_7] [i_5] [0] [i_6] [0] &= (-(arr_20 [i_4 + 1] [i_4 + 1] [i_6] [i_4]));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

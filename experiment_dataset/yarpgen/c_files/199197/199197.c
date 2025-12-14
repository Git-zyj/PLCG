/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199197
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_13 = var_10;

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    var_14 = (((arr_3 [i_0] [i_0] [i_0]) ? (((var_11 || ((max(12, 0)))))) : ((26 ? -1335468703 : 820173622))));
                    var_15 = (((((5048 ? 2047767184 : 0))) ? ((((min(var_11, 42248))))) : (max(var_8, (~3766921253)))));
                    var_16 = (((max((48430 || 11), ((1 ? -21 : var_0)))) << ((((3 ? 204 : 133)) - 198))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 11;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 11;i_5 += 1)
                        {
                            {
                                var_17 = ((var_10 ? 1 : var_8));
                                var_18 = (((var_8 ? 5305 : -6510772824135597249)));
                                var_19 *= ((var_9 >> (var_3 - 105)));
                                var_20 = (min(var_20, (((var_2 << (28102 / var_7))))));
                                var_21 = ((-(!var_9)));
                            }
                        }
                    }
                    arr_16 [i_1] [i_1] = ((var_0 ? var_5 : var_5));
                }
                arr_17 [i_1] = (min(-0, 1));
                var_22 = (min(var_22, 0));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 25;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 25;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 21;i_8 += 1)
            {
                {
                    var_23 = (((((((((29 ? var_10 : var_8))) > 6743540792207492242)))) ^ (~var_12)));
                    var_24 = (arr_22 [i_8 + 3]);
                }
            }
        }
    }
    var_25 = var_9;
    var_26 = max((~var_11), ((min(0, 3))));
    #pragma endscop
}

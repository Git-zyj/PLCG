/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34299
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 *= ((var_8 / (var_6 * var_8)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 16;i_4 += 1)
                            {
                                var_12 = (var_2 - var_3);
                                arr_13 [1] [i_0] [1] = ((((var_6 ? var_1 : var_6)) - ((var_8 ? var_3 : var_6))));
                                var_13 -= var_2;
                                var_14 = ((((var_0 ? var_0 : var_8)) % ((var_6 ? var_7 : var_0))));
                                var_15 = (((var_4 == var_3) == var_3));
                            }
                            var_16 = (min(var_16, ((((((var_7 + ((var_4 ? var_6 : var_10))))) + ((var_2 / (((var_0 ? var_5 : var_1))))))))));
                            var_17 = ((!(var_3 && var_7)));
                        }
                    }
                }
                arr_14 [i_0] [i_0] = ((var_6 | ((((((15973700185437571790 ? 1 : -13925))) && var_0)))));
                var_18 = (((((var_3 / var_10) && var_0)) ? ((var_9 ? var_10 : var_5)) : (~var_5)));
            }
        }
    }
    #pragma endscop
}

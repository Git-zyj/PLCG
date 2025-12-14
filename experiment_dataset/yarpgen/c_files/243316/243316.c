/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243316
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, (((((((var_11 ? var_5 : var_10))) * var_5))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_14 = ((((((((var_2 ? var_10 : var_7))) ? var_4 : var_4))) || (var_2 * -var_11)));
                                var_15 = (min(var_15, ((((~var_5) < (var_3 & var_1))))));
                                arr_15 [i_0] [i_1] [i_1] [i_0] [i_1] [i_1] [i_4] |= (((var_5 < ((var_6 ? var_7 : var_8)))));
                                var_16 *= (~var_2);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 22;i_6 += 1)
                        {
                            {
                                var_17 = (((var_3 && var_9) ? ((var_5 ? var_6 : var_7)) : var_12));
                                var_18 = (~16384);
                                var_19 = ((((var_8 ? var_9 : ((var_9 ? var_12 : var_0)))) < var_9));
                            }
                        }
                    }
                    var_20 = ((var_6 & (((var_9 < var_1) ^ var_9))));
                }
            }
        }
    }
    #pragma endscop
}

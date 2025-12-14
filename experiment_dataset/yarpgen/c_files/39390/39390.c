/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39390
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= var_4;
    var_15 = var_9;
    var_16 *= (!-var_12);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_17 = 4940484943002860028;
                var_18 -= ((~((var_11 ? (arr_2 [i_0] [i_0]) : (min((arr_3 [i_0] [12] [i_0]), 28))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_19 = ((var_4 ? var_11 : (arr_1 [i_3 - 1] [i_3 - 1])));
                                var_20 = (max(var_20, (arr_6 [i_1] [i_1] [i_3])));
                            }
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    arr_18 [i_5] = ((+(((arr_8 [i_1]) ? 0 : (arr_0 [i_5] [i_0])))));
                    var_21 = (max(var_21, (!var_0)));
                }
                var_22 = (min(var_22, (((-var_2 ? 114 : ((var_0 ? 83 : var_10)))))));
            }
        }
    }
    var_23 = (((((-((var_2 ? 3975663845 : (-9223372036854775807 - 1)))))) ? ((((18446744073709551615 ? 319303450 : var_9)))) : var_1));
    #pragma endscop
}

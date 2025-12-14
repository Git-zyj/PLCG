/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50341
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(((var_17 ? ((var_12 ? var_16 : var_7)) : var_13)), 65535));

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_20 ^= ((max(var_3, (arr_1 [i_0] [i_0]))) ? ((2807668341433704426 ? 0 : 5247)) : ((((max((arr_0 [i_0] [i_0]), -5986316456319980905))) ? (1 | 1) : (max(-4225976721066670374, (arr_2 [i_0] [i_0]))))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_15 [i_3] [i_1] [i_0] [i_3 - 1] [i_0] [i_1 + 1] = var_0;
                                var_21 = (min(var_21, (arr_14 [i_0] [i_3 + 1] [5] [i_4] [i_0])));
                                var_22 = ((!(min((!-8305865121243445678), (!1)))));
                            }
                        }
                    }
                    arr_16 [i_0] = ((((((arr_11 [i_2] [i_1] [1] [1] [i_0]) + (((arr_1 [1] [1]) * -8305865121243445678))))) ? 60074 : ((min(var_4, var_6)))));
                    var_23 = 8305865121243445678;
                }
            }
        }
        arr_17 [i_0] = (-4225976721066670373 & var_7);
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
    {
        var_24 ^= (max(((993 ? -13 : 1)), (max(1134907106097364992, (((-5641425792799116182 ? 1 : 1)))))));
        arr_22 [i_5] [i_5] |= var_12;
        var_25 ^= ((-((((!(arr_13 [i_5] [i_5] [i_5])))))));
        arr_23 [i_5] = (((arr_2 [i_5] [i_5]) || var_17));
        var_26 *= 1;
    }
    #pragma endscop
}

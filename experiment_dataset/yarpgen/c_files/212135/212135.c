/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212135
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_14 [1] [i_0] = (var_2 & 4294967295);
                            var_13 += -27662;

                            for (int i_4 = 0; i_4 < 17;i_4 += 1)
                            {
                                arr_17 [11] [11] [i_2] [i_0] [i_4] [14] [i_2] = (!var_10);
                                arr_18 [i_0] [i_0] [i_0] [i_0] = (!1);
                                var_14 &= (max((arr_9 [i_0] [i_0] [i_0]), 116));
                                var_15 += ((!(((((min((arr_4 [i_0]), 18446744073709551598))) ? 4294967295 : (1 - 3))))));
                            }
                        }
                    }
                }
                arr_19 [i_0] [7] [i_0] = 1;
            }
        }
    }
    var_16 = ((((~((var_6 ? 13354107656926958584 : var_2)))) << (((min(-var_12, var_12)) - 7662295905228506560))));
    var_17 = ((var_11 << (var_9 - 67)));
    #pragma endscop
}

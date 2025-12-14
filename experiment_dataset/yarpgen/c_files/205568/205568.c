/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205568
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_17 &= (((arr_1 [i_0 - 1] [i_2 - 1]) || -10611));
                                arr_14 [i_0 - 1] [i_1] [i_2] [i_3 - 1] [i_4] [i_3 - 1] = (min((((arr_9 [i_0 + 1] [i_2] [i_3] [i_3 + 2] [i_3]) ? (min((arr_7 [i_1] [i_3 + 1] [i_4]), (arr_2 [i_1] [i_1]))) : var_0)), (((var_3 ? (~25898) : (!var_0))))));
                            }
                        }
                    }
                    var_18 = (((max((arr_7 [i_0] [i_2 - 2] [i_1]), var_14))) ? ((max(112, 112))) : ((min((arr_5 [i_1]), (arr_5 [i_0 + 1])))));
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 0;i_6 += 1)
                        {
                            {
                                var_19 = (arr_2 [i_0 + 2] [i_6 + 1]);
                                var_20 = (max(var_7, ((((var_7 * var_5) >= (min((arr_10 [i_5] [i_1]), 112)))))));
                            }
                        }
                    }
                    arr_20 [i_0 + 1] [i_1] [i_2 - 2] [i_2] |= (max((~0), (((min((arr_16 [i_0 + 1] [i_0] [i_1] [i_2] [i_2]), var_3))))));
                }
            }
        }
    }
    var_21 = var_7;

    /* vectorizable */
    for (int i_7 = 0; i_7 < 18;i_7 += 1)
    {
        var_22 = (arr_22 [i_7] [i_7]);
        var_23 = (((arr_22 [i_7] [i_7]) == 112));
    }
    #pragma endscop
}

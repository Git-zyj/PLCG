/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244927
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= var_1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_14 = min((((min((arr_2 [i_0] [i_1] [i_0]), var_9)))), (((((var_4 ? (arr_3 [i_0]) : var_2))) ? ((var_2 << (arr_2 [i_0] [i_0] [i_0]))) : ((((arr_5 [i_2] [i_0] [i_2]) ? (arr_1 [i_0]) : 0))))));

                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        var_15 ^= 1;
                        arr_10 [i_0] [i_0] [i_0] [i_2] [1] [i_0] = (max((((var_5 ? 0 : ((32767 ? 1 : var_8))))), var_2));
                        arr_11 [i_3 + 3] [i_3] [i_3 + 3] [i_3] [i_0] [i_3 + 3] = ((((((var_1 ^ var_3) ? (min((arr_5 [i_0] [i_0] [i_2]), var_4)) : var_1))) ? ((((((arr_3 [i_0]) ? 3729 : var_4))) ? ((1 ? 1 : (arr_6 [i_0]))) : 1)) : (((arr_0 [i_0]) ^ ((max(var_0, var_5)))))));
                        var_16 ^= (((!var_1) ? var_5 : ((min(((min(var_12, 1))), (min(var_9, 32765)))))));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            {
                                var_17 = (min(var_17, (arr_14 [i_0] [i_0] [4] [1])));
                                var_18 = (min(var_18, (((((min(((1 ? 11 : 1)), var_9))) ? ((1 ? -32 : 1)) : ((0 ? ((max(1, 8))) : ((min(1, 0))))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 *= (min((min(21935, -21940)), (max(var_10, (max(6, 1))))));
    var_20 = (((((((var_1 ? var_3 : var_10))) ? -var_12 : var_12)) & (((min(var_12, 1)) ? ((min(-1, 8))) : var_7))));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/472
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 194462180;
    var_16 = (!61306);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_17 = ((-(max(((var_1 >> (var_7 + 1899605960))), (arr_6 [i_2] [i_2] [i_2 - 1] [i_2])))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_18 = ((((((min(18, 8333722876149288598)) >= ((((arr_5 [15] [i_1]) ? -27130 : 36857)))))) * var_13));
                                arr_12 [i_0] [i_2] [i_2] [i_3 + 1] [i_3 + 1] [i_4] = 281474976710655;
                                arr_13 [i_0] [i_2] [i_2] = (~1);
                            }
                        }
                    }
                    var_19 = (((((-1 ? ((max(2697269918, var_2))) : ((4120269932 ? var_3 : (arr_2 [i_0])))))) ? ((min(var_2, 11458))) : (36838 && var_7)));
                    arr_14 [i_2] [i_2] = (min((((var_10 ? (~58735) : ((var_9 ? var_6 : var_6))))), ((~(var_1 & var_3)))));
                }
            }
        }
    }
    var_20 = var_7;
    #pragma endscop
}

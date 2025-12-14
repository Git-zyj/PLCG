/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191754
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 24392;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                {
                    var_11 = (min(var_11, ((((((4378517604000152089 ? (-32767 - 1) : (arr_4 [i_1 - 2])))) >= 119)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_12 = (min(var_12, (-4378517604000152090 & var_6)));
                                var_13 = (min(var_13, ((((~1903797899) ? (arr_1 [i_0]) : (max(-81444542375834640, (~60316))))))));
                            }
                        }
                    }
                    var_14 = (min(var_14, (((min((arr_5 [i_0] [i_1] [i_0]), var_9))))));
                    var_15 = (~1);
                }
            }
        }
    }
    var_16 = var_8;
    var_17 -= var_5;
    var_18 = 60316;
    #pragma endscop
}

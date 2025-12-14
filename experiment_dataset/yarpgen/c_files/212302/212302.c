/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212302
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, ((max(((~((var_3 ? var_1 : 56606)))), (!var_8))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_11 = (min(var_11, ((max(((-(var_7 / 34566))), -460098163)))));
                                var_12 = (((((arr_0 [i_0 + 1]) + 17992679496732705668)) * (((min((10734215101997886428 == 14972549568711309118), (max(0, var_8))))))));
                            }
                        }
                    }
                    var_13 = (min(var_3, (((var_6 ? 0 : var_2)))));
                }
            }
        }
    }
    var_14 = var_1;
    var_15 = ((~(~var_3)));
    var_16 = (max(var_16, (((var_3 ^ (max((min(3271798989833844190, var_2)), (var_5 && var_8))))))));
    #pragma endscop
}

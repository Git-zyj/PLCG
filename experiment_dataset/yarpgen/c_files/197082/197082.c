/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197082
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = ((+(((!((((arr_0 [12]) * var_6))))))));
        var_20 = var_2;
        arr_5 [i_0] [i_0] = var_8;
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                {
                    arr_15 [i_2] = ((((min(var_12, 2147483647))) ? -543145147 : (max((arr_3 [i_2]), var_17))));
                    var_21 |= -543145151;
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                arr_20 [i_2] [i_2] = ((-(max(-var_12, (((arr_11 [14] [14]) ? 4194375296 : 209))))));
                                var_22 = (min(var_22, (((~(!-var_19))))));
                                var_23 = (((-8753837375188420363 && -118) >> (var_15 + 2112278401)));
                                arr_21 [i_2] [i_2] [i_5] [i_4] [i_2] = (min(467421897, 1429364071));
                            }
                        }
                    }
                    var_24 = (max(var_24, ((((!var_12) ? var_18 : (543145123 && var_7))))));
                }
            }
        }
    }
    #pragma endscop
}

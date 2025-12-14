/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48495
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(((112 ? ((4286297243 ? 3099 : -7712535116305806810)) : ((117 ? 1 : 6900351327637814941)))), (((var_13 ? 109 : var_13)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_19 ^= (max(var_15, (max(-1474459319, ((-111 ? 17234224550894208115 : var_12))))));

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        var_20 = ((((7019958851954865153 ? 1 : 1478151966)) << ((((-112 ? -2026737611320533030 : -112)) + 2026737611320533052))));
                        var_21 += (!1);
                        arr_11 [i_0] [i_3] [i_3] [i_0] = (!4284448619545186973);
                    }
                    var_22 = ((((((((5243432937855348328 ? -118 : 4286297253))) ? 4503108422995819916 : (min(4284448619545186989, 4284448619545186973))))) ? -3882 : (((-120 / 1) ? -112 : 1042311106))));
                }
            }
        }
    }
    var_23 = var_8;
    #pragma endscop
}

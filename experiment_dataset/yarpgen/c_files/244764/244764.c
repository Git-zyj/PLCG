/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244764
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, ((((!1) ? (max((~var_7), -6945)) : -113)))));
    var_21 = (((!var_11) ? (!var_19) : (((~var_11) ? (!1792137050) : ((var_9 ? var_15 : var_10))))));
    var_22 = 4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_23 = 24;
                    var_24 = (-((((max(59470, var_14))) ? 14258 : (arr_5 [i_0] [i_0]))));
                    var_25 = 119;
                }
            }
        }
    }
    #pragma endscop
}

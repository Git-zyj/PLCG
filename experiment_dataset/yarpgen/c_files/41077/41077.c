/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41077
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((-var_9 / -5189081561961692298) ? 3913076697 : ((3913076697 ? var_0 : (max(7688874055555676007, var_10))))));
    var_14 = var_5;
    var_15 = (max(((var_7 ? (~979232629) : var_3)), var_11));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            {
                var_16 = (max(var_16, (((((((26 ? -5189081561961692298 : (arr_1 [i_0]))))) ? ((((max((arr_4 [i_1] [i_0] [i_0]), var_8))) ? -9223372036854775791 : (~var_0))) : (max(45075, (max(-7056188121806901346, 75)))))))));

                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    var_17 = (max(var_17, 20030));
                    var_18 = (max((!-1), (max(var_10, 832449217))));
                    var_19 = arr_3 [i_0];
                }
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223362
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_17 = max((min(var_14, 2676617670740293632)), (((max(var_6, 1)) | 196035861734504954)));
                    var_18 = (min(2676617670740293624, (max((var_12 | -34), 1))));
                    var_19 = var_4;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 14;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            {
                var_20 = (((((~(-8239180274103567623 == 11099653462577433816)))) - ((var_4 ? ((max(1, 9223372036854775802))) : (min(3141779713807281955, -7805))))));
                var_21 = ((~(min(var_15, 1933662291170372273))));
            }
        }
    }
    var_22 = (max(var_22, -1));
    #pragma endscop
}

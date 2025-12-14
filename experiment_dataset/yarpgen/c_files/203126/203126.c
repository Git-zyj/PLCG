/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203126
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_18 = (max(var_18, (min((((arr_1 [i_0 - 3]) << (((arr_1 [i_0 - 1]) - 1667565566)))), var_4))));
                var_19 = (min(var_19, (min((~var_13), (arr_5 [i_0 - 2] [i_0 - 2])))));
                var_20 |= (min(-50, 184));
            }
        }
    }
    var_21 = ((((min(var_9, 68))) ? (184 / 190) : (min((~44), ((min(var_0, var_0)))))));
    #pragma endscop
}

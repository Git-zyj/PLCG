/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204762
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= (((((~(-124 ^ 42997)))) || 9633694724585214602));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_18 = ((8813049349124337001 ? (((-((((arr_0 [i_0] [i_1]) || (arr_1 [i_0] [8]))))))) : (min((max(8813049349124337014, var_13)), var_6))));
                var_19 = (max((8813049349124337014 ^ -70), (arr_2 [i_0 + 4] [i_0] [0])));
                var_20 = ((((((arr_3 [i_0] [i_1] [i_1]) / var_5))) ? (arr_0 [i_0 + 3] [i_1]) : (max(1, (min(5346063015135935079, 3983455432))))));
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42249
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_14 = (max((max((min((arr_0 [i_0 - 1] [i_1]), 2476581260823943065)), (-127 - 1))), ((max(-57, 794734675)))));
                var_15 = (max((arr_3 [i_0 + 2]), (((133 ? 0 : ((2476581260823943062 ? -170789711 : 131)))))));
            }
        }
    }
    var_16 = var_0;
    var_17 = (max(((~(~-1))), var_9));
    #pragma endscop
}

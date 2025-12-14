/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240206
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_14 = -5916278917884899648;
                arr_4 [i_1] = -288230376151711743;
                var_15 = ((((~(min(151, 2)))) & (arr_3 [i_1])));
                var_16 = (-((var_13 ? 91 : (arr_3 [i_0 + 1]))));
            }
        }
    }
    var_17 = (var_0 != 151);
    #pragma endscop
}

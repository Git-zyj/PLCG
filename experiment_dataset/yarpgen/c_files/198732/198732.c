/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198732
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_17;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_21 = ((-(((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])))));
                var_22 *= ((-((230 << (735092730 - 735092717)))));
            }
        }
    }
    #pragma endscop
}

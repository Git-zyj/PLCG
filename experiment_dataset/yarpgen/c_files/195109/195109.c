/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195109
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (~227);
    var_16 = ((-((((~var_1) <= (((var_9 ? var_12 : 0))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_17 ^= ((60115 / (10 - -306539390)));
                var_18 = (min(var_18, (((((min((-32 + var_12), (0 - 0)))) + ((-1 - (max((arr_1 [i_0]), var_1)))))))));
            }
        }
    }
    #pragma endscop
}

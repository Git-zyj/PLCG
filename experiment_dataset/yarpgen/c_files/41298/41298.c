/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41298
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                var_13 -= var_4;
                var_14 = (max(var_14, (arr_0 [i_0])));
                arr_6 [i_0] = (min((arr_4 [i_0 + 1]), (max((arr_1 [i_0 - 1] [i_0 + 1]), var_9))));
            }
        }
    }
    var_15 = (!var_8);
    #pragma endscop
}

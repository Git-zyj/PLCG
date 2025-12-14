/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240094
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_14 = ((((max(1, -805756371))) ? (((!1384705301) ? (1 > 238) : ((max(-19, 3))))) : ((min((arr_5 [i_0] [i_0] [10]), (arr_5 [i_0] [i_1] [i_1]))))));
                var_15 = (min((-2147483647 - 1), 81));
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226189
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_12 = (min(492918948, 72));
                var_13 = (min((((arr_3 [i_1]) - var_6)), (arr_3 [i_1])));
            }
        }
    }
    var_14 = ((!(((~(~-208148927))))));
    var_15 *= (((((((-244156825 ? -407 : (-9223372036854775807 - 1))) + var_5))) ? (~var_9) : var_6));
    #pragma endscop
}

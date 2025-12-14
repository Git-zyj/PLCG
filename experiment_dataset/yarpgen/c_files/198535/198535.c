/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198535
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_0, (((-4967366315138663634 ? var_8 : var_5)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_21 = ((((((4967366315138663623 ? -4967366315138663634 : (arr_6 [i_0] [i_1]))) + 9223372036854775807)) >> (20012 - 19990)));
                var_22 += var_11;
            }
        }
    }
    #pragma endscop
}

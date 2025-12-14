/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48345
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_14 *= ((0 ? (min((arr_5 [i_1]), (max(9223372036854775800, 234)))) : 1));
                arr_7 [i_0] = (((!9223372036854775807) - (min((~-17), (-32767 - 1)))));
                var_15 = (min(var_15, 0));
            }
        }
    }
    var_16 = 1;
    var_17 -= var_8;
    #pragma endscop
}

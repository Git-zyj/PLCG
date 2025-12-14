/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218843
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_20 = (((arr_0 [i_0]) / 160));
                    var_21 = (max(-6512, -6512));
                }
            }
        }
        var_22 = ((63 ^ (max(var_9, (arr_0 [i_0])))));
        var_23 -= var_17;
    }
    var_24 ^= ((var_16 ? ((((min(-9223372036854775801, 17179867136))))) : (((var_6 / 3825713585) + 469253688))));
    #pragma endscop
}

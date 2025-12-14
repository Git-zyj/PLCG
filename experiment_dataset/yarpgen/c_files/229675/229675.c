/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229675
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= (var_6 - var_16);
    var_18 |= ((-5736153101607342595 + ((((152549134 + 65535) - (247 - var_15))))));
    var_19 = var_15;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_0] = 0;
                var_20 = (max(var_20, (arr_1 [i_1] [i_0])));
            }
        }
    }
    #pragma endscop
}

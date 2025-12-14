/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48486
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (99 > 472430690);
    var_21 = 65526;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                var_22 *= (13965690890787568227 == 255);
                arr_7 [i_0] [i_0] = ((max(((-714411598 ? var_1 : 2225674915), 71))));
                var_23 = var_9;
            }
        }
    }
    #pragma endscop
}

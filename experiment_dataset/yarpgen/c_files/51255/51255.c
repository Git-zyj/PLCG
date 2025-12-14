/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51255
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += ((((min((3988485336 + var_0), ((min(36, 70)))))) ? ((min(var_0, var_11))) : ((0 ? 235 : 8191))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_13 *= ((-((-112 ? (-12429 | -6117) : ((max(-1, 1)))))));
                    var_14 = (max(var_14, (((((min(var_11, 29589))) && (!var_10))))));
                    var_15 = (max(var_15, (((((max(((var_7 ? var_7 : 9223372036854775807)), var_3))) ? 6035 : var_8)))));
                }
            }
        }
    }
    var_16 = ((((((var_11 ? var_4 : var_3))) ? (((max(var_3, var_4)))) : (8 / 249))));
    var_17 *= var_3;
    #pragma endscop
}

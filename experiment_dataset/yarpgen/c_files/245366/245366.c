/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245366
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_15 = (min(var_15, -var_7));
                var_16 = (min(var_16, ((max(((((arr_5 [i_0] [i_0]) && 1448633053583201885))), ((7 ? -8 : 1)))))));
                var_17 = (min((max((arr_3 [i_0] [i_0] [i_0]), var_7)), ((((1 >= 14) ? ((min((arr_0 [i_0] [1]), -10))) : 0)))));
                var_18 *= var_10;
            }
        }
    }
    var_19 = var_9;
    var_20 = var_5;
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30854
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_4, var_7));
    var_15 = (((((11642 << (11359 - 11324)))) && var_5));
    var_16 = ((1951719362339509967 << (112093370 - 112093368)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            {
                var_17 = ((-1022082447 ? (arr_0 [i_0] [i_0]) : 52714));
                arr_6 [i_0] [i_0] [i_0] = ((!(((var_12 << (((max(var_7, (arr_1 [i_0]))) + 21051)))))));
            }
        }
    }
    #pragma endscop
}

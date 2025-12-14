/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20383
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, (3214 > 43388)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_4 [i_1] &= ((((-7912490393436107708 ? (((((arr_1 [i_0] [i_0]) > (arr_1 [i_0] [i_1]))))) : (arr_3 [i_1] [i_0]))) >> (var_17 + 2009912655051864598)));
                var_20 = (min(var_20, ((min((((min((arr_3 [i_0] [i_1]), 62332)) << (((arr_1 [i_0] [i_1]) + 14020)))), (arr_1 [i_1] [i_0 + 2]))))));
            }
        }
    }
    var_21 = (max(var_21, var_16));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192877
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [7] = -86;
                var_19 = ((var_10 ? (((((min(var_14, var_10))) ^ (var_1 && -95)))) : ((96 & (99 + 3111978516)))));
            }
        }
    }
    var_20 = (max(var_11, (((var_16 - var_1) ? ((-71 ? var_4 : 64)) : -1906928929))));
    #pragma endscop
}

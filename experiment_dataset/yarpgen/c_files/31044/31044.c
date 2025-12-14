/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31044
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += (max(0, 116));
    var_17 = ((((max((min(114, 185452951)), 116))) + (var_3 - var_15)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] [i_0] = min(var_3, (((-(arr_5 [i_0] [i_0])))));
                arr_8 [i_1] = ((((((arr_5 [i_0] [i_1]) & 140))) ? ((-(arr_5 [i_0] [i_1]))) : ((-(arr_5 [i_0] [i_0])))));
            }
        }
    }
    var_18 += var_15;
    #pragma endscop
}

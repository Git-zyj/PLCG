/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3202
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= (max(var_11, var_2));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_0] [1] = ((((1 << (-28 - 4294967239))) << (((arr_2 [1]) - 11120176059632677662))));
                arr_7 [1] [i_1] [i_0] = (((arr_0 [i_1]) ? (236 && var_0) : (max(1, (arr_2 [i_0])))));
            }
        }
    }
    #pragma endscop
}

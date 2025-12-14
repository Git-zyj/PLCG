/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246201
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_0] = (((((var_2 - var_1) ? (arr_2 [i_0]) : ((13575363443804046148 ? (arr_1 [i_0] [i_0]) : 1)))) ^ (((arr_5 [i_1 + 4] [i_1 + 4]) & ((var_1 * (arr_4 [i_0] [i_0] [i_1])))))));
                arr_7 [i_1 - 2] [i_0 - 1] = ((~(arr_1 [i_0 - 1] [i_1])));
            }
        }
    }
    var_11 &= (((~var_3) ? (((var_8 - var_4) ? ((var_5 ? 1770789891 : 15556636036304567700)) : var_0)) : 2122168021));
    #pragma endscop
}

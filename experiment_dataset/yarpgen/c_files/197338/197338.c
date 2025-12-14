/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197338
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 18;i_2 += 1)
            {
                {
                    var_11 = ((((((arr_2 [i_0]) ^ (arr_1 [i_0] [i_1])))) ? (((4109622338 << (((~var_4) + 7979750813398770446))))) : ((((((arr_3 [i_0]) >> (117 - 61)))) ? 2071298276 : 4027520415790328890))));
                    var_12 = (max((((arr_4 [i_0] [i_1] [i_2 - 1]) ? ((2223669019 ? (arr_3 [i_2]) : 117)) : 112)), ((((((-110 ? (arr_1 [1] [i_2 - 1]) : var_8))) ? var_5 : var_3)))));
                }
            }
        }
    }
    var_13 ^= (var_10 ? ((-(max(-4268491875072140997, var_1)))) : ((max(-725910928, -44))));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191849
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    var_17 ^= (((-32579 + var_14) ? ((252 >> (var_15 - 3353644782790185521))) : ((((arr_5 [i_2] [i_2 + 2] [i_2 + 4] [i_2 + 3]) < 3924833454827007869)))));
                    arr_7 [i_0] [i_1 + 1] [i_0] = (min(((~(!-14908))), var_1));
                    var_18 = (min(var_18, 34));
                }
            }
        }
    }
    var_19 = 9187343239835811840;
    var_20 = ((!(~-18960)));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36301
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= 0;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_17 = (max(var_17, 1));
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    var_18 = ((1 ? ((1 ? 6761524823122344183 : (arr_5 [i_0] [i_0]))) : (1 < var_8)));
                    arr_7 [i_0] [0] = (arr_0 [i_0] [i_1]);
                }
            }
        }
    }
    #pragma endscop
}

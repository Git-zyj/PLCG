/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228002
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= (max((((((-5286317967410241290 + 9223372036854775807) >> var_4)) & (-524101122 <= var_0))), 2097088));
    var_15 = var_5;
    var_16 |= var_4;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_17 |= ((!(~-2097090)));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_18 = (arr_0 [i_0 - 1]);
                    var_19 = -var_11;
                    var_20 = ((4582785680807419316 ? 1318174196954356963 : var_1));
                    var_21 |= (-2097089 | -2097088);
                }
            }
        }
    }
    #pragma endscop
}

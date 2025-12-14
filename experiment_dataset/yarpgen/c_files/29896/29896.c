/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29896
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((((max(var_11, -2041433586562836295))) ? (77 <= var_4) : -7941))) >= ((2041433586562836290 % (var_0 + var_7))));
    var_18 = ((((~(-13 & 2041433586562836287))) | (min((((-2041433586562836318 + 9223372036854775807) << (((-9223372036854775807 - 1) - (-9223372036854775807 - 1))))), (((-2041433586562836287 + 9223372036854775807) >> (-2041433586562836269 + 2041433586562836297)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_19 = (((((max(var_13, (arr_1 [i_0] [i_0]))) << ((((1 ? 213 : (arr_3 [i_1]))) - 191)))) / ((min((max(2041433586562836284, var_2)), (((44 ? var_15 : var_1))))))));
                var_20 -= (((((205 >= 18156703390872520657) * (min((arr_1 [i_1] [i_1]), -41)))) != ((((!-18569) - (var_3 == 13609452448712384771))))));
                var_21 = (min((((max(3842162447222075282, var_2)) ^ ((max(2041433586562836284, 8573))))), (((var_7 & -54) | (~var_5)))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                {
                    var_22 = ((+(((((min((arr_5 [i_2]), var_9)) + 9223372036854775807)) << (((-76 <= 32765) - 1))))));
                    var_23 = (~3817797035487676479);
                }
            }
        }
    }
    #pragma endscop
}

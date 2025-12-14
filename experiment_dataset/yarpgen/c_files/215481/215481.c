/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215481
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_3;
    var_18 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                var_19 = ((arr_2 [i_0] [0]) && ((((~var_13) ? (min(var_4, 18400744287438547067)) : (((18400744287438547060 ? 1048568 : (arr_4 [i_1 - 1] [i_0 - 2]))))))));
                arr_6 [i_0] [i_0 - 1] [1] = (min(-488107998747354682, (min((1 && var_3), var_7))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 4; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 20;i_3 += 1)
        {
            {
                var_20 = (((((arr_9 [i_2 - 4] [i_3 + 4] [i_3 + 2]) >> (var_14 + 23474))) - (35802 | 1)));
                var_21 -= (arr_8 [i_2] [i_2]);
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            arr_17 [i_2] [5] [i_4] [i_5] |= -1979993137;
                            var_22 = (max(var_22, (~31525197391593472)));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

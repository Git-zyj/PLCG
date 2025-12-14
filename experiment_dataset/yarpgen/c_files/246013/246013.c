/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246013
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    var_18 += ((-(arr_5 [i_0])));
                    arr_8 [i_2 - 1] [i_2] [i_2 - 1] = (((((1 & (-24668 ^ 1)))) ? 22 : (((min(-1554248699986079963, (arr_3 [i_0]))) | (min(var_5, -2672443876653137982))))));

                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        arr_11 [i_3] [i_1 - 1] [i_2] [2] = -7420452082882058340;
                        arr_12 [i_0] [i_1 - 1] [i_2] [i_3] = max(-4790484562327635152, (((arr_4 [i_0] [20]) ? (-9223372036854775807 - 1) : (101 - 4095))));
                        var_19 = (((max(7337064036255696030, 3893909862)) & ((((((arr_2 [i_0] [i_1] [i_2]) / 18243))) ? 24663 : (((var_1 + 9223372036854775807) << (19 - 19)))))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        var_20 = ((24661 << (424771761 - 424771756)));
                        var_21 = (max(var_21, 3125339158785007457));
                    }
                }
            }
        }
    }
    var_22 = 3125339158785007470;
    var_23 = (max(var_23, (!var_2)));
    #pragma endscop
}

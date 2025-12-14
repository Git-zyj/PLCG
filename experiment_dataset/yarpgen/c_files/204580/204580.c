/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204580
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= var_12;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    var_16 = (min(1, (arr_5 [i_0] [i_1] [i_0])));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_17 = (min(((((arr_9 [i_3 - 1]) & (2341819631 + 1)))), ((((((arr_1 [i_0]) & 96))) ? -6969660418354302150 : ((((arr_11 [i_4] [i_1]) ? (arr_8 [i_0] [i_1 + 2] [i_0] [i_3]) : 31448)))))));
                                var_18 ^= var_4;
                                var_19 = (min(((((var_4 ? 1 : 26798)))), (((5062301855225058052 ? var_1 : var_2)))));
                                var_20 = (((arr_6 [i_1 - 1] [9] [i_2 + 2] [9]) + -185));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = 1;
    #pragma endscop
}

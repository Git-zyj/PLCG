/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39858
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, (min(885297674, 123))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 24;i_2 += 1)
            {
                {
                    var_13 = (min(var_13, (((min((arr_5 [i_0] [i_0] [i_2 + 1] [i_2]), var_8))))));
                    var_14 = 6808800015656040937;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 4; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 19;i_4 += 1)
        {
            {
                var_15 = (var_0 | ((93 ? ((3 ? var_0 : var_0)) : var_3)));
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 18;i_6 += 1)
                    {
                        {
                            arr_17 [i_3] [i_3] = (min(((max(26, (min(-39, 253))))), (max((((arr_15 [i_3] [i_4] [i_5]) ? 3318484571 : var_10)), ((8664719612666981340 ? 976482737 : -1))))));
                            var_16 = (((((((((-332733961223141268 ? 6203262524665715173 : 134217727))) < 18446744073709551586)))) + 6808800015656040937));
                            var_17 |= (max(-8664719612666981341, 39));
                            var_18 = (max(var_18, ((max(((min(var_5, -330583654))), ((var_4 ? (((max((arr_1 [i_3]), (arr_1 [i_5]))))) : (arr_5 [i_3 - 3] [24] [6] [i_4]))))))));
                        }
                    }
                }
            }
        }
    }
    var_19 ^= var_0;
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239789
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max((max(var_7, var_16)), var_15));

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        arr_4 [18] |= var_0;
        var_18 += (arr_2 [8]);
        arr_5 [i_0] = (-var_14 ? (((((57292 ? 1 : var_1))) / -521321764)) : (arr_0 [i_0] [i_0 + 2]));
        arr_6 [i_0 + 1] [i_0] = ((((max((arr_1 [i_0]), var_13))) ? var_5 : var_1));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 20;i_1 += 1)
    {
        arr_10 [i_1] = -521321789;
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                {
                    var_19 *= (arr_14 [i_1 + 1] [i_3] [i_3] [i_1]);
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            {
                                var_20 -= (arr_18 [i_3]);
                                arr_20 [i_1 + 1] [i_1 + 1] [i_1] [i_1] [19] [i_1 + 1] [i_1] = (143493300 > 521321764);
                                arr_21 [i_5] [12] [i_5] |= ((var_4 ? 521321778 : (arr_15 [i_1 + 1] [i_1 - 1])));
                                var_21 = (max(var_21, 3773645493));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = max((max(var_7, (var_12 ^ var_8))), 16383);
    #pragma endscop
}

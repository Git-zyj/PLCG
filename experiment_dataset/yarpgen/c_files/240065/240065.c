/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240065
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_1, var_14));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_10 [4] [i_1] [0] [i_2] [i_1] [2] = var_2;
                            var_16 = (max((max(var_13, (var_4 || 1))), 1));
                            var_17 = (arr_1 [i_1 + 1]);
                        }
                    }
                }
                var_18 = (max(var_18, ((max((arr_4 [i_0] [i_1 + 2]), (min((arr_4 [i_0] [i_1]), var_5)))))));
                var_19 = (max(var_19, ((((max((arr_0 [i_0]), var_2)) == (arr_0 [i_0]))))));
            }
        }
    }

    for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
    {
        arr_13 [i_4] [13] = (arr_11 [i_4]);
        var_20 = 0;
        arr_14 [i_4] [i_4] = (min((min((arr_12 [i_4]), 65533)), var_13));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
    {
        arr_18 [i_5] = 8388608;
        var_21 -= (arr_12 [i_5]);
        var_22 -= var_7;
    }
    var_23 = var_6;
    var_24 = (min(var_24, var_0));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224638
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] [i_0] = (max(((-(arr_3 [i_0 + 2] [i_0 + 3] [i_0 - 1]))), ((-(max(var_14, 8480577232070530676))))));
                var_15 = (max(var_15, var_9));

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    var_16 -= (((max(var_9, -8480577232070530670))));
                    arr_12 [i_0] [i_1] [i_2] = ((+((((arr_3 [20] [i_1] [i_2]) ? 33554431 : 1248305915)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_19 [i_1] = ((+(((arr_8 [1] [i_1]) ? (arr_17 [i_0] [i_1] [i_2] [i_3] [i_4]) : (!var_3)))));
                                var_17 = 18446744073709551615;
                            }
                        }
                    }

                    for (int i_5 = 2; i_5 < 20;i_5 += 1)
                    {
                        arr_24 [i_0] [i_0] [i_0] [i_0] = (arr_6 [i_0]);
                        var_18 ^= var_1;
                    }
                }
                arr_25 [i_0 + 3] [2] [14] = ((((max((arr_20 [i_0 + 2] [i_1] [i_1] [i_1]), var_6))) ? ((((max(var_10, var_4))) ? ((9165871143851471970 + (arr_16 [i_0] [i_1] [i_1] [i_1] [i_0 + 2]))) : 202)) : ((max(var_2, (max(var_14, var_9)))))));
            }
        }
    }
    var_19 = (max((max((-1 * var_0), var_12)), -329924624));
    #pragma endscop
}

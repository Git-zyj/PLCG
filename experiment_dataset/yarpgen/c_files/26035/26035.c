/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26035
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 24;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        var_15 = (max(var_15, (arr_2 [i_2])));
                        var_16 = (max(var_16, ((((((arr_2 [i_2 - 2]) + 2147483647)) << (var_6 - 145))))));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            {
                                arr_15 [i_0 + 2] [i_1] [i_0] [i_4] [i_2] = (arr_0 [i_0 - 1]);
                                var_17 -= (min((arr_9 [i_1] [i_1] [i_5]), (min(var_11, ((max(var_14, (arr_13 [i_5]))))))));
                                arr_16 [i_2] [i_4] [i_2] [17] [i_2] = (-(((var_13 * 109) * (arr_5 [16] [i_4] [i_2] [i_1]))));
                                arr_17 [i_0] [8] [i_2] [i_2] [i_2] [i_4] = (min((arr_10 [20] [i_1 + 2] [i_2 - 3] [i_2 - 3] [i_2 - 3] [1]), (((var_10 ? var_2 : (arr_13 [i_2]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = (max(18, var_5));
    #pragma endscop
}

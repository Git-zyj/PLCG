/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208015
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, var_0));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_13 = min((arr_0 [i_0 - 1] [i_0]), (arr_1 [i_0 - 1]));

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_14 = (min(var_14, (arr_3 [i_0 - 1] [i_1])));

            /* vectorizable */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 19;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        {
                            var_15 = (arr_12 [i_0] [i_1] [i_3 + 1] [i_3]);
                            var_16 = (max(var_16, (arr_14 [i_0 - 1] [i_0 - 1] [i_0] [i_1] [i_0])));
                            var_17 = (arr_7 [i_2]);
                            arr_15 [1] [i_2] [i_2] [i_2] [i_0] = (arr_1 [i_0 - 1]);
                            arr_16 [i_2] [i_1] [18] [1] = (arr_10 [i_3 + 1] [i_3 - 1] [i_2] [0]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 1;i_6 += 1)
                    {
                        {
                            arr_22 [i_2] [i_1] [1] = (arr_4 [i_6] [i_6 - 1] [i_6 - 1]);
                            var_18 = arr_4 [i_6] [1] [i_6 - 1];
                        }
                    }
                }
            }
            var_19 = (arr_2 [i_0 - 1] [i_0 - 1]);
        }
    }
    for (int i_7 = 0; i_7 < 22;i_7 += 1)
    {
        arr_26 [i_7] [i_7] = (arr_25 [i_7]);
        var_20 = max((max((arr_25 [i_7]), (arr_25 [i_7]))), (arr_25 [i_7]));
        var_21 = (min((arr_24 [i_7]), (min((arr_24 [i_7]), (arr_25 [i_7])))));
        var_22 = (arr_25 [i_7]);
    }
    for (int i_8 = 0; i_8 < 21;i_8 += 1)
    {
        var_23 += arr_28 [i_8];
        var_24 = (min(var_24, (arr_27 [i_8])));
        var_25 = (max(var_25, ((min((arr_23 [i_8]), (arr_23 [i_8]))))));
    }
    #pragma endscop
}

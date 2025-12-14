/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40413
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                var_10 -= (arr_0 [9]);
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_11 += var_8;
                            arr_10 [i_1] [i_1] [i_1] = var_4;
                            arr_11 [i_0] [i_1] [i_1] [i_2] [i_3] [i_3] = (min((~var_8), (((arr_2 [i_0] [i_0]) ? (arr_2 [i_0] [i_1 - 2]) : (arr_2 [i_2 + 1] [i_3])))));
                            var_12 = -1;
                        }
                    }
                }
                var_13 ^= (arr_3 [i_0]);
                var_14 -= (arr_4 [i_1] [i_1] [i_0]);
                arr_12 [i_1] [i_1] = (!((((arr_7 [i_0] [i_1] [i_1 - 3]) ? (arr_7 [2] [i_0] [i_1 + 2]) : (arr_7 [i_0] [i_1 + 3] [i_1 - 3])))));
            }
        }
    }
    var_15 = (max(var_15, var_8));

    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        arr_16 [i_4] = 1;
        arr_17 [18] [15] = (arr_14 [i_4] [14]);
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 22;i_5 += 1)
    {
        var_16 = (max(var_16, (((~((-(arr_21 [i_5]))))))));
        var_17 = -1;
        var_18 *= var_1;
    }
    var_19 = (var_5 != -var_0);
    #pragma endscop
}

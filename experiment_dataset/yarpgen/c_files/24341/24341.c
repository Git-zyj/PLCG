/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24341
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_16 = (min(var_16, ((max((~var_1), (arr_0 [i_0]))))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 18;i_3 += 1)
                {
                    {
                        var_17 = (max(var_17, var_1));
                        var_18 = (min(var_18, var_11));
                        var_19 = (min(var_19, (((~(arr_4 [i_0] [i_1] [i_1 - 1] [i_3 - 1]))))));
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 14;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                {
                    var_20 = (max(var_20, (arr_11 [i_6])));
                    /* LoopNest 2 */
                    for (int i_7 = 4; i_7 < 11;i_7 += 1)
                    {
                        for (int i_8 = 4; i_8 < 14;i_8 += 1)
                        {
                            {
                                var_21 = (min(var_21, var_1));
                                var_22 = (min(var_22, (arr_11 [14])));
                            }
                        }
                    }
                    var_23 = (max(var_23, (arr_15 [11] [i_5] [i_5] [11])));
                    var_24 = (max(var_24, ((((arr_14 [i_5] [12] [i_5 - 2] [i_5 + 1]) ? ((var_13 >> (((arr_3 [i_5] [i_5 + 1] [i_5 - 2]) - 7063)))) : var_13)))));
                }
            }
        }
    }
    #pragma endscop
}

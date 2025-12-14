/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201907
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_16 = (arr_0 [i_1]);
                    var_17 = max((min((arr_7 [i_0] [i_1 - 1] [i_2] [i_2]), (arr_2 [i_1] [i_1 + 2]))), (arr_5 [i_1]));
                    var_18 = (arr_1 [i_2]);
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        var_19 -= (min((min(var_4, var_7)), (((2127194562 ? 0 : 14074)))));
        var_20 -= (min((((((var_6 ? var_0 : var_0))) ? var_3 : (min(6399846795733347738, 1)))), ((((var_3 ? var_1 : var_12))))));
        /* LoopNest 3 */
        for (int i_4 = 2; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    {
                        arr_21 [9] &= var_6;
                        var_21 = ((-(((arr_15 [i_4 - 1] [i_4] [i_4 - 1] [i_4 - 1]) ? (arr_15 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 + 1]) : var_9))));
                        var_22 = (arr_15 [14] [i_5] [i_5] [i_5]);

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            arr_26 [i_3] [i_4] [i_5] [i_6] [i_7] [i_4] [i_3] &= var_7;
                            var_23 = (((~(arr_10 [i_3]))));
                            var_24 = (((((~(arr_19 [i_7] [i_6] [i_5] [i_4])))) ? (arr_24 [i_4] [i_4] [i_4 - 1] [i_4 + 1] [i_4 - 1]) : var_4));
                            var_25 = ((var_12 ? (arr_19 [i_3] [17] [i_5] [i_6]) : (arr_19 [i_3] [i_4] [i_5] [i_6])));
                            var_26 = (12046897277976203876 >= 1);
                        }
                    }
                }
            }
        }
    }
    var_27 = var_12;
    #pragma endscop
}

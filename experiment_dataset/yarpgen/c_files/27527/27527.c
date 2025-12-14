/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27527
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_4;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_1 [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_16 = ((1 ? 1 : 1));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_17 = ((((arr_0 [i_0] [i_1]) ? (arr_0 [i_1] [i_0]) : (arr_0 [i_0] [i_1]))));
                                var_18 = arr_3 [i_0] [i_0] [i_0];
                                arr_14 [i_0] [i_0] [i_1] [i_1] [1] [2] = (arr_11 [i_0] [1] [i_2] [i_4]);
                                var_19 += ((194 * 1) && 18446744073709551615);
                            }
                        }
                    }
                }
            }
        }
        var_20 = ((((((arr_4 [i_0] [i_0]) ? (arr_10 [i_0] [i_0] [i_0]) : 14271232398949340700))) ? (((arr_13 [i_0] [1] [i_0] [i_0] [i_0] [i_0]) - (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]))) : (arr_0 [i_0] [i_0])));
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        arr_18 [i_5] = (((arr_5 [i_5] [i_5] [i_5]) * ((((173 ? (arr_0 [i_5] [i_5]) : 120356410329012768)) / (((max((arr_3 [i_5] [i_5] [i_5]), (arr_1 [i_5])))))))));
        arr_19 [i_5] = ((((arr_0 [i_5] [i_5]) + (((arr_5 [i_5] [i_5] [i_5]) ? (arr_10 [i_5] [0] [i_5]) : (arr_6 [8]))))));
        var_21 ^= (arr_9 [i_5] [i_5] [i_5] [i_5] [i_5]);
        var_22 = (max(var_22, ((((arr_0 [i_5] [i_5]) ^ (arr_16 [i_5]))))));
        arr_20 [i_5] [i_5] = (arr_17 [i_5] [i_5]);
    }
    var_23 = ((var_6 ? var_12 : (var_5 - 1)));
    #pragma endscop
}

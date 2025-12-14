/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229127
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 24;i_3 += 1)
                    {
                        {
                            arr_13 [i_1] [i_2] [i_1] = var_4;
                            var_20 = (62623 - 234153772);
                        }
                    }
                }
                arr_14 [i_1] [i_0] [i_1] = (((arr_2 [i_0]) ? ((var_9 >> ((((var_7 >> (132 - 119))) - 243469)))) : (((min(var_4, (arr_12 [i_0] [i_1] [12] [i_0] [i_1 + 1] [i_1])))))));
                arr_15 [i_1] = var_9;

                for (int i_4 = 3; i_4 < 22;i_4 += 1)
                {
                    var_21 = (max(var_21, ((((((var_16 ? (arr_1 [i_0] [i_1 + 1]) : 0))) ? ((14 ? 113 : (-9223372036854775807 - 1))) : (((((arr_16 [i_1] [i_1] [i_1 + 2]) && (((2860271436 ? var_16 : var_15))))))))))));
                    var_22 = (((((((-9223372036854775807 - 1) + 9223372036854775807)) + 9223372036854775807)) << (((((((-9223372036854775807 - 1) - -9223372036854775780)) + 55)) - 27))));
                    arr_18 [i_4] [i_1] = arr_11 [i_4] [i_1] [i_0] [i_0];
                    var_23 = ((min((arr_16 [i_0] [i_0] [i_0]), (((arr_1 [i_0] [i_1]) ? (arr_2 [i_4 - 3]) : var_1)))));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    arr_21 [i_1] [i_0] [i_1 + 3] [i_1] = (arr_9 [i_1 - 1] [i_1]);
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            {
                                var_24 += (((arr_3 [i_1 + 3] [i_1 + 2]) ? (arr_3 [i_1 + 2] [i_1 - 1]) : (arr_3 [i_1 + 1] [i_1 - 1])));
                                arr_28 [i_0] [i_1] [i_1] [i_1] = (((arr_12 [i_7] [i_6] [i_5] [8] [2] [i_0]) >= (arr_12 [i_0] [i_1 + 2] [i_5] [i_6] [i_6] [i_7])));
                            }
                        }
                    }
                    var_25 = var_8;
                    arr_29 [i_0] [i_5] [i_1] [i_1] = arr_4 [i_0] [22] [15];
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 25;i_9 += 1)
                        {
                            {
                                arr_34 [3] [i_1] [i_5] [i_8] [i_8] = (arr_3 [i_1 - 1] [i_1 + 2]);
                                arr_35 [i_8] [i_1] [i_8] [i_8] [6] = ((var_12 != ((var_5 ? (arr_8 [i_8] [i_1 + 2] [i_5] [i_8]) : 779554383))));
                                arr_36 [i_9] [i_1] [i_8] [i_5] [i_1] [i_1] [i_0] = 9223372036854775807;
                                var_26 = 0;
                            }
                        }
                    }
                }
                for (int i_10 = 2; i_10 < 23;i_10 += 1)
                {

                    for (int i_11 = 1; i_11 < 1;i_11 += 1)
                    {
                        var_27 = min((((((arr_19 [i_0] [i_11] [i_10 - 1] [i_11]) ? (-9223372036854775807 - 1) : (arr_25 [i_11] [21] [i_1] [i_1] [i_0]))) + (arr_7 [i_0] [i_0] [i_0] [i_11]))), (-9223372036854775807 - 1));
                        var_28 = (arr_16 [i_0] [i_0] [i_0]);
                        arr_42 [i_1] = (arr_8 [i_0] [i_10] [i_10] [i_11]);
                    }
                    var_29 = (min((max(-5918033472435171441, (arr_6 [i_0] [i_0] [i_10 + 1]))), (((arr_6 [i_0] [i_1] [i_10 + 2]) ? 1 : (arr_6 [i_0] [i_1] [i_10 + 2])))));
                }
            }
        }
    }
    #pragma endscop
}

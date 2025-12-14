/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249575
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {

                    for (int i_3 = 4; i_3 < 16;i_3 += 1)
                    {
                        arr_14 [i_3] [i_1] [0] [0] [i_3] = var_17;
                        var_20 = ((~-15910) ? (((!((((arr_3 [i_0] [i_2] [i_3]) ? (arr_3 [i_0] [i_1] [i_0]) : (arr_11 [i_3 - 2] [i_3] [1] [i_3] [i_0]))))))) : 0);
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_21 = ((max(4306778755638958893, (0 >= 15941))));
                        arr_19 [i_0] [i_0] [0] [i_2] [i_4] [i_0] = 1;
                        var_22 = (arr_18 [i_0] [i_1] [1] [i_1] [i_1]);
                    }
                    var_23 = (max(var_23, ((max((max((arr_12 [i_2] [i_2] [i_2] [i_2] [i_0] [i_0]), (arr_12 [i_0] [6] [i_1] [i_1] [i_2] [i_2]))), (arr_12 [i_2] [i_2] [i_2] [i_2] [i_0] [i_0]))))));
                    arr_20 [i_0] [i_0] [i_0] = ((((((!(arr_13 [i_0] [0] [0])))) != (max((arr_4 [i_1]), var_4)))));
                    var_24 = ((998 ? (-9223372036854775807 - 1) : -15918));
                }
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    arr_23 [i_5] [17] [16] = ((!((((~var_2) + ((((-2147483647 - 1) <= var_10))))))));
                    arr_24 [i_1] [i_1] [i_1] = (max((!3695958219), 64));
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 15;i_6 += 1)
                    {
                        for (int i_7 = 4; i_7 < 16;i_7 += 1)
                        {
                            {
                                var_25 -= (0 - -1);
                                arr_30 [i_7] = -156276253;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 18;i_9 += 1)
                        {
                            {
                                var_26 = ((-(arr_22 [1] [1] [i_8])));
                                var_27 -= ((((arr_25 [i_0] [i_1] [7] [i_9]) ? (arr_25 [i_9] [i_5] [i_0] [i_0]) : -1)));
                                var_28 += (((max((arr_37 [9] [i_5] [i_5] [i_5] [i_5]), (max(24, var_18)))) + ((((var_1 >= (max(2435299030, 2435299030))))))));
                                arr_38 [2] [2] [7] [i_0] = (max(((1676437090 ? 2820053516 : (((-127 - 1) ? (arr_18 [i_0] [i_1] [9] [i_1] [i_9]) : 15938)))), (!14416730407205040308)));
                                var_29 |= (max((((arr_17 [i_8] [i_8] [i_8] [i_5] [i_1] [i_0]) ? (((arr_21 [i_8]) ? (arr_25 [i_0] [i_5] [i_8] [i_9]) : (arr_34 [17] [i_1]))) : 37317)), (((arr_34 [i_8] [i_1]) ? 218 : (arr_29 [i_0] [i_0] [i_1] [i_5] [i_8] [i_0] [i_9])))));
                            }
                        }
                    }
                }
                var_30 = (((((15909 / (arr_16 [i_0] [8] [8] [i_1])))) ? ((((arr_16 [i_0] [i_1] [i_0] [i_0]) / (arr_16 [i_1] [8] [8] [8])))) : var_13));
                arr_39 [i_1] |= (((arr_22 [9] [i_0] [i_1]) ? (((((~(arr_32 [9] [9] [i_1])))) ? (max((arr_13 [i_0] [i_0] [1]), -14108)) : ((var_13 ^ (arr_9 [i_0] [i_0] [i_0] [i_1]))))) : ((((arr_17 [i_1] [6] [i_1] [i_0] [12] [i_0]) ? (arr_17 [i_0] [i_0] [i_0] [i_1] [i_1] [i_1]) : var_0)))));
            }
        }
    }
    var_31 = (var_0 != var_10);
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4283
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_10 = (min(var_10, ((max(((var_2 ? (((arr_0 [i_0]) - var_9)) : 1)), (arr_6 [i_0 - 1] [i_1] [i_1] [i_3 + 3]))))));
                                var_11 = (((arr_3 [6]) ? ((var_4 ? (arr_0 [i_4]) : (((max(var_4, 6)))))) : (((((65280 > (arr_3 [i_0 - 1]))) ? ((208 ? 54186791 : (-127 - 1))) : ((((arr_5 [i_0] [i_3 + 1]) ? (-127 - 1) : 15))))))));
                                var_12 = 1986865557;
                            }
                        }
                    }
                    var_13 = (max((arr_6 [i_2] [i_1] [i_0] [8]), (max(((min(var_7, (arr_7 [i_0])))), (min(var_6, var_4))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            {
                var_14 = ((((max((((arr_5 [i_6] [i_6]) ? (arr_11 [i_6]) : (arr_14 [i_6]))), -6))) ? (((arr_5 [i_6] [i_6]) ? (arr_2 [i_6]) : var_5)) : ((((arr_14 [i_5]) != (((var_1 != (arr_6 [i_6] [i_6] [i_5] [i_5])))))))));
                arr_15 [i_6] = 1;
                var_15 = (max((-127 - 1), ((48 ? (-127 - 1) : 9259836625711711290))));
            }
        }
    }
    var_16 = var_8;
    #pragma endscop
}

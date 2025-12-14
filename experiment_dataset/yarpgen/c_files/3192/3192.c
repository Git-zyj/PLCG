/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3192
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        arr_2 [i_0] = (min((arr_1 [i_0] [i_0 + 3]), var_4));
        var_16 ^= ((-((-(arr_0 [i_0 + 2] [i_0 + 4])))));

        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            arr_6 [i_0 - 2] = ((((arr_4 [2] [i_1]) || ((((arr_3 [i_1]) ? (arr_4 [i_1] [i_0]) : var_12))))));

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                var_17 = (arr_1 [i_0] [i_2]);
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 12;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        {
                            var_18 |= (min(((0 / (arr_12 [i_0 - 2] [i_1 - 1]))), 5));
                            var_19 = (arr_12 [i_3 + 1] [i_3 + 1]);
                            var_20 = (arr_0 [i_0] [i_3]);
                        }
                    }
                }
                var_21 = (((((((arr_11 [i_1] [i_1] [i_2] [4] [i_1] [i_0] [i_0 + 4]) ? (arr_13 [i_0] [i_0] [i_1] [i_2] [i_2]) : var_12)) != (arr_7 [i_2] [i_1] [i_0]))) ? (15973 - -var_6) : ((+(((arr_13 [i_0] [i_0] [10] [i_2] [i_2]) ? (arr_14 [1] [i_2] [i_2]) : var_6))))));
            }
            arr_15 [i_1] = (((arr_1 [i_0 + 2] [1]) ? ((var_0 - (arr_4 [i_1] [i_1]))) : (arr_7 [i_1 - 2] [i_1 - 3] [i_1 - 2])));
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 1;i_7 += 1)
                    {
                        {
                            var_22 += (arr_13 [i_0] [i_5] [i_5] [i_6] [i_5]);
                            var_23 = (max(var_23, ((max(var_12, var_9)))));
                        }
                    }
                }
            }
        }
        arr_25 [i_0] [i_0] = (((((var_0 ? (arr_8 [i_0] [i_0] [i_0 + 1]) : var_1))) ? (((((min(var_6, (arr_8 [i_0] [i_0] [i_0])))) || ((min(var_5, (arr_1 [i_0] [i_0]))))))) : (((((arr_24 [i_0 + 4] [4] [i_0] [i_0] [i_0] [i_0 - 2] [i_0]) ? (arr_10 [i_0] [i_0 - 1] [i_0 + 1] [i_0]) : (arr_24 [i_0] [i_0] [i_0] [9] [1] [i_0 - 1] [i_0])))))));
    }
    var_24 = (~var_3);
    var_25 = var_11;
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            {
                var_26 = (((((((arr_28 [2] [18]) - var_15)) + -var_2))) ? var_15 : ((max((arr_27 [0] [0]), (min(var_13, 65535))))));
                var_27 = ((-(min((!var_7), var_6))));
            }
        }
    }
    #pragma endscop
}

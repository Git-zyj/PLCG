/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23023
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    var_19 = (arr_4 [i_0]);
                    var_20 = ((~(!0)));
                }
                for (int i_3 = 3; i_3 < 12;i_3 += 1) /* same iter space */
                {
                    var_21 = (((!((((arr_10 [i_1]) ? (arr_6 [i_1] [0] [i_0 - 1] [i_1]) : (arr_1 [i_3 + 1])))))) ? (((arr_8 [i_0] [i_0]) ? ((((arr_6 [i_0 - 1] [0] [i_1] [i_1]) ? 156 : 47))) : 115)) : (((~(arr_7 [i_0 - 1] [i_0] [i_0 - 1] [i_0])))));
                    var_22 = ((~(min(48, ((45 ? 213 : (arr_0 [i_1])))))));
                }
                for (int i_4 = 3; i_4 < 12;i_4 += 1) /* same iter space */
                {
                    arr_13 [i_1] = (arr_6 [i_0] [i_1] [i_1] [i_1]);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            {
                                arr_18 [i_0 - 1] [6] [i_5] [i_5] [i_1] [6] [i_1] = (max((arr_16 [i_0] [i_0] [i_1] [i_5] [i_6]), (min(194, ((~(arr_16 [8] [i_1] [i_1] [2] [3])))))));
                                var_23 = (max(var_23, 0));
                                var_24 = (max(((min(215, 29381))), (min((arr_6 [i_1] [i_6] [i_4 - 1] [i_1]), (arr_6 [i_1] [0] [i_4 - 1] [i_1])))));
                                arr_19 [i_0] [i_1] [i_0] [12] [i_0] [i_1] = (max((max((~47), (min((arr_1 [i_6]), 7867269225764206854)))), (arr_6 [i_0] [i_0] [i_4 - 2] [i_1])));
                            }
                        }
                    }
                    arr_20 [i_4] [i_1] [i_1] [i_0 - 1] = ((+(min((arr_7 [i_1] [i_4 + 1] [i_1] [i_4]), -59))));
                    arr_21 [i_0] [i_0] [i_1] [i_1] = (arr_16 [i_4] [i_1] [i_1] [i_1] [i_0]);
                }
                arr_22 [i_1] = (max(-3748699602791134917, ((min((arr_5 [i_0 - 1] [i_1]), (arr_5 [i_0 - 1] [i_1]))))));
                var_25 = (min(var_25, -41));
            }
        }
    }
    var_26 ^= ((((max(var_0, var_15))) ? -var_3 : var_3));

    /* vectorizable */
    for (int i_7 = 0; i_7 < 22;i_7 += 1)
    {
        arr_25 [i_7] = ((~(arr_23 [i_7] [i_7])));
        arr_26 [13] [i_7] = (arr_23 [i_7] [i_7]);
        var_27 = ((~(arr_24 [i_7])));
    }
    /* vectorizable */
    for (int i_8 = 2; i_8 < 14;i_8 += 1)
    {
        var_28 = ((!(arr_23 [i_8 - 2] [i_8])));
        var_29 = (arr_23 [i_8] [i_8 - 1]);
    }

    for (int i_9 = 0; i_9 < 12;i_9 += 1)
    {
        var_30 = (max(var_30, ((((arr_17 [i_9] [i_9] [i_9] [i_9] [8] [i_9] [8]) ? (arr_4 [i_9]) : 1)))));
        var_31 -= (max(((max(0, ((!(arr_10 [i_9])))))), (((arr_30 [0] [i_9]) ? 18 : 930177879))));
        arr_33 [i_9] [i_9] = (((arr_5 [i_9] [i_9]) ? (min((arr_0 [i_9]), (arr_0 [i_9]))) : (((max((arr_5 [i_9] [i_9]), (arr_17 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])))))));
        var_32 ^= (max((((arr_30 [i_9] [i_9]) ? (arr_8 [i_9] [i_9]) : (arr_32 [i_9]))), (arr_8 [i_9] [i_9])));
    }
    #pragma endscop
}

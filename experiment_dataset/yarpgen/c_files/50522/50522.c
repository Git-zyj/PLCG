/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50522
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_0] [i_0 - 2] [i_0] [i_2] [4] = (((-((var_11 ? 0 : (arr_3 [i_0] [i_1 + 1]))))));
                            var_15 &= (var_13 | 13235547822355734720);
                            var_16 = (((!14801074940646676296) >= var_9));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 21;i_6 += 1)
                        {
                            {
                                var_17 = (min(var_17, ((((4036117670748709989 ? ((123 ? -101372123 : var_2)) : ((0 % (arr_1 [i_0 - 3])))))))));
                                arr_16 [i_6 + 1] [i_0] [i_4] [i_0] [i_0 - 3] = (((arr_4 [i_0] [i_1] [i_4]) < (((min((((arr_11 [i_0] [i_0] [i_0] [i_0]) && (arr_12 [i_0 - 2] [i_0 - 2] [i_4] [i_0] [i_0]))), var_3))))));
                                arr_17 [i_0] [i_0] [i_1 - 1] [i_4] [i_5] [i_0] [i_0] = 1;
                                var_18 = (max(var_18, (((~((~(arr_2 [i_4]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 19;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            for (int i_9 = 3; i_9 < 18;i_9 += 1)
            {
                {
                    arr_26 [i_7] [4] [4] [i_7] |= (185 * 18446744073709551615);
                    var_19 = (arr_23 [i_7] [i_7] [i_7]);
                }
            }
        }
    }

    for (int i_10 = 0; i_10 < 12;i_10 += 1)
    {
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 12;i_11 += 1)
        {
            for (int i_12 = 1; i_12 < 1;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    {
                        var_20 = max((arr_31 [i_10] [i_13]), ((274877644800 * ((((arr_22 [i_13] [1] [i_11] [1]) / (arr_34 [i_12] [i_12 - 1])))))));
                        var_21 &= ((((arr_21 [i_12 - 1] [i_12 - 1] [i_12 - 1]) ? (arr_21 [i_12 - 1] [i_12 - 1] [i_12 - 1]) : (arr_21 [i_12 - 1] [i_12 - 1] [i_12 - 1]))) != (max((arr_28 [i_13]), (min((arr_14 [i_10]), 4105445196382402558)))));
                        arr_36 [i_12] [i_12] [i_12] [i_10] = ((((max(var_4, var_7)) >= (max(6332839349880506869, (arr_1 [i_10]))))));
                    }
                }
            }
        }
        arr_37 [i_10] = var_6;
    }
    for (int i_14 = 0; i_14 < 11;i_14 += 1)
    {
        var_22 *= 4036117670748709989;
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 11;i_15 += 1)
        {
            for (int i_16 = 1; i_16 < 7;i_16 += 1)
            {
                {
                    var_23 = (max(var_23, 7059055910336874968));
                    var_24 ^= (arr_0 [i_15] [i_15]);
                }
            }
        }
    }
    var_25 = 14341298877327149058;
    #pragma endscop
}

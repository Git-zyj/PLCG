/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194550
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_13;

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        var_19 = (arr_1 [i_0 - 2]);
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 13;i_3 += 1)
                {
                    {
                        var_20 = (min((max((arr_8 [i_3 - 1]), 1)), (((!(arr_8 [i_3 - 4]))))));

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            var_21 = ((-(arr_3 [i_2 - 1])));
                            var_22 |= var_17;
                            var_23 = arr_12 [i_2];
                        }
                        for (int i_5 = 1; i_5 < 1;i_5 += 1) /* same iter space */
                        {
                            var_24 |= (min((max(1, (arr_11 [4] [0] [i_5] [i_5 - 1] [i_2] [i_2 - 2] [i_2]))), ((1 | (arr_11 [i_5] [i_2 - 1] [i_3] [i_2 - 1] [i_2] [i_2 - 1] [i_0])))));
                            var_25 = ((((max((max((arr_2 [i_0 + 1] [12] [i_0]), (arr_13 [i_0 - 1]))), 65529))) > ((+(max((arr_3 [2]), (arr_7 [i_0] [i_1 + 2] [i_2] [i_0] [11])))))));
                            var_26 = (min((((arr_4 [i_5] [i_5 - 1] [i_5 - 1] [i_5 - 1]) / (arr_4 [i_5] [i_5 - 1] [i_5] [i_5 - 1]))), (((!(arr_4 [i_5] [i_5 - 1] [i_5] [i_5 - 1]))))));
                            var_27 = (((max(18446744073709551594, (arr_5 [i_0] [12] [i_2] [12])))));
                            var_28 = ((((((((1 ? (arr_8 [6]) : var_12))) ? (arr_6 [i_0] [i_0] [i_0] [i_0]) : 1))) ? (((arr_4 [i_2 - 2] [i_5 - 1] [i_2 - 2] [i_1 + 1]) ? (arr_11 [i_0] [i_3 - 3] [i_5 - 1] [i_3] [i_3 + 1] [i_3 - 3] [i_3 + 1]) : 11)) : var_11));
                        }
                        for (int i_6 = 1; i_6 < 1;i_6 += 1) /* same iter space */
                        {
                            var_29 = (max((arr_8 [i_2 - 3]), (min((max(14, var_15)), (arr_15 [i_0 - 1] [i_2])))));
                            var_30 = (max(var_30, 18446744073709551595));
                        }
                    }
                }
            }
        }
    }
    for (int i_7 = 1; i_7 < 12;i_7 += 1)
    {
        var_31 = (((var_7 % -1) ? (!-26) : (arr_14 [i_7 + 1] [i_7 - 1] [i_7 - 1])));
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 13;i_9 += 1)
            {
                for (int i_10 = 2; i_10 < 9;i_10 += 1)
                {
                    {
                        var_32 = (max(11002, (1860942641 * 4294967286)));
                        var_33 = 1;
                        var_34 = (arr_21 [i_7] [i_9]);
                        var_35 = (((-4103856178841835783 && (arr_23 [i_7] [i_7 + 1]))));
                        var_36 = (min(var_36, (((max((arr_5 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_10 + 4]), var_4))))));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 13;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 13;i_12 += 1)
            {
                for (int i_13 = 3; i_13 < 12;i_13 += 1)
                {
                    {
                        var_37 = (arr_26 [1] [i_11] [i_13 - 3] [i_11]);
                        var_38 += ((~((var_7 / (arr_22 [i_7] [i_7])))));
                        var_39 = 24421;
                        var_40 = (max((arr_15 [i_7] [i_7]), (arr_19 [i_7 + 1])));
                    }
                }
            }
        }
        var_41 |= (arr_3 [i_7]);
    }
    #pragma endscop
}

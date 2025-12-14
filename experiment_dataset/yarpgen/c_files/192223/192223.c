/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192223
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_20 = (min(var_20, (((((max(var_14, (arr_4 [i_0] [i_1] [i_1])))) ? ((((max(0, var_10))) ? (arr_1 [20]) : (min(107325592, 107325595)))) : (arr_1 [24]))))));
                var_21 = (min(((var_7 ? (max((arr_4 [i_0] [i_1] [i_1]), 13253208928322769615)) : (min(17677671886270282794, var_17)))), (((-(arr_1 [i_0]))))));
                arr_6 [i_0] [i_0] [i_1] = (2147483646 ? var_15 : (arr_5 [i_0] [i_0] [i_1]));

                /* vectorizable */
                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    var_22 = (arr_0 [9] [i_0]);
                    arr_9 [i_0] = ((~(arr_8 [i_0] [i_2] [i_2 + 3])));

                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        var_23 = (((arr_4 [i_3 + 1] [i_2 + 3] [i_2 - 1]) <= (arr_4 [i_3 - 1] [i_2 + 3] [i_2 + 2])));
                        var_24 = ((((~(arr_8 [0] [i_2] [i_3])))) ? (arr_2 [i_2 + 1]) : var_7);
                    }
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        arr_15 [i_0] [i_0] [i_0] [i_0] [i_2] [i_4] = (arr_13 [i_2] [i_1] [i_0]);
                        var_25 = (~var_4);
                    }
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        var_26 = var_16;
                        var_27 = 19740;
                    }
                    arr_18 [22] [6] [i_0] &= var_8;
                }
            }
        }
    }

    for (int i_6 = 1; i_6 < 13;i_6 += 1)
    {
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 14;i_8 += 1)
            {
                for (int i_9 = 2; i_9 < 14;i_9 += 1)
                {
                    {

                        for (int i_10 = 0; i_10 < 16;i_10 += 1)
                        {
                            var_28 = var_10;
                            arr_33 [i_6] [i_7] [i_6] [i_6] [i_9 - 2] [i_10] [i_10] = var_5;
                            var_29 = (max(var_29, ((max(-2147483633, (((((arr_8 [i_6 + 1] [i_8] [i_10]) + 9223372036854775807)) >> (106 - 62))))))));
                            var_30 = (arr_5 [i_6] [2] [i_6]);
                        }
                        for (int i_11 = 0; i_11 < 16;i_11 += 1)
                        {
                            var_31 = ((!((max(var_19, (arr_5 [i_6] [i_6 - 1] [i_6 - 1]))))));
                            arr_37 [i_7] [i_11] |= (arr_36 [i_6] [i_7] [i_8] [i_7] [i_9 + 1] [i_11]);
                        }
                        arr_38 [i_7] &= ((var_16 - (min(107325592, 510818808402860016))));
                        arr_39 [i_6] = 1052665114;
                        arr_40 [i_6] [i_6 + 3] [i_6] [3] [i_8] [i_9] = (((arr_11 [i_6 + 2] [i_6] [i_8 + 2]) ? (max((arr_11 [i_6 + 2] [1] [i_8 - 1]), 1057020926)) : (((arr_11 [i_6 + 3] [10] [i_8 - 1]) / (arr_11 [i_6 + 2] [i_8] [i_8 + 1])))));
                    }
                }
            }
        }
        var_32 &= (max((arr_10 [i_6] [i_6] [17] [i_6]), (arr_28 [1] [i_6 - 1] [i_6 + 1] [i_6 - 1])));
    }
    #pragma endscop
}

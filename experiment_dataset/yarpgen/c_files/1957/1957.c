/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1957
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        var_11 = var_10;
                        var_12 = (min(1, 49051));
                        var_13 = (arr_11 [i_1]);
                    }
                    for (int i_4 = 2; i_4 < 17;i_4 += 1)
                    {
                        var_14 = ((max(var_7, 49078)));
                        arr_16 [i_4] [i_2] = (arr_3 [5] [i_2]);
                        var_15 = (max(var_15, (((((~(min(12, 1)))) != (arr_7 [i_0] [i_0]))))));
                        var_16 = (max(var_16, var_1));
                        var_17 *= -var_3;
                    }
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        var_18 = ((((-((min(var_6, 88)))))) ? (((~65509) ? (arr_10 [i_0] [i_0] [i_0] [i_0]) : 100)) : (min(((var_10 >> (2663559321 - 2663559301))), ((~(arr_5 [i_0] [i_1]))))));
                        arr_21 [i_0] [12] [1] [i_5] = 1;
                        var_19 = ((1 + (((((var_8 ? (arr_17 [i_0] [i_1] [i_1] [i_5]) : 2932754285)) <= (((var_4 ? var_3 : var_6))))))));
                    }
                    arr_22 [i_2] [i_1] = ((-(max(((var_0 ? 3758837877474865212 : var_6)), ((((arr_3 [i_1] [i_2]) << (var_4 - 2475519029078521111))))))));
                    arr_23 [i_0] [i_1] [i_0] = var_0;
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 18;i_7 += 1)
                        {
                            {
                                var_20 = (max(var_20, (((((((46462 ? var_10 : (arr_2 [i_6]))) ? var_8 : (arr_7 [i_1] [i_1]))))))));
                                var_21 = ((!(((arr_17 [i_0] [i_0] [i_2] [i_6]) >= (arr_11 [i_7 + 1])))));
                            }
                        }
                    }
                    var_22 = 1;
                }
            }
        }
    }
    var_23 = var_7;
    /* LoopNest 2 */
    for (int i_8 = 1; i_8 < 22;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_10 = 0; i_10 < 0;i_10 += 1)
                {
                    for (int i_11 = 2; i_11 < 24;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 25;i_12 += 1)
                        {
                            {
                                arr_41 [i_8 + 3] [i_11] [i_8] [i_8] [i_9] [i_8 + 3] = (((((((min((arr_40 [i_8] [i_9] [i_9] [i_11 - 1] [i_10] [i_9] [i_11 - 2]), var_8))) * (arr_30 [i_9] [i_9])))) == (arr_34 [i_8 + 1])));
                                arr_42 [i_11] [i_9] [8] [i_9] [i_11] [i_9] [i_9] &= ((((max(((-(arr_40 [i_8] [i_8] [i_9] [i_10] [i_11] [i_12] [i_12]))), var_0))) & ((var_0 ? ((((arr_40 [i_8] [i_8] [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8] [i_8 - 1]) ^ var_6))) : (var_4 - -1319088116004443262)))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_13 = 0; i_13 < 25;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 25;i_14 += 1)
                    {
                        for (int i_15 = 4; i_15 < 21;i_15 += 1)
                        {
                            {
                                var_24 = (min((((((2663559322 ? (arr_46 [i_8] [i_8]) : (arr_37 [i_8 - 1] [i_9] [i_13] [i_14] [i_15])))) ? 2333281426 : ((min(var_7, (arr_35 [i_8] [i_13] [i_8])))))), ((((((var_6 ? 83 : -5613390267063579801))) ? (min((arr_38 [i_8]), var_1)) : (arr_40 [i_8] [i_8] [i_13] [i_13] [i_15] [i_14] [i_13]))))));
                                var_25 &= (min(var_6, 3198083340));
                                var_26 -= var_3;
                                var_27 = (min(var_27, var_4));
                                var_28 = (var_1 * var_9);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

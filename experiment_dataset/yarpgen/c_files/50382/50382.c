/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50382
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_1] [i_2] = min(var_3, (arr_5 [i_0] [i_1] [7] [1]));
                    var_19 = var_8;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_20 += var_2;
                                arr_13 [i_2] [i_2] [i_2] [i_3] [1] [i_2] = ((((-(arr_11 [i_1] [i_0] [i_0] [i_4] [i_0])))) + 882381687);
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        var_21 ^= (max((((!(arr_3 [i_0])))), (((arr_4 [i_1] [i_5]) ? (arr_4 [i_1] [i_2]) : (arr_3 [i_2])))));
                        var_22 = (min((arr_16 [i_0] [i_5] [i_0]), (((var_10 * (1 * 511))))));

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            var_23 = ((arr_19 [i_6] [i_0] [i_6] [i_5] [i_1]) ? var_12 : (arr_11 [i_6] [i_6] [i_6] [i_6] [i_6]));
                            var_24 = (arr_1 [i_6] [i_1]);
                        }
                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            var_25 ^= (arr_15 [i_2] [i_2]);
                            var_26 = ((((min(var_6, (((arr_18 [i_0] [i_0] [i_1] [i_0] [4] [9] [i_7]) ^ var_17))))) ? (var_13 | var_4) : (max((max((arr_6 [1] [1] [i_2] [i_5]), (arr_19 [i_0] [i_2] [i_5] [i_5] [i_5]))), ((var_17 ? var_17 : (arr_12 [3] [i_1] [3] [i_5] [10])))))));
                            arr_22 [i_1] [i_1] [7] [i_5] [i_1] [i_1] [i_1] = ((!((max((arr_21 [i_5] [i_1] [i_2] [1] [i_7]), (arr_3 [i_0]))))));
                            var_27 = (~(((!(((-(arr_15 [i_0] [i_5]))))))));
                        }
                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            arr_25 [i_5] = (arr_10 [2] [i_5] [i_2]);
                            var_28 = (min(var_28, var_2));
                            var_29 = (((((min((arr_4 [i_2] [i_8]), -92)))) ? var_11 : (min((arr_16 [i_0] [i_5] [i_5]), (arr_6 [i_1] [5] [i_5] [i_8])))));
                        }
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 13;i_9 += 1) /* same iter space */
                    {
                        var_30 ^= (((arr_19 [i_0] [i_0] [i_1] [i_2] [i_0]) ^ ((var_3 ? (arr_5 [i_9] [i_2] [i_1] [i_0]) : var_8))));
                        arr_28 [i_0] [i_0] = ((!(arr_20 [i_1] [i_1])));
                    }
                    for (int i_10 = 0; i_10 < 13;i_10 += 1) /* same iter space */
                    {
                        var_31 = var_4;
                        var_32 = var_14;
                        arr_32 [i_0] [9] [11] [i_0] = var_14;
                    }
                }
            }
        }
    }
    var_33 = (!66846720);
    var_34 = var_16;
    var_35 += var_7;
    var_36 = ((var_5 ? ((max(1040187392, var_3))) : (~1)));
    #pragma endscop
}

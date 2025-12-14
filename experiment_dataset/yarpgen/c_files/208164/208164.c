/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208164
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_20 = (max(var_20, (((var_9 ? ((((min(var_9, (arr_11 [i_0] [i_1] [i_2] [i_2] [i_2] [i_3] [i_4])))) ? (((arr_5 [i_4]) ? (arr_6 [i_0] [i_1]) : var_10)) : ((((arr_8 [i_2] [i_1] [i_2]) ? var_0 : (arr_5 [i_3])))))) : ((((!(arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]))))))))));
                                var_21 = (min(var_21, var_19));
                                arr_14 [i_0] = (min((((~(arr_3 [i_0] [i_0])))), ((((((var_17 & (arr_6 [i_0] [i_1])))) ? (arr_8 [i_0] [i_4] [i_0]) : (arr_4 [i_0]))))));
                                arr_15 [i_0] [i_1] = (((((~(arr_8 [i_0] [i_1] [i_0])))) ? (min((arr_5 [i_0]), ((((arr_11 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) ? (arr_3 [i_0] [i_3]) : (arr_2 [i_3] [i_0])))))) : ((max((arr_10 [i_0] [i_1] [i_0] [i_3] [i_0]), ((~(arr_8 [i_1] [i_2] [i_0]))))))));
                            }
                        }
                    }
                }
                var_22 = (max(var_22, ((min((((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? var_6 : var_8)), ((min(122, 45276))))))));
                var_23 = (min(var_23, var_12));
            }
        }
    }

    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        var_24 = (max(var_24, (arr_17 [i_5])));
        var_25 -= ((3359945544899665951 ? -25465 : 1));
        var_26 = (arr_18 [i_5]);
        var_27 = (max(var_27, (((~(~1))))));
        var_28 = ((((((arr_17 [i_5]) && (arr_17 [i_5])))) >> (((arr_17 [i_5]) + 23378))));
    }
    var_29 = 3359945544899665951;
    var_30 = var_1;

    /* vectorizable */
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        arr_21 [i_6] = (((arr_20 [i_6] [i_6]) <= var_2));
        var_31 = (((((var_18 ? (arr_19 [i_6]) : (arr_19 [i_6])))) && (((-(arr_19 [i_6]))))));
        var_32 = ((((((arr_20 [i_6] [i_6]) ? var_3 : var_15))) ? (((arr_19 [i_6]) / (arr_20 [i_6] [i_6]))) : ((~(arr_19 [i_6])))));
        arr_22 [i_6] = (((arr_20 [i_6] [i_6]) ? var_3 : (arr_19 [i_6])));
        arr_23 [i_6] = ((~((var_19 ? (arr_20 [i_6] [i_6]) : var_7))));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 18;i_7 += 1)
    {
        var_33 = ((var_14 ? (((arr_16 [i_7]) ? (arr_11 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]) : (arr_20 [i_7] [i_7]))) : (((arr_4 [i_7]) / (arr_1 [i_7])))));
        /* LoopNest 3 */
        for (int i_8 = 1; i_8 < 16;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 18;i_9 += 1)
            {
                for (int i_10 = 2; i_10 < 15;i_10 += 1)
                {
                    {
                        var_34 += ((((((arr_16 [i_10]) ? var_1 : (arr_2 [i_8] [i_9])))) ? (((arr_32 [i_9] [i_8]) ? (arr_2 [i_10] [i_8 + 1]) : (arr_31 [i_8 + 2] [i_8 - 1] [4]))) : ((var_12 ? (arr_12 [4] [i_10 - 1]) : var_18))));

                        for (int i_11 = 0; i_11 < 18;i_11 += 1)
                        {
                            arr_39 [i_7] = ((arr_33 [i_7] [i_8 - 1] [i_7] [i_10] [i_7] [i_11]) ? 11783 : (arr_17 [i_8]));
                            var_35 = (((arr_34 [i_8 + 1] [i_8] [i_8 + 1] [i_8] [i_8 + 1]) ? (((arr_5 [i_8]) ? (arr_34 [i_7] [i_8] [i_7] [i_10 + 3] [i_7]) : (arr_4 [i_11]))) : (arr_30 [i_7])));
                            arr_40 [i_7] [i_9] [i_7] = ((11761 ? 2047 : 25464));
                            var_36 = ((+(((arr_31 [i_7] [i_8 + 2] [i_7]) >> (((arr_20 [i_9] [i_9]) - 37832))))));
                        }
                        var_37 = (1 != (arr_7 [i_8 - 1] [i_8 - 1] [i_10 + 1]));
                    }
                }
            }
        }
    }
    #pragma endscop
}

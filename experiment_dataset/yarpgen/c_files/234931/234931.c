/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234931
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (var_15 < var_1);
    var_18 = ((((((var_15 ? var_7 : var_11)))) ? (((((var_16 ? var_12 : -24))) ? var_3 : -10)) : var_0));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_19 = (arr_0 [i_0]);
        var_20 = (max(var_20, var_4));
        var_21 = (arr_1 [15] [i_0]);
        var_22 = ((arr_2 [i_0]) ? (min((arr_2 [i_0]), -1)) : (arr_2 [i_0]));
        arr_3 [i_0] = ((var_2 && var_6) ? ((min(64, 1))) : (min(((~(arr_0 [i_0]))), ((6982 ? 1 : -59)))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_23 = (((arr_5 [i_1] [i_1]) ? ((48485 >> (13782181642057757829 - 13782181642057757800))) : (((arr_5 [i_1] [i_1]) ? (arr_5 [10] [i_1]) : (arr_5 [i_1] [i_1])))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        var_24 = (min(var_24, (((((!((((arr_10 [i_1]) * -59))))) ? (~var_7) : (arr_17 [i_1] [i_2] [1] [0] [i_4]))))));
                        var_25 ^= (~1);
                    }
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        var_26 = (max(var_26, 0));
                        arr_22 [i_1] [10] [i_2] = ((((((arr_4 [i_5 - 1]) | (arr_12 [i_5 - 1] [i_5 - 1] [i_5] [i_5 - 1])))) ? (arr_9 [i_2] [i_2]) : ((~(arr_16 [i_1] [i_5 - 1] [i_5 - 1] [10] [i_1] [i_5])))));
                        var_27 = (max(var_27, ((((((-63 ? (arr_1 [i_2] [i_5 - 1]) : (~var_6)))) ? ((max((((var_2 ? (arr_2 [i_3]) : (arr_1 [20] [i_3])))), (arr_21 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1])))) : (min((4664562431651793780 & 26), (arr_21 [i_1] [i_1] [i_1] [i_5 - 1]))))))));
                        var_28 ^= ((((~((1 ? (arr_6 [i_5] [5]) : (arr_16 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]))))) | ((-((var_11 ? var_0 : 9223372036854775807))))));
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 9;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            {
                                var_29 = ((5036844500632160952 ? ((1262549779 ? (arr_21 [1] [i_6 + 1] [1] [i_6 - 3]) : -65)) : 57));
                                var_30 = ((~((((max(58, 1))) | (var_2 && var_14)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 9;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            {
                                var_31 = (max((min((max((arr_17 [i_1] [1] [i_3] [1] [i_9]), (arr_12 [i_1] [9] [i_3] [8]))), var_5)), 0));
                                arr_34 [i_1] [i_2] [i_3] [6] [i_2] [i_8] = (max((((((arr_11 [i_2]) || 4)) ? (((var_0 ? 75 : var_2))) : 5036844500632160935)), (((arr_25 [i_8] [i_8 - 2] [i_8] [i_8] [i_8 + 1]) ? var_3 : (arr_23 [i_1] [i_8 - 2] [i_8] [3] [i_8 + 1] [i_8])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 11;i_11 += 1)
                        {
                            {
                                var_32 = ((((min((min((arr_15 [i_1] [i_2] [i_3] [i_3] [i_10] [i_11]), var_1)), 16656189648133986869))) ? (min((max(-1, (arr_18 [i_1] [i_2] [i_3]))), ((4172811008522893827 ? (arr_30 [i_11]) : var_10)))) : (((arr_33 [1] [2] [1] [i_10] [4] [i_10]) ? (var_11 * var_12) : ((0 ? 53046 : (arr_0 [i_1])))))));
                                var_33 -= 0;
                            }
                        }
                    }
                }
            }
        }
        var_34 -= (max(((var_4 ? ((var_4 ? 0 : 592629643)) : (arr_1 [i_1] [i_1]))), ((((var_6 ? (arr_24 [2] [4] [i_1] [i_1] [i_1]) : (arr_31 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))))));
        var_35 ^= var_10;
        arr_40 [1] = ((arr_21 [i_1] [0] [i_1] [i_1]) || ((!(arr_8 [i_1] [i_1]))));
    }
    var_36 = (1 > -25655);
    #pragma endscop
}

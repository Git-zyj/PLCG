/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189911
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += (!var_8);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_10 [9] [i_2] [19] = ((max(((min((arr_2 [0] [12] [1]), var_5))), 65524)));
                                var_13 += (arr_8 [1] [6] [16] [18] [1] [i_4]);
                            }
                        }
                    }
                    var_14 *= (((~((((arr_6 [7] [16]) <= (arr_9 [10] [1] [0] [20] [16] [17] [1])))))));
                }
                /* vectorizable */
                for (int i_5 = 1; i_5 < 17;i_5 += 1)
                {
                    var_15 |= ((~((-1696691415 ? -108 : -5033557992898712293))));
                    arr_13 [i_5] = (arr_2 [14] [i_5 + 3] [16]);
                }

                for (int i_6 = 1; i_6 < 1;i_6 += 1)
                {
                    arr_18 [6] [i_6] [i_6] [18] = (((127 ? var_9 : ((((arr_11 [14]) / 2514988378))))));
                    var_16 *= (arr_2 [i_6 - 1] [i_6 - 1] [i_6 - 1]);
                    var_17 &= (min((arr_2 [19] [2] [7]), var_8));
                    var_18 += ((-7029129207557695334 ? -1632754797823443561 : 1149803071));
                    var_19 = ((1 ? (((arr_5 [9] [7] [i_6] [4]) ? 38 : 2305842871774740480)) : 93));
                }
                for (int i_7 = 3; i_7 < 20;i_7 += 1)
                {
                    var_20 = ((1 ? -55 : 105));
                    arr_21 [2] [1] [12] [2] = ((((min(var_4, (arr_0 [15])))) ? ((var_9 ? var_5 : (!var_1))) : (((!1) >> (arr_8 [6] [16] [14] [4] [8] [i_1])))));
                }
                for (int i_8 = 3; i_8 < 20;i_8 += 1)
                {

                    /* vectorizable */
                    for (int i_9 = 3; i_9 < 18;i_9 += 1)
                    {
                        arr_26 [1] [18] [14] [2] [4] [19] &= ((~(arr_25 [16] [6] [4] [18])));
                        arr_27 [3] [18] = (~-1082684627);
                        arr_28 [16] [20] [9] [6] = ((0 ? 0 : 1));
                    }
                    for (int i_10 = 0; i_10 < 21;i_10 += 1)
                    {
                        arr_31 [2] [13] [11] = ((((((min(-6, (arr_25 [1] [10] [19] [12])))) ? (arr_29 [9] [12] [9]) : (((var_8 ? 15 : var_6))))) > -25092));
                        var_21 += (arr_3 [5]);
                        var_22 = (arr_16 [i_10] [18] [12] [1]);
                        var_23 = (((~(arr_19 [i_8 - 1] [i_8 - 2] [9]))));
                    }
                    var_24 = ((((((var_0 >> (18446744073709551614 - 18446744073709551586)))) & (arr_2 [11] [1] [1]))));
                }
            }
        }
    }
    #pragma endscop
}

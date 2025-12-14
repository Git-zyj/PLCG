/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46117
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            arr_7 [i_0] [i_1] = (min(((max((1737 != 87), (arr_3 [i_0])))), 17708224199848853298));
            var_15 = var_10;
        }
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    arr_12 [i_0] [i_2] [2] [i_0] &= (((((-(arr_4 [i_0])))) ? (min(((738519873860698318 ? 17708224199848853298 : 63798)), (arr_2 [6] [i_2]))) : ((((max(var_6, var_0)) * ((min((arr_9 [i_0] [i_0] [i_0]), -1))))))));

                    for (int i_4 = 2; i_4 < 11;i_4 += 1)
                    {
                        var_16 = (((arr_4 [i_0]) ? ((min((arr_4 [i_0]), (arr_4 [i_0])))) : (((arr_4 [i_0]) ? 63799 : 1))));
                        var_17 = (min((((~(arr_1 [i_0] [i_2])))), ((((var_3 ? (arr_6 [i_3] [i_2]) : var_2))))));
                    }
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        arr_19 [i_5] [i_5] [i_3] [i_2] [i_0] [i_0] = ((((((arr_8 [i_3]) ? (arr_8 [i_0]) : (arr_8 [i_0])))) ? (!var_9) : (max(31264, 9223372036854775807))));
                        arr_20 [i_0] [i_2] [i_3] [i_5] |= min((arr_14 [i_0] [i_0] [i_0]), (min((arr_15 [i_0] [3] [i_2] [i_2] [3] [i_5]), (arr_15 [i_2] [i_3] [1] [i_0] [1] [1]))));
                        arr_21 [i_3] [i_2] [i_3] [i_5] = (min((((arr_1 [i_0] [i_3]) ? var_2 : 24717)), (arr_9 [i_0] [i_0] [i_3])));
                        arr_22 [i_0] [i_2] [i_3] [i_5] = ((~((var_8 ? (((arr_1 [i_0] [i_0]) ? var_1 : (arr_13 [i_5] [i_5] [i_5] [i_5]))) : (arr_8 [i_3])))));

                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            arr_25 [i_6] [i_5] [i_3] [10] [i_2] [0] [i_0] = ((var_14 + (((arr_9 [i_2] [i_3] [4]) ? (min(var_8, 17708224199848853298)) : ((((arr_5 [i_0] [i_0] [i_0]) ? (arr_18 [i_6] [7] [i_0] [7]) : var_3)))))));
                            var_18 = (min(var_18, (((~(((17708224199848853298 + 9223372036854775807) << (((arr_1 [i_5] [i_6]) - 34482)))))))));
                            var_19 = (((arr_11 [i_3] [i_5] [i_6]) ? ((min((arr_11 [i_3] [i_2] [1]), (arr_11 [i_3] [i_3] [i_0])))) : 0));
                        }
                    }
                }
            }
        }
        var_20 *= ((-(var_12 | 65535)));
    }
    var_21 = (min(var_21, var_7));
    var_22 = 34272;
    #pragma endscop
}

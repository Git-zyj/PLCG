/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244713
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (var_5 - (((max(var_9, var_16)))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = ((((((!(arr_1 [i_0] [i_0]))) && (arr_0 [i_0] [3]))) ? (max(65510, -1)) : ((~(min(2147483647, 0))))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 4; i_3 < 12;i_3 += 1)
                    {
                        var_20 -= ((arr_0 [i_1 - 1] [i_2]) * ((((arr_6 [i_0] [i_1] [i_1]) < (arr_9 [i_0] [i_0])))));
                        arr_12 [i_0] [i_2] [i_2] [i_2] [i_0] = arr_10 [i_2] [i_1] [i_2] [i_3];
                        arr_13 [i_0] [i_0] [5] [5] = (~(((arr_1 [i_1] [i_2]) ? (arr_3 [i_2]) : (arr_5 [i_0] [i_0] [i_0]))));
                        arr_14 [12] [10] [i_2] [2] [i_0] = ((arr_7 [i_0]) | (arr_11 [i_3 + 1] [7] [6] [i_0]));
                        var_21 = (max(var_21, (((~(arr_11 [i_0] [i_1 - 1] [i_2] [i_3]))))));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            {
                                arr_19 [i_5] [i_5] [i_2] [i_5] [i_5] [i_4] [i_5] = arr_18 [i_4];
                                arr_20 [i_0] [i_1 - 2] [i_2] [i_4] [i_0] = arr_18 [i_0];
                                var_22 ^= (min(((((min((arr_5 [i_0] [i_1] [i_0]), (arr_4 [i_0] [i_0])))) ? (((~(arr_8 [i_0] [1] [i_0])))) : ((~(arr_4 [i_0] [i_0]))))), ((((-(arr_18 [i_2]))) - ((min(2147483647, 1999432136)))))));
                            }
                        }
                    }
                    arr_21 [i_0] = (min((((arr_15 [i_2] [i_0] [1] [i_1 + 1] [i_0]) | (((arr_7 [i_0]) ? (arr_1 [i_1] [i_1]) : (arr_4 [i_0] [i_0]))))), (((-(arr_3 [i_2]))))));

                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        arr_26 [9] [i_1] [11] [i_6] [5] = ((~(((!(arr_4 [i_0] [i_0]))))));
                        var_23 = (max(var_23, (((~(max(18446744073709551609, ((-(arr_7 [i_0]))))))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}

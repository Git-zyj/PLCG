/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226590
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_20 = (max(var_20, (arr_1 [i_0 + 2])));
        var_21 &= (4870064786268390761 ^ (arr_0 [i_0 + 1]));
    }
    for (int i_1 = 2; i_1 < 14;i_1 += 1)
    {
        arr_5 [i_1] = ((((~(arr_4 [i_1 - 1]))) & ((((arr_4 [i_1 + 1]) == 13576679287441160833)))));

        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            arr_10 [i_2] = (((((!4870064786268390782) ? ((((!(arr_2 [i_1]))))) : (arr_3 [i_2]))) - (((-714922304 | (arr_8 [i_1]))))));
            arr_11 [i_1] [i_1] = (((17703 / (((arr_9 [i_1] [i_2]) >> (1557708463 - 1557708459))))));
            arr_12 [i_1] [i_1] [i_1] = (((arr_6 [i_1] [i_2]) || var_15));
            arr_13 [i_2] = min(485393576, (arr_3 [i_1]));
        }
        var_22 = (min(((-(arr_8 [i_1 - 2]))), (((!(arr_8 [i_1 - 1]))))));
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    {
                        arr_24 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((-(min((arr_6 [i_4] [i_5]), (arr_15 [i_3])))));
                        arr_25 [i_3] [i_4] = (((arr_7 [i_5] [i_3 + 2]) + (-127 - 1)));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 1; i_6 < 16;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            {
                arr_30 [i_6] = (((((-1319026444 + (arr_27 [i_6 - 1])))) ? ((min((arr_26 [i_6]), (arr_27 [i_6 - 1])))) : (arr_26 [i_6])));

                /* vectorizable */
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    arr_33 [i_6] [i_6] [i_8] [i_8] = 714922304;
                    var_23 = (i_6 % 2 == zero) ? (((((((((arr_31 [i_8] [i_6] [i_6]) + 2147483647)) << (((((arr_27 [i_8]) + 804980238)) - 2))))) ? (arr_31 [i_6 + 1] [i_6] [i_8]) : (~186)))) : (((((((((((arr_31 [i_8] [i_6] [i_6]) - 2147483647)) + 2147483647)) << (((((arr_27 [i_8]) + 804980238)) - 2))))) ? (arr_31 [i_6 + 1] [i_6] [i_8]) : (~186))));
                    arr_34 [i_8] [i_6] [i_6] [i_6] = (180 <= 2227330876208266243);
                }
                arr_35 [0] [i_7] [i_7] &= (~(arr_28 [1] [1]));
            }
        }
    }
    #pragma endscop
}

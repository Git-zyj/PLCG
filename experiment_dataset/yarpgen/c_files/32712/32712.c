/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32712
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, var_12));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_11 [2] [i_3] [i_3] [i_0] = (((arr_7 [i_1 - 2] [5] [i_2 + 2] [3]) ? (arr_3 [i_3]) : ((((~(arr_3 [i_1])))))));

                            for (int i_4 = 0; i_4 < 12;i_4 += 1)
                            {
                                arr_15 [8] [i_1] [i_2] [i_3] [i_3] = (((arr_9 [i_0] [6] [1] [i_3] [i_3] [i_4]) ? (((((((arr_7 [i_1] [i_2] [4] [i_4]) ? (arr_10 [i_3]) : (arr_6 [i_1] [i_3] [1])))) ? ((max((arr_12 [i_0] [i_3] [i_0] [i_3] [i_4] [2] [i_4]), (arr_10 [1])))) : (arr_2 [i_2 + 1])))) : ((((((arr_1 [i_4]) ? (arr_7 [2] [2] [i_3] [i_4]) : (arr_2 [i_0])))) ? (((-(arr_3 [i_4])))) : (min((arr_2 [i_0]), (arr_13 [i_0] [i_3] [i_2 + 1] [i_3] [0])))))));
                                arr_16 [2] [i_3] [i_3] [i_0] = ((((max((arr_8 [i_4] [1] [i_3] [i_2] [10] [i_0]), (arr_10 [1])))) ? (((((-(arr_1 [7])))))) : ((((~(arr_5 [i_0] [i_2] [1]))) + (arr_14 [0] [i_3] [0])))));
                            }
                            for (int i_5 = 2; i_5 < 9;i_5 += 1)
                            {
                                arr_19 [i_3] = ((((arr_2 [3]) | (max((arr_0 [i_1] [4]), (arr_9 [i_0] [i_1] [i_1 - 2] [i_3] [i_3] [i_5]))))));
                                arr_20 [0] [i_0] [i_2 - 1] [2] [2] &= ((+(((arr_14 [i_0] [i_0] [i_1 + 1]) ? ((~(arr_18 [i_0] [0] [0] [10]))) : ((((!(arr_10 [i_2])))))))));
                                arr_21 [5] [i_1 - 1] [i_2] [i_2] [i_3] [i_5] [i_3] = ((((arr_2 [i_0]) - (arr_0 [i_0] [i_0]))));
                            }
                            var_16 = ((-(((min((arr_14 [6] [i_3] [4]), (arr_7 [5] [i_1] [7] [i_3])))))));
                            arr_22 [0] [i_1 + 1] [i_0] [i_3] &= ((((((((arr_8 [8] [5] [5] [i_2] [i_3] [i_3]) ? (arr_8 [11] [i_1] [i_1 - 2] [i_1 - 2] [i_3] [9]) : (arr_3 [i_3]))) / (arr_0 [i_2 + 1] [2])))) ? ((((((arr_3 [i_0]) ? (arr_3 [i_0]) : (arr_13 [6] [i_0] [i_2] [i_2] [i_3]))) != (((-(arr_7 [i_0] [i_1 - 2] [i_2] [i_3]))))))) : ((+(((arr_7 [i_0] [i_1] [i_2] [i_3]) ? (arr_9 [i_0] [8] [i_1] [i_0] [i_3] [2]) : (arr_14 [i_0] [i_0] [i_2])))))));
                        }
                    }
                }
                arr_23 [i_0] [i_0] [i_1 + 1] = (arr_18 [i_0] [i_1 - 2] [i_1 - 1] [0]);
                arr_24 [1] = (~-1687611071);
            }
        }
    }
    #pragma endscop
}

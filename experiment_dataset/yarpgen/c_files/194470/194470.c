/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194470
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= var_7;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_21 = -339188584;
                    var_22 = ((3078604619477717022 ? 65535 : 3078604619477717022));
                    var_23 |= (((arr_6 [i_0] [i_0] [4]) && (arr_4 [i_1 + 1] [10] [i_1 + 2])));
                    arr_9 [i_1] [i_1 + 1] [10] = ((!(arr_4 [i_1 + 1] [i_1] [i_1 + 3])));
                    var_24 = (arr_7 [i_1 + 2] [i_1 - 1] [i_1] [i_1 - 1]);
                }
            }
        }
        var_25 += ((-(arr_5 [4])));
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        var_26 = (((var_19 != (arr_7 [i_3] [i_3] [i_3] [i_3]))) ? ((-(arr_5 [i_3]))) : (((var_11 < (min((arr_0 [i_3] [i_3]), (arr_7 [i_3] [i_3] [i_3] [i_3])))))));
        var_27 = (-((1027946901403978214 >> (4049003315324933916 - 4049003315324933904))));
        /* LoopNest 3 */
        for (int i_4 = 3; i_4 < 8;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    {
                        var_28 = (((2411775600 || var_18) ? var_1 : ((min((arr_12 [i_6]), (arr_12 [i_4 - 3]))))));
                        var_29 = (max((((arr_10 [i_4 - 2] [i_4 - 1]) ? (arr_10 [i_4 + 1] [i_4 - 2]) : var_10)), (arr_14 [i_3])));
                        arr_20 [i_6] = (((arr_4 [i_3] [i_6] [8]) ? ((var_4 ? (((43944 != (arr_0 [8] [i_5])))) : ((((arr_10 [i_3] [i_4]) != (arr_8 [i_3] [i_3] [i_6] [i_6])))))) : (arr_4 [i_3] [i_6] [i_5])));
                        var_30 = min(((-(arr_7 [i_4 + 1] [i_4 + 2] [i_6] [i_4 - 3]))), ((((-57 == (arr_8 [i_6] [i_6] [i_6] [i_3]))) ? (64 < var_6) : ((var_0 ? var_6 : (arr_5 [i_6]))))));
                    }
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        var_31 = ((!(255 - 202)));
        arr_23 [i_7] = (((arr_22 [i_7]) ? ((~(arr_22 [i_7]))) : ((((arr_22 [i_7]) || -var_4)))));
        var_32 = (((((25 ? 1 : 11))) ? (((arr_22 [i_7]) & var_10)) : var_16));
    }
    #pragma endscop
}

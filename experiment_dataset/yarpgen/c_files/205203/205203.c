/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205203
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    arr_7 [i_2] [8] [i_1] [i_0] = (min((max(var_3, (arr_3 [i_0]))), (((min(0, 2039277753))))));
                    arr_8 [i_0] [i_1] [i_2] = ((-1 ? (min((arr_6 [i_0] [i_1] [i_2]), var_8)) : (((((((min(1, 1)))) != var_7))))));
                    arr_9 [i_1] = ((((min((arr_2 [i_2 - 1] [i_1]), -5766412838472635757))) - (((var_0 ^ var_2) ? ((max(65535, (arr_4 [i_0] [i_1] [i_2])))) : ((~(arr_2 [i_0] [i_2])))))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        arr_13 [10] [10] [10] = (arr_11 [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_2]);
                        arr_14 [i_0] [i_0] [10] = ((25670 ? ((var_3 ? (arr_1 [i_3]) : (arr_4 [1] [i_2] [1]))) : (((7269769292217322660 ? var_0 : 1)))));
                        arr_15 [0] [i_1] [1] = ((((((arr_4 [i_0] [i_2] [i_2]) ? var_7 : (arr_12 [i_0] [1] [i_1] [3] [i_2] [i_3])))) ? (arr_3 [i_0]) : (((arr_11 [i_0] [i_1] [i_0] [i_3]) ? (arr_12 [i_0] [6] [i_2] [i_3] [i_3] [i_0]) : var_1))));
                        arr_16 [i_3] &= ((((5766412838472635738 ? var_1 : var_7)) + (arr_2 [i_1] [i_0])));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            {
                arr_21 [i_4] [i_5] = (max((((((var_0 ? 1 : (arr_17 [10] [i_5])))) ? ((min(var_11, 1))) : -100)), -9195));
                arr_22 [i_4] [i_5] = (max((max(9195, ((127 ? var_0 : var_1)))), (((~((var_10 ? var_2 : -9209)))))));

                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    arr_26 [i_5] = (max((min((~9194), (arr_19 [i_6] [8] [i_4]))), ((var_5 >> (((arr_23 [i_4] [i_5] [i_5] [i_6]) - 19064))))));
                    arr_27 [1] [i_4] [1] = (min(((((var_3 ^ (arr_19 [i_4] [i_5] [i_6]))))), (1 + 55177)));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 0;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                arr_32 [i_4] [i_5] [i_6] [i_5] [i_8] [i_8] [14] = (max((((arr_30 [i_8] [i_8] [1] [i_7 + 1] [i_5] [i_5] [i_4]) ? -var_4 : var_4)), (arr_28 [i_5] [i_4])));
                                arr_33 [i_4] [i_8] = ((((((arr_28 [i_7 + 1] [i_7 + 1]) ? var_9 : (arr_28 [i_7 + 1] [i_7 + 1])))) ? (arr_28 [i_7 + 1] [i_7 + 1]) : ((-9195 - (-9223372036854775807 - 1)))));
                                arr_34 [i_8] [i_4] [i_6] [i_4] [i_4] = (~var_2);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

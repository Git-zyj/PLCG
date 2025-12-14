/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30096
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [0] [i_0] [i_2] [19] = (((-(arr_8 [i_0]))));
                            arr_14 [1] [i_3] [i_3] [i_2] [i_3] |= (min((((((max((arr_5 [18] [i_0] [1] [i_0]), (arr_7 [8] [22])))) || (arr_6 [i_0] [i_1 + 1])))), ((~(arr_5 [i_3] [i_3] [i_3] [1])))));
                        }
                    }
                }
                arr_15 [i_1] [i_0] = (((((arr_2 [i_1 - 3] [1] [1]) >= (arr_2 [i_1 - 1] [i_1] [i_1 - 1]))) ? (arr_10 [i_1] [18] [i_0] [i_0]) : (arr_2 [i_0] [22] [9])));
                var_19 = ((((((arr_0 [i_1 - 3] [i_1 + 1]) >> (((arr_4 [i_1 - 1] [i_1 - 1] [i_1 + 1]) - 6189171548331798225))))) ? ((((arr_5 [i_1] [i_0] [i_0] [i_0]) >= 8807988813378854576))) : var_13));
                arr_16 [i_0] [i_0] = (((((1 ? 5486169573178241368 : 9))) || ((((var_1 > var_14) ? ((var_13 ? var_7 : (arr_5 [i_0] [i_0] [16] [18]))) : ((((arr_2 [i_0] [i_0] [23]) <= var_8))))))));
            }
        }
    }
    var_20 = ((var_11 && ((min(var_9, var_16)))));
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 17;i_6 += 1)
            {
                {
                    var_21 &= (arr_1 [i_5]);
                    arr_25 [i_6] [i_5] [i_5] [i_4] = ((((((arr_20 [6]) ? (arr_23 [i_5] [i_6 - 1] [i_5] [i_5]) : var_13))) ? (max((arr_23 [i_5] [i_6 - 2] [i_5] [i_5]), 1)) : ((((var_10 || (arr_3 [16] [i_5])))))));
                    var_22 -= ((~((2078740074 >> ((((992935757 ? -21436 : -57)) + 21457))))));
                    arr_26 [i_5] = ((59 + (((((arr_10 [i_4] [10] [22] [i_5]) && (arr_11 [5] [1] [1] [i_4]))) ? (((arr_17 [10] [i_4]) + var_2)) : (((arr_22 [14] [i_5]) ? var_11 : var_9))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 23;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 23;i_8 += 1)
        {
            {
                arr_32 [i_7] [i_7] &= ((((arr_7 [20] [i_8]) ? -32767 : (max(var_11, 1)))));
                var_23 = var_9;
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235189
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_14 = (var_6 ? (arr_6 [i_2]) : (max(var_10, (~-2055526792))));
                            arr_13 [i_2] = -4498300900431879744;
                        }
                    }
                }
                var_15 = (((((-(11 && 15331345125045275824)))) ? ((max(637009284, var_6))) : 11895858154436542335));
                var_16 = ((((max((arr_11 [i_0] [14]), (arr_11 [i_0] [24])))) ? ((-var_1 ? (arr_8 [i_0] [i_1]) : var_9)) : 116));
            }
        }
    }

    for (int i_4 = 3; i_4 < 13;i_4 += 1)
    {
        var_17 |= ((((max((-8098133186879385474 * 3521469726574237094), ((max(4095, var_12)))))) ? ((((max(var_10, (arr_16 [i_4 - 2] [i_4])))) ? var_7 : ((var_10 ? var_8 : (arr_8 [i_4 - 3] [18]))))) : (((min((arr_9 [i_4] [21] [i_4] [i_4 - 3] [i_4]), (arr_9 [0] [i_4] [i_4 + 2] [i_4 + 1] [i_4])))))));
        var_18 += ((((((arr_6 [0]) ? (arr_12 [i_4 - 2] [i_4] [i_4] [i_4]) : var_8))) ? (((((~(arr_4 [i_4 - 1] [i_4])))) ? (arr_1 [i_4 - 1] [i_4 + 2]) : var_0)) : var_3));
    }
    for (int i_5 = 3; i_5 < 16;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 2; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 15;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 13;i_8 += 1)
                {
                    {
                        var_19 = (((arr_12 [i_6 - 1] [i_6 - 2] [i_7 - 2] [i_6]) ? (min(((var_2 ? var_10 : (arr_6 [i_6]))), (var_11 + var_10))) : (min((52776558133248 != 1335004387), ((var_3 ? 11322903889345188242 : 1))))));
                        arr_30 [i_8] [i_6] = max((((arr_23 [i_6 - 1] [i_6 - 1]) ? var_6 : (arr_2 [i_7 - 1] [i_6 - 1]))), (arr_23 [i_6 + 1] [i_6 - 1]));
                    }
                }
            }
        }
        var_20 ^= ((((((((var_13 ? (arr_2 [i_5] [i_5]) : var_8))) ? var_2 : -var_2))) ? (((arr_29 [i_5 - 1] [i_5 - 1] [i_5 - 2] [i_5 - 1] [i_5]) ? (arr_29 [i_5 - 1] [i_5 - 3] [i_5] [i_5 + 1] [i_5]) : (arr_29 [i_5 - 3] [i_5 - 1] [i_5 - 3] [i_5 - 1] [i_5 - 2]))) : var_4));
    }
    for (int i_9 = 1; i_9 < 1;i_9 += 1)
    {
        arr_33 [i_9] [12] |= ((!(((-var_11 ? ((max(0, 22377))) : (arr_4 [i_9] [i_9 - 1]))))));
        var_21 = (min(var_21, (((!(((max(var_3, (arr_32 [i_9] [2]))))))))));
        var_22 ^= (((((var_10 ? var_9 : ((((arr_2 [i_9 - 1] [1]) <= var_5)))))) ? (((((((arr_6 [8]) / var_6))) | (arr_8 [i_9 - 1] [i_9 - 1])))) : (((((arr_3 [i_9]) >= 4553834194554528871)) ? var_1 : (arr_0 [i_9 - 1])))));
        var_23 &= ((+(min((arr_1 [i_9 - 1] [i_9 - 1]), (arr_31 [16])))));
    }
    #pragma endscop
}

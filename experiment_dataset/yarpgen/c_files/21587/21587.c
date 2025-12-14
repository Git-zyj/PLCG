/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21587
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_9;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_18 = (max(var_18, (arr_1 [i_0])));
        var_19 = (((((arr_0 [i_0]) ^ (arr_0 [i_0]))) / (((((arr_1 [i_0]) == var_1))))));
        var_20 = ((!((var_14 && (-127 - 1)))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {
                        arr_10 [i_2] [i_1] [i_2 + 1] [i_3] [0] [i_3] = var_6;
                        arr_11 [i_0] [i_2] [i_3] = ((max((((var_6 ? var_15 : var_0))), (max((arr_4 [i_1] [i_2]), 35248)))));
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        arr_16 [i_4] = ((((-44 ? 1 : -143938682)) <= (arr_15 [i_4] [i_4])));
        arr_17 [i_4] [i_4] = (!var_14);
    }
    for (int i_5 = 1; i_5 < 14;i_5 += 1)
    {
        arr_21 [i_5] = (((((var_4 <= var_3) ? 41489 : 23)) << (((((!(arr_5 [i_5] [i_5] [i_5])))) << ((((~(arr_14 [i_5]))) + 14))))));
        arr_22 [i_5] [i_5] = (((((max(2949268294, (arr_14 [24]))) ? (((arr_20 [i_5]) * (arr_0 [i_5]))) : (((arr_7 [i_5] [i_5 + 1] [1] [1] [i_5] [i_5]) ? 4294967294 : var_4))))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 14;i_6 += 1)
    {
        var_21 = (((arr_20 [i_6]) ? var_12 : 4128354402));
        arr_26 [i_6] = ((68719476735 == var_6) != (arr_24 [i_6] [13]));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 14;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                {
                    var_22 = (((arr_29 [i_6] [i_7]) ^ (arr_20 [i_8])));
                    arr_33 [i_8] [i_7] [i_7] [3] = ((var_0 ? (((arr_13 [0] [i_7]) ? 2147483644 : (arr_9 [i_6] [6] [i_7] [i_7] [i_7]))) : var_12));

                    for (int i_9 = 1; i_9 < 12;i_9 += 1)
                    {
                        arr_36 [i_6] [i_7] [1] [1] = (arr_13 [i_9 + 1] [i_9 - 1]);
                        arr_37 [i_7] [i_7] [i_8] [i_8] [i_9 + 2] = ((arr_9 [i_9 + 1] [i_9 + 2] [i_9 + 1] [i_9] [i_9 - 1]) ? (arr_31 [i_9 + 1] [i_9 + 2] [8] [11]) : (arr_9 [i_9 + 1] [i_9 + 2] [i_9 + 2] [i_9] [i_9 + 1]));
                    }
                    for (int i_10 = 0; i_10 < 14;i_10 += 1)
                    {
                        arr_41 [i_6] [i_7] [i_8] [i_7] = -106;
                        arr_42 [i_10] [i_7] [i_7] [i_8] [i_7] [i_6] = ((-1 ? (-1 - var_16) : (arr_14 [i_10])));
                    }
                }
            }
        }
    }
    #pragma endscop
}

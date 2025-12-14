/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233652
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2] [i_2] = (((3483337418 / var_6) ? (((!((max((arr_7 [i_0] [i_0] [i_0]), 11678032905800842869)))))) : (((!((max(6768711167908708766, 4294967286))))))));
                    arr_9 [i_0] [i_0] [i_2] = (((var_6 || 6438794386029097461) || ((((!var_10) ? (max(var_7, var_9)) : ((((!(arr_3 [i_0] [i_1] [i_2]))))))))));
                }
            }
        }
    }
    var_12 = ((-var_8 <= ((25 ? 6768711167908708746 : 121))));

    /* vectorizable */
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        var_13 = (((arr_10 [i_3] [i_3]) <= 6768711167908708746));
        arr_12 [i_3] [i_3] = (((arr_10 [i_3] [i_3]) | (var_8 ^ 4294967286)));
        arr_13 [i_3] |= (arr_11 [i_3]);
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 18;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            arr_18 [i_4 + 1] [i_5] = (((((arr_15 [i_4 - 1]) + 2147483647)) >> (var_10 + 272076660558733786)));
            arr_19 [i_4 + 1] = ((((((arr_16 [i_4] [i_4] [i_5]) ? 36503 : -1))) && (18446744073709551609 || 38024)));
        }
        arr_20 [i_4] [i_4 + 1] = (~1634435620);
        var_14 += (arr_16 [i_4 + 1] [i_4] [i_4]);
        arr_21 [i_4] [i_4 - 1] = ((!(arr_15 [i_4 - 1])));
        arr_22 [i_4 + 1] [i_4] = ((arr_16 [i_4] [i_4 - 1] [i_4 + 1]) ? var_7 : (arr_16 [i_4] [i_4] [i_4 + 1]));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 11;i_6 += 1)
    {
        arr_27 [10] |= ((((((arr_23 [i_6]) ? var_3 : var_6))) ? var_8 : -5613708097341520510));
        var_15 -= (((((~(arr_25 [6])))) ? ((((!(arr_0 [i_6]))))) : ((0 ? -6690531358509107463 : 6768711167908708746))));
        arr_28 [6] [i_6] |= -232040341;
        arr_29 [i_6] = ((29036 <= (arr_24 [i_6] [i_6])));
    }
    #pragma endscop
}

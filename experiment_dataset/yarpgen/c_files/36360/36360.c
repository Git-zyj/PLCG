/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36360
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 1;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
        {
            var_12 = (max(((((3849036233 ^ 9) ^ (((3 ^ (arr_4 [i_0] [i_0] [i_0]))))))), (((var_2 & var_2) & (~-1367684245985452919)))));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        {
                            var_13 += (((arr_7 [18] [2] [i_2] [i_3] [i_4] [i_2]) != (((((arr_7 [i_0] [i_0] [i_2] [i_0] [i_4] [i_3]) > 18446744073709551615))))));
                            var_14 = (((((var_5 && ((!(arr_9 [i_0])))))) | ((((arr_6 [4] [i_2] [i_1] [i_0]) == ((max(1029494649, 5398011207287793851))))))));
                        }
                    }
                }
            }
        }
        for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
        {
            arr_14 [i_0] [i_5] [i_5] = (((-1 - var_3) > var_7));
            arr_15 [i_0] [i_0] = (((arr_5 [i_0]) ? (((arr_11 [i_0] [i_0] [1] [i_0] [i_0]) + (arr_6 [i_0] [14] [i_5] [14]))) : (arr_0 [i_0])));
            var_15 = (max(var_15, ((((arr_5 [20]) & (arr_11 [i_0] [i_5] [1] [1] [i_0]))))));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    {
                        var_16 = ((1 ? ((min((arr_17 [i_7] [i_6] [i_5] [i_0]), (arr_17 [i_0] [i_5] [23] [i_7])))) : (var_2 && 18446744073709551606)));
                        arr_21 [i_0] [i_0] [16] [i_7] = 6164648902923943275;
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 24;i_8 += 1) /* same iter space */
        {
            arr_24 [i_0] = (((arr_23 [i_0] [i_8]) <= var_9));
            arr_25 [i_0] [i_0] [i_0] = (((arr_19 [i_0] [i_8] [i_0] [i_0]) ? (arr_4 [i_0] [4] [i_8]) : ((((arr_11 [i_0] [i_0] [i_8] [i_0] [i_0]) != 1)))));
            var_17 = ((var_4 ? (arr_8 [i_0] [6] [12] [i_0]) : (arr_8 [i_0] [i_0] [i_8] [i_0])));
            var_18 = -var_6;
        }
        for (int i_9 = 0; i_9 < 24;i_9 += 1) /* same iter space */
        {
            var_19 |= ((((max((arr_23 [1] [i_0]), (arr_23 [i_0] [i_9]))))) >= (min((arr_23 [i_0] [i_9]), (arr_1 [i_0] [i_9]))));
            arr_29 [i_0] [i_0] = (((((arr_16 [i_9] [i_0] [i_0]) || var_6)) ? (var_5 / 1) : ((((arr_8 [i_0] [i_0] [i_9] [22]) ? var_0 : var_4)))));
            arr_30 [i_0] [i_9] [i_0] = ((!(arr_6 [i_0] [i_9] [i_9] [i_0])));
        }
        var_20 = (((((~(arr_26 [i_0])))) * (((-(((1 > (arr_9 [i_0])))))))));
        var_21 = (min(var_21, (arr_27 [2])));
        arr_31 [i_0] = (((max((((arr_6 [i_0] [i_0] [1] [i_0]) % 1)), (arr_8 [i_0] [1] [21] [i_0]))) / var_4));
    }
    for (int i_10 = 0; i_10 < 17;i_10 += 1) /* same iter space */
    {
        var_22 = (max((min((arr_23 [i_10] [i_10]), (arr_23 [i_10] [i_10]))), (arr_23 [i_10] [i_10])));
        arr_35 [i_10] [11] = (min((min(((-23 ? var_0 : 32750)), (2 | 242))), (arr_18 [i_10])));
        arr_36 [i_10] [i_10] = (((~21) && (((3 * (((-3931081429797970330 ? -50 : (arr_13 [i_10] [i_10] [i_10])))))))));
    }
    for (int i_11 = 0; i_11 < 17;i_11 += 1) /* same iter space */
    {
        var_23 = (1 > 1432845444976223146);
        var_24 = ((((((41 / (arr_8 [i_11] [i_11] [i_11] [i_11])))) ? var_6 : (18446744073709551600 & 249))));
    }
    #pragma endscop
}

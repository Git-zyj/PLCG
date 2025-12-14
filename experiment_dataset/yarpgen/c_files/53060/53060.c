/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53060
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((~(~9223372036854775807)));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = (((arr_0 [i_0]) ? 9 : (arr_2 [i_0])));
        arr_4 [i_0] &= ((18446744073709551600 % (((4294967295 ? (arr_2 [i_0]) : (var_0 & var_11))))));
        arr_5 [i_0] = ((~((~(arr_2 [i_0])))));
    }
    for (int i_1 = 2; i_1 < 22;i_1 += 1) /* same iter space */
    {
        arr_9 [i_1] = (max((((arr_8 [i_1 - 1]) ? var_5 : ((10 ? (arr_7 [i_1]) : (arr_7 [i_1 - 1]))))), ((var_7 ? -36 : (arr_6 [i_1 - 1])))));
        var_15 = (max((arr_7 [i_1]), ((((18446744073709551613 & 127) && (~252))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 22;i_3 += 1)
            {
                {
                    var_16 = (var_8 != 3135853466);
                    var_17 -= (min(var_7, ((((!(arr_10 [i_3] [i_2] [2])))))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 22;i_4 += 1) /* same iter space */
    {

        for (int i_5 = 3; i_5 < 21;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 21;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    {
                        arr_24 [i_4 - 2] [i_4 - 2] [i_5] [i_7] [15] = (!(arr_20 [i_6 - 1]));
                        arr_25 [15] [i_5] [15] [3] [i_5] = (((arr_19 [i_4 - 2] [i_5 - 2] [i_6 + 2]) ? var_7 : -31322));
                        arr_26 [i_5] [i_5] [i_6 + 1] [5] = var_10;
                    }
                }
            }
            var_18 -= ((131 ? 0 : 124));
            arr_27 [1] [i_5] = (((((arr_10 [i_4 - 2] [i_5 - 2] [5]) + 2147483647)) >> (((arr_10 [i_4 + 1] [i_5 - 2] [i_5]) + 53))));
        }

        for (int i_8 = 2; i_8 < 21;i_8 += 1)
        {
            var_19 *= ((1 ? 31322 : 4));
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 23;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 23;i_10 += 1)
                {
                    {
                        var_20 = (min(var_20, (((18446744073709551607 >> (131 - 85))))));
                        arr_37 [15] [i_10] [1] [i_8] [6] = ((125 ? 255 : 0));
                        var_21 = (min(var_21, ((((arr_7 [i_8 + 2]) ? (arr_7 [i_8 - 1]) : var_3)))));
                        var_22 &= (arr_10 [i_4 + 1] [i_4 - 2] [i_8 + 2]);
                    }
                }
            }
        }
        for (int i_11 = 1; i_11 < 21;i_11 += 1)
        {
            arr_41 [i_11] [i_4] &= ((-var_1 ? var_8 : -32763));
            arr_42 [i_4] = ((~(arr_28 [i_4] [i_4 - 2])));
        }
        var_23 = (max(var_23, ((((arr_8 [i_4 - 2]) ? var_8 : (arr_8 [i_4 - 2]))))));
        arr_43 [0] = ((arr_12 [9] [0] [i_4] [i_4]) ? (arr_12 [i_4 + 1] [i_4 + 1] [i_4 + 1] [17]) : var_5);
    }
    for (int i_12 = 2; i_12 < 22;i_12 += 1) /* same iter space */
    {
        arr_46 [i_12] = (((arr_19 [18] [i_12 - 1] [i_12 - 2]) ? (((((arr_19 [i_12] [i_12 - 1] [i_12 - 2]) && (arr_19 [i_12 - 2] [i_12 - 1] [i_12 - 2]))))) : (-1 / 3313892313544063316)));
        arr_47 [i_12] = var_9;
        var_24 = (max(var_24, ((((((-(arr_20 [i_12 - 1])))) ? (max((arr_28 [i_12 + 1] [i_12 - 2]), var_10)) : ((max((arr_34 [i_12 - 1] [i_12] [i_12]), (arr_44 [i_12])))))))));
        var_25 = var_6;
    }
    var_26 = (~1);
    #pragma endscop
}

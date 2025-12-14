/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218509
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_2;
    var_18 = -var_4;
    var_19 = var_11;

    for (int i_0 = 2; i_0 < 21;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = (min((!var_5), (arr_1 [i_0])));
        var_20 = (min(var_20, ((max(0, var_9)))));
        arr_3 [i_0 + 2] = ((~((((arr_1 [i_0 + 2]) > (arr_1 [i_0 + 2]))))));
    }
    for (int i_1 = 2; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_21 = (((~-1955269692) > ((((var_6 > (arr_1 [i_1]))) ? var_6 : (!127)))));

        for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
        {
            arr_10 [i_1] [i_1] [i_1] |= (((((var_16 ? var_14 : (arr_8 [i_1 + 1] [i_2] [i_2])))) ? (((var_16 + var_5) / ((((arr_7 [i_1] [i_2] [i_2]) - (arr_6 [i_2])))))) : (123 > 0)));

            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                arr_14 [i_1 - 1] [i_2] [i_3] = 32103;

                for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
                {
                    var_22 -= ((((~((196558553 ? 8755480331566974645 : 7288142894051416476)))) > (((((min(var_12, -8755480331566974676)) > (arr_0 [i_3])))))));

                    for (int i_5 = 2; i_5 < 20;i_5 += 1)
                    {
                        var_23 = ((-196558553 > ((((!(arr_17 [i_5 - 1])))))));
                        var_24 -= (((-236805724 + (arr_4 [i_1 - 1]))));
                        arr_20 [i_1 - 2] [i_2] [i_3] [i_4] [i_5] = ((((-25323 > (((var_2 > (arr_17 [i_1 + 1])))))) ? (--8755480331566974676) : ((((!(arr_16 [i_5] [i_5 + 2] [i_5 - 2] [i_5 - 2] [9])))))));
                    }
                }
                for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
                {
                    arr_24 [i_1] [i_2] [15] [i_6] [i_1] [i_3] = (min((((arr_18 [i_1] [i_1]) ? var_16 : (arr_17 [i_6]))), (min(((var_11 ? var_13 : -54)), (arr_15 [i_1 + 2] [i_1 - 1] [i_1 - 2])))));
                    var_25 = ((!(((~(arr_23 [i_1] [i_2] [i_2] [12] [i_3] [i_6]))))));
                    var_26 -= (max((max((arr_9 [i_1] [i_3]), var_7)), (((!(var_10 > 268402688))))));
                    arr_25 [i_3] [i_3] [i_3] [i_2] [i_1 + 2] [i_1] = (((!(((var_6 ? var_0 : var_13))))));
                }
            }
            var_27 = ((((((max(54, -46))))) ? 149 : 46));
            var_28 &= ((((~(arr_19 [i_1 - 2] [i_1 - 2]))) | (var_6 & var_11)));
        }
        for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
        {
            var_29 = (max(var_29, var_1));
            arr_28 [i_7] [i_1 - 2] [i_1] = ((~((+((((arr_22 [i_1 - 2] [i_1]) > -54)))))));
            arr_29 [i_7] [i_1 + 2] = max(var_10, (((arr_7 [i_1 - 1] [i_1] [i_1 + 2]) ? 2391005539221232210 : (!var_13))));
            arr_30 [i_7] [i_1] [i_1] &= (((((min(var_10, (!21))))) > (((arr_26 [i_1 - 2] [i_7]) ? (arr_19 [i_1 - 1] [i_1 - 1]) : (arr_19 [i_1] [i_1 - 1])))));
            var_30 = ((~(((!2147483647) ? (arr_12 [i_1] [i_7] [i_1 + 2] [i_7]) : (0 > var_9)))));
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 23;i_8 += 1)
        {
            arr_35 [i_8] [i_1] [i_1] = var_0;
            var_31 ^= (((arr_0 [i_8]) ? 3936743737 : (arr_9 [i_8] [i_1 + 1])));
            var_32 = (((arr_26 [i_1 + 1] [i_1]) ? var_13 : (arr_12 [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 + 1])));
        }
        var_33 ^= var_14;
    }
    for (int i_9 = 2; i_9 < 21;i_9 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_10 = 1; i_10 < 21;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 23;i_11 += 1)
            {
                for (int i_12 = 4; i_12 < 19;i_12 += 1)
                {
                    {
                        var_34 += (~196);
                        arr_47 [i_9] [3] [i_11] [i_12] = max((arr_42 [i_9 - 1] [i_10] [i_12 - 1]), ((var_16 * (arr_42 [i_9 - 1] [i_9 - 1] [i_12 - 4]))));
                        var_35 = ((!(((31 ? (((arr_6 [i_9]) + (arr_41 [i_10 + 1]))) : -3752)))));
                        arr_48 [i_12] [i_12] [i_9] = 4294967295;
                    }
                }
            }
        }
        var_36 = (min(var_36, (((((31 | (arr_17 [i_9 - 1]))) | ((~(arr_17 [i_9 - 1]))))))));
    }
    #pragma endscop
}

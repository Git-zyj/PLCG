/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2510
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_19 |= var_15;
        arr_2 [i_0] |= var_4;
        var_20 *= ((+(max((arr_1 [i_0]), (arr_1 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            arr_10 [i_2] |= (arr_7 [i_2]);
            var_21 *= ((+(((var_13 && 32742) >> (((((arr_5 [i_2]) ? (arr_0 [i_2]) : var_14)) + 143))))));
        }
        /* vectorizable */
        for (int i_3 = 2; i_3 < 8;i_3 += 1)
        {
            var_22 = (max(var_22, ((((arr_3 [i_3]) ? (arr_3 [i_3]) : (arr_3 [i_3]))))));
            /* LoopNest 2 */
            for (int i_4 = 2; i_4 < 10;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 0;i_5 += 1)
                {
                    {
                        var_23 = (-127 - 1);
                        var_24 = (min(var_24, (arr_19 [i_3 + 4] [i_4 + 1] [i_3 + 4] [i_4])));
                    }
                }
            }
            arr_21 [i_1] [i_3 + 3] [i_3] = (arr_9 [i_1]);
        }
        var_25 |= ((-((4294967295 ? (arr_19 [i_1] [i_1] [i_1] [10]) : (arr_12 [i_1] [i_1] [i_1])))));

        for (int i_6 = 1; i_6 < 11;i_6 += 1)
        {
            var_26 = ((~(min(var_16, (arr_12 [i_1] [i_1] [i_6])))));
            var_27 *= ((!((((((14556 >= (arr_15 [1] [1] [i_6] [1])))) % -var_13)))));
        }
        var_28 ^= (((((~((var_6 | (arr_20 [i_1] [i_1] [i_1] [6])))))) ? (min(104402049, var_0)) : (((((arr_15 [i_1] [i_1] [i_1] [i_1]) == var_6))))));
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
    {
        var_29 = (((((arr_22 [2] [i_7]) ? (arr_22 [6] [i_7]) : (arr_22 [6] [i_7]))) - (max((arr_22 [10] [i_7]), (arr_22 [10] [i_7])))));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 12;i_9 += 1)
            {
                {
                    var_30 = (max(var_30, (-32767 - 1)));
                    var_31 *= 126;
                    arr_33 [i_7] [i_9] = var_18;
                    arr_34 [i_7] = (min(((((((arr_22 [i_9] [i_8]) ? 112 : var_5)) == (arr_19 [i_7] [i_8] [i_8] [i_9])))), ((-(arr_0 [i_7])))));
                    var_32 ^= ((((arr_7 [i_9]) / (arr_7 [i_9]))));
                }
            }
        }
        var_33 = (arr_1 [i_7]);

        for (int i_10 = 0; i_10 < 12;i_10 += 1)
        {
            var_34 |= 1;
            arr_39 [i_7] [i_7] [i_10] = ((((((((-(arr_16 [i_7] [i_7] [i_10])))) ? ((var_6 ? (arr_0 [i_7]) : var_14)) : ((var_14 ? var_13 : 130))))) == ((((3 ? 18446744073709551615 : (arr_32 [i_7] [i_7] [i_10]))) / var_4))));
            var_35 |= -var_17;
            var_36 |= max((arr_16 [i_7] [i_7] [i_10]), ((((var_8 ^ (arr_25 [i_7]))))));
            var_37 = (max(var_37, var_0));
        }
    }
    var_38 = var_18;
    var_39 = var_10;

    for (int i_11 = 2; i_11 < 6;i_11 += 1)
    {
        var_40 = (((((((var_8 ? var_13 : (arr_36 [i_11])))) ? (arr_6 [i_11 + 3] [i_11] [i_11 + 3]) : ((max(var_7, var_13))))) - (arr_23 [i_11 - 1])));
        var_41 = ((-(~var_2)));
        arr_42 [i_11] = (((((-var_2 ? var_16 : (((arr_32 [i_11] [i_11 + 2] [i_11 + 3]) % 1071644672))))) ? 64 : var_7));
    }
    #pragma endscop
}

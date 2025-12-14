/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38579
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 = ((var_8 + (((var_5 % var_6) ? -var_8 : (arr_0 [i_0])))));
        var_13 *= (!(((arr_1 [i_0]) == (arr_0 [i_0]))));
        var_14 = ((-((+(((arr_1 [i_0]) * (arr_1 [10])))))));
        arr_2 [i_0] = ((~(arr_1 [0])));
    }
    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {
        arr_6 [i_1 - 1] = (((((((arr_0 [i_1]) >> (var_10 - 1954590454)))) ? var_2 : (((((arr_3 [i_1] [i_1]) <= var_5)))))) << (((arr_4 [i_1] [i_1]) - 8188299342615633903)));
        var_15 = (min(((((((arr_4 [i_1] [i_1]) <= var_2))) << (((arr_4 [i_1] [i_1]) - 8188299342615633918)))), (~var_4)));
        var_16 = (arr_3 [i_1 - 1] [i_1 - 1]);
        arr_7 [i_1] = (((arr_4 [i_1] [i_1 - 1]) == (((((var_1 || (arr_3 [i_1 + 1] [6]))) ? (((!(arr_0 [5])))) : (var_7 > var_5))))));
        var_17 = ((-(arr_0 [i_1])));
    }
    var_18 = var_8;
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                {
                    var_19 ^= (((((((!(arr_9 [i_2] [i_3]))) ? (((!(arr_12 [i_2])))) : (((arr_10 [1] [1]) ? var_1 : (arr_12 [0])))))) ? var_1 : ((((((arr_8 [17]) ? var_0 : (arr_14 [i_2] [i_3] [2] [16])))) ? ((var_7 ? var_7 : (arr_13 [i_2] [i_2] [12] [11]))) : var_5))));
                    var_20 *= var_0;
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        arr_18 [3] = (((((((var_2 ? var_6 : var_9)) || var_5)))));
        arr_19 [i_5] = (((~var_2) ^ ((((((arr_16 [i_5]) ? (arr_17 [i_5] [i_5]) : var_8)))))));
        var_21 = (max(var_21, ((((arr_16 [i_5]) ^ (((var_1 - ((var_0 | (arr_15 [i_5])))))))))));

        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            arr_22 [i_6] [i_6] = ((((((((arr_20 [i_5]) ? var_11 : (arr_20 [i_5])))) ? (arr_20 [i_5]) : ((-(arr_15 [i_5])))))) ? ((((((arr_20 [i_5]) ? (arr_16 [i_5]) : var_11)) ^ ((min(var_10, var_10)))))) : ((((arr_20 [4]) >> (var_10 - 1954590440)))));
            arr_23 [i_6] [i_6] = ((!((((((arr_15 [i_5]) >= var_5)) ? (var_10 && var_7) : var_4)))));
        }
        for (int i_7 = 1; i_7 < 19;i_7 += 1)
        {
            arr_26 [i_7] = (((((((-(arr_25 [i_7] [i_5]))) <= var_4))) + ((-(((var_9 > (arr_16 [i_5]))))))));
            arr_27 [i_5] [i_5] = (((((-(((arr_16 [i_7]) / var_10))))) ? (((arr_17 [i_7 + 2] [i_7]) | (((arr_17 [2] [i_5]) ? var_1 : (arr_25 [i_5] [i_7]))))) : -var_4));
            var_22 = ((((((var_3 ? (arr_24 [i_5] [i_7] [i_7]) : (arr_17 [i_5] [i_7 - 1]))))) >> ((((var_2 ? var_4 : (arr_25 [i_7 + 1] [i_5]))) >> ((((~(arr_24 [i_5] [4] [1]))) + 9980))))));
        }
        var_23 = ((((((((arr_15 [i_5]) && (arr_16 [3])))) >> ((((var_11 ? var_10 : (arr_17 [i_5] [i_5]))) - 1954590453))))) ? (arr_24 [0] [i_5] [16]) : (((min(var_10, var_1)) - (var_1 == var_9))));
    }
    for (int i_8 = 3; i_8 < 10;i_8 += 1)
    {
        arr_30 [i_8] [i_8] = (var_0 && (((((((arr_17 [i_8] [i_8]) ? (arr_1 [i_8]) : (arr_15 [i_8])))) ? ((var_3 ? (arr_9 [1] [0]) : (arr_1 [i_8]))) : var_8))));
        var_24 *= ((((!(((var_6 ? var_2 : var_2))))) ? (((((arr_0 [i_8]) ? var_6 : var_10)))) : (min(((((arr_20 [1]) && var_8))), ((var_10 ? var_5 : var_1))))));
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 10;i_9 += 1)
        {
            for (int i_10 = 2; i_10 < 8;i_10 += 1)
            {
                {
                    var_25 = (((((var_11 + var_4) ? var_5 : ((var_7 / (arr_13 [3] [i_9] [3] [12]))))) ^ ((min((((var_3 ? var_1 : (arr_35 [i_8] [4] [4] [2])))), (arr_16 [i_8]))))));
                    var_26 = (((((arr_16 [i_10]) || (arr_14 [i_10] [11] [4] [i_10]))) ? ((((((arr_20 [i_8]) ? var_8 : (arr_25 [12] [5])))) ? (((-(arr_25 [i_8] [i_8 - 3])))) : -var_6)) : (((var_3 ? (((arr_29 [i_8] [i_8]) ? (arr_28 [i_8] [i_8]) : (arr_12 [12]))) : (var_0 && var_10))))));
                }
            }
        }
        var_27 = (((((((((arr_10 [3] [11]) ? (arr_17 [i_8] [16]) : (arr_10 [1] [i_8 - 2])))) || var_3)))) <= (((((arr_35 [i_8] [i_8] [i_8] [6]) ? var_6 : var_0)) << (((arr_4 [i_8] [9]) - 8188299342615633930)))));
    }
    for (int i_11 = 0; i_11 < 0;i_11 += 1)
    {
        var_28 = (min(var_28, (((((((arr_41 [18]) > (arr_41 [22])))) >> var_7)))));
        var_29 = (((arr_41 [i_11]) ? (((((arr_40 [i_11]) < var_1)) ? var_7 : (((arr_40 [i_11]) - (arr_41 [i_11]))))) : var_3));
    }
    #pragma endscop
}

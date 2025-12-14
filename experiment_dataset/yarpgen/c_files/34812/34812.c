/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34812
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((min(var_2, var_1))) ? ((((var_8 || ((max(-4068, var_1))))))) : ((min(var_8, var_2)))));
    var_12 |= ((((((-16637 <= (((var_9 ? var_10 : var_10))))))) + 0));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
                    {
                        var_13 -= ((4294967295 ? (((min(((((arr_5 [i_0] [i_1] [6] [i_3]) < var_4))), var_10)))) : ((var_4 ? ((((var_10 + 2147483647) >> (var_3 - 6236)))) : (arr_7 [i_3] [i_2 + 1] [i_1] [i_0 + 1] [i_0] [i_0 + 1])))));
                        arr_9 [i_3] [i_2 - 1] [1] [i_0] = (arr_2 [i_1] [i_0]);
                    }
                    for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
                    {
                        var_14 = (max(var_14, (((var_1 ? ((min((min(var_0, var_6)), (((arr_11 [i_0] [9] [i_2 - 1]) ? var_5 : var_9))))) : (min(4294967295, -73)))))));
                        arr_14 [i_0] [i_0] [i_2] [13] = (min(((((arr_3 [i_4] [i_2 + 1] [i_0 - 1]) || (arr_8 [i_4] [i_2 - 1] [i_1] [i_1] [i_0] [i_0])))), (((arr_8 [i_0 + 1] [i_0 - 1] [i_0] [1] [i_2] [i_4]) ? (arr_3 [12] [14] [i_1]) : (arr_8 [i_4] [i_4] [i_4] [i_2 - 1] [i_1] [i_0 + 1])))));
                    }
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        var_15 = ((((var_2 ? (arr_10 [i_2 - 1] [i_2 - 1] [i_5] [12]) : 254)) + (((-(arr_6 [i_0 + 1]))))));
                        arr_17 [i_5] [i_2 + 1] [15] [15] [i_5] = (((!127) || var_8));
                    }

                    for (int i_6 = 1; i_6 < 15;i_6 += 1)
                    {
                        arr_21 [i_6] [i_6] [2] [i_1] [i_6] [i_0 + 1] = 2840;
                        var_16 = (((!var_7) >= (min(-245409958199956439, (arr_7 [i_0 - 1] [i_6] [i_1] [i_2] [i_6] [i_6])))));
                    }
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        var_17 += var_5;
                        var_18 = (min(var_18, (((((var_10 && (arr_4 [i_2 - 1])))) <= (((arr_4 [i_2 - 1]) ? (arr_4 [i_2 - 1]) : var_3))))));
                        arr_24 [7] [0] [i_2] [12] [i_7] = min(var_8, -var_8);
                        arr_25 [i_0] [i_1] [i_2 + 1] [i_7] = ((((((((-(arr_13 [i_7])))) ? (arr_11 [i_2 - 1] [i_0 + 1] [i_0 + 1]) : (((!(arr_2 [8] [2]))))))) || (arr_4 [10])));
                    }
                }
            }
        }
    }

    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        var_19 *= ((var_8 ? var_1 : ((((arr_20 [i_8] [i_8] [i_8] [i_8] [i_8]) || var_8)))));
        arr_28 [i_8] = (~var_7);
        var_20 = ((-(max((((var_2 + 9223372036854775807) << (var_6 - 43117))), (((arr_3 [i_8] [3] [i_8]) ? var_7 : var_9))))));
    }
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 10;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 10;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                {
                    var_21 = ((((((arr_12 [i_11] [i_10] [i_10] [5]) ? (arr_12 [i_9] [1] [i_11] [i_11]) : 3966829548))) ? (((((-245409958199956447 ? var_5 : (arr_5 [i_9] [5] [i_10] [i_9])))) & (arr_7 [i_9] [i_10] [i_10] [7] [i_11] [i_11]))) : var_6));
                    arr_36 [i_11] = ((((((arr_22 [9] [i_9] [i_10] [i_11] [i_11]) / (arr_22 [i_9] [i_9] [i_10] [i_10] [i_11])))) ? ((((arr_30 [1] [i_10]) * var_4))) : (max(var_0, (arr_20 [i_9] [i_9] [13] [1] [11])))));
                    var_22 -= ((((((((arr_20 [i_11] [8] [i_9] [i_9] [i_9]) ? var_4 : (arr_32 [i_10])))) ? (arr_13 [i_10]) : var_7)) != var_4));
                    var_23 = (max(var_23, ((min(((var_2 - (arr_5 [i_9] [i_10] [i_9] [i_9]))), var_3)))));
                    arr_37 [i_11] = ((1 ? 214 : 708573003));
                }
            }
        }
    }
    #pragma endscop
}

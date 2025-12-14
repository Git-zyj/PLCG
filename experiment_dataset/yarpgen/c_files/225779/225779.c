/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225779
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        var_13 = arr_0 [i_0 - 1] [i_0];
        arr_2 [i_0] [1] = (((((31569 * (arr_0 [i_0 - 1] [i_0 + 2])))) | ((var_7 * (arr_1 [i_0 + 2] [i_0 + 1])))));
        arr_3 [i_0 + 2] [i_0 + 2] = ((var_12 | (arr_0 [i_0 - 2] [i_0 + 2])));
    }
    for (int i_1 = 1; i_1 < 16;i_1 += 1)
    {
        arr_6 [i_1] = (((((var_4 | (arr_5 [i_1] [i_1 + 4])))) ? (((arr_5 [i_1] [i_1 + 3]) ^ (arr_5 [i_1 + 1] [i_1 + 4]))) : (min((arr_5 [i_1] [i_1 - 1]), (arr_5 [i_1] [i_1 - 1])))));
        var_14 |= ((!((var_2 && (((arr_4 [i_1]) && 32678))))));
        arr_7 [i_1] &= 1;
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_15 -= (max(((~(arr_8 [i_2]))), (((~(arr_9 [i_2] [i_2]))))));

        /* vectorizable */
        for (int i_3 = 2; i_3 < 22;i_3 += 1)
        {
            var_16 += 32049;
            arr_12 [i_2] = (((arr_11 [i_3] [i_2]) ? (4294967289 | 3840) : var_0));

            for (int i_4 = 2; i_4 < 22;i_4 += 1) /* same iter space */
            {
                arr_16 [i_2] [i_3 - 1] [i_2] = -var_2;
                arr_17 [i_2] [i_4 + 2] = (~946793661);
                arr_18 [i_2] [i_2] [i_4] = (((arr_10 [i_2]) != (arr_10 [i_2])));
            }
            for (int i_5 = 2; i_5 < 22;i_5 += 1) /* same iter space */
            {
                arr_21 [i_2] [i_2] [i_5] = (arr_20 [i_2] [i_2] [i_2]);
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 0;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 20;i_7 += 1)
                    {
                        {
                            arr_27 [i_2] [i_2] [i_2] [i_2] [i_2] = (i_2 % 2 == zero) ? ((((arr_26 [i_2] [i_2] [i_5] [i_7] [i_5] [i_6] [i_6 + 1]) >> (((arr_26 [i_7 + 3] [i_2] [i_6 + 1] [i_3 + 1] [i_3 + 1] [i_2] [i_2]) - 12748))))) : ((((arr_26 [i_2] [i_2] [i_5] [i_7] [i_5] [i_6] [i_6 + 1]) >> (((((arr_26 [i_7 + 3] [i_2] [i_6 + 1] [i_3 + 1] [i_3 + 1] [i_2] [i_2]) - 12748)) - 2357)))));
                            var_17 = ((-33487 ? (arr_10 [i_2]) : (arr_22 [i_7 + 2] [i_6 + 1] [i_3] [i_2])));
                            var_18 = var_8;
                            var_19 = (min(var_19, (((+((var_11 ? (arr_26 [i_7] [i_3] [i_5] [i_5 - 1] [i_3] [i_3] [2]) : (arr_11 [i_5] [i_3]))))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 24;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 24;i_9 += 1)
                    {
                        {
                            arr_32 [i_2] [i_5] [i_5] [i_2] [i_5] = (((arr_11 [i_2] [i_2]) ? (~var_4) : ((var_7 ? var_4 : (arr_20 [i_3 + 2] [i_5] [i_9])))));
                            var_20 = ((var_4 ? (arr_19 [i_2] [i_3 - 1] [i_3] [i_3 - 2]) : (arr_23 [i_2] [i_3 - 2] [i_3] [i_3 + 2])));
                            arr_33 [11] [i_3] [i_5 + 2] [i_2] [i_9] = (arr_15 [i_8]);
                            arr_34 [i_9] [i_8] [i_2] [i_3] [i_2] = (~1);
                        }
                    }
                }
                arr_35 [i_5] [i_2] [i_2] = (((arr_28 [i_3 + 2] [i_2]) ? (arr_28 [i_3 + 1] [i_2]) : (arr_28 [i_3 + 2] [i_2])));
            }
            arr_36 [i_3] [i_2] [i_3] &= -var_6;
            /* LoopNest 3 */
            for (int i_10 = 2; i_10 < 22;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 24;i_12 += 1)
                    {
                        {
                            arr_46 [i_2] [1] [i_10] [i_3] [i_3 - 2] [i_2] = 16958;
                            var_21 = var_8;
                            var_22 = (min(var_22, (((!(arr_14 [i_10 + 1] [i_3 + 2] [i_3]))))));
                            var_23 = ((((((arr_24 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) ? 33477 : var_5))) ? var_2 : (arr_25 [i_2] [i_11] [i_12] [i_12])));
                        }
                    }
                }
            }
        }
        var_24 = ((+(max((arr_37 [i_2]), (arr_38 [i_2] [i_2] [i_2] [i_2])))));
        arr_47 [i_2] [i_2] = ((+((-((1 ? (arr_14 [i_2] [i_2] [i_2]) : (arr_20 [i_2] [i_2] [i_2])))))));
        arr_48 [i_2] = var_2;
    }

    for (int i_13 = 2; i_13 < 19;i_13 += 1)
    {
        arr_51 [i_13] [i_13] = ((~((6 ? 1 : 32049))));
        arr_52 [i_13] [i_13] = ((((((var_9 / var_3) >= ((min((arr_9 [i_13] [i_13 - 2]), (arr_20 [i_13 - 1] [i_13] [i_13]))))))) >> ((((122 ? -var_1 : (((arr_29 [i_13 + 1] [i_13 - 1]) - var_1)))) + 30528))));
        var_25 = (((((arr_9 [i_13] [i_13 - 1]) | (arr_9 [i_13] [i_13 - 1]))) >> (((max(var_4, (arr_9 [i_13 - 1] [i_13 + 1]))) - 3322849805))));
    }
    var_26 = (max(-9223372036854775791, var_5));
    var_27 = ((((((var_6 ? var_10 : 1291516380)))) ? (min(13427956170669215432, var_10)) : (-var_11 >= 1)));
    var_28 = ((max(((min(var_10, var_11))), ((13427956170669215431 ? 23673 : 0)))) <= var_8);
    #pragma endscop
}

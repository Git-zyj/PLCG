/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239942
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 = (((arr_1 [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_16 = var_6;
                    var_17 = (((arr_6 [i_0] [i_1] [i_0]) ? (arr_6 [5] [5] [i_0]) : (arr_0 [i_2])));
                    arr_7 [i_0] [i_0] [13] = (((arr_4 [i_0] [i_0] [i_2]) == (arr_4 [i_0] [i_0] [i_1])));
                }
            }
        }

        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            arr_11 [i_0] = ((var_3 ? ((((arr_3 [i_0] [i_0]) ? (arr_8 [10] [i_3] [i_0]) : (arr_5 [i_0] [i_0] [i_0])))) : var_0));
            var_18 |= (arr_4 [i_0] [14] [14]);
        }
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 3; i_5 < 16;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 19;i_6 += 1)
                {
                    {
                        var_19 = (((arr_19 [i_0] [i_0]) ? (arr_14 [i_0] [1] [i_0]) : (((var_7 <= (arr_19 [i_0] [i_0]))))));
                        var_20 = (max(var_20, (arr_3 [13] [i_0])));
                    }
                }
            }
            var_21 = (arr_13 [i_0]);
        }
        var_22 = (arr_2 [i_0] [5] [i_0]);
    }
    for (int i_7 = 0; i_7 < 13;i_7 += 1)
    {
        var_23 = (((9223372036854775807 & (arr_14 [i_7] [i_7] [i_7]))));
        var_24 = (min(var_24, var_10));
        arr_23 [i_7] [i_7] = var_14;
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
    {
        var_25 = (((arr_10 [i_8] [i_8] [i_8]) ? ((((var_1 ^ (arr_17 [i_8]))) >> (var_13 + 2460084661875509887))) : (((arr_0 [7]) + var_1))));
        arr_27 [0] &= (!(arr_5 [10] [i_8] [i_8]));
        var_26 = ((((!(arr_24 [i_8] [3])))));
        arr_28 [i_8] = var_11;
        var_27 = ((-(arr_2 [18] [i_8] [i_8])));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
    {

        for (int i_10 = 0; i_10 < 15;i_10 += 1)
        {
            var_28 = (~(((arr_16 [i_10] [10]) ? var_13 : (arr_3 [i_10] [i_10]))));
            var_29 |= var_14;
        }
        for (int i_11 = 0; i_11 < 15;i_11 += 1)
        {
            arr_39 [11] [i_11] = var_13;
            var_30 = (max(var_30, ((((arr_8 [i_9] [i_11] [i_11]) ? var_13 : (arr_4 [i_9] [4] [i_9]))))));

            for (int i_12 = 0; i_12 < 15;i_12 += 1)
            {
                arr_43 [i_9] [11] [i_12] = var_5;
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 15;i_14 += 1)
                    {
                        {
                            var_31 -= (arr_8 [i_9] [4] [i_13]);
                            var_32 = (((((((arr_9 [i_9]) != (arr_34 [i_9] [i_9]))))) <= (arr_0 [i_9])));
                            var_33 = ((((!(arr_44 [i_9] [i_11] [i_12] [11] [i_11] [i_14]))) || (var_3 > var_8)));
                            var_34 = var_8;
                            var_35 = (((arr_25 [i_9]) < (arr_25 [9])));
                        }
                    }
                }
            }
        }
        var_36 = var_8;
        var_37 = ((!(((var_7 ? var_12 : (arr_15 [1] [12] [i_9]))))));
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 15;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 1;i_16 += 1)
            {
                {

                    for (int i_17 = 0; i_17 < 1;i_17 += 1)
                    {
                        var_38 = var_13;
                        var_39 += ((((arr_2 [i_15] [17] [1]) ? (arr_4 [i_9] [10] [2]) : (arr_54 [i_9] [i_15] [i_16] [i_17]))) / var_6);
                        var_40 ^= ((647503489737847413 ? 3152845266 : 0));
                        var_41 = (((arr_18 [i_9]) ^ var_12));
                    }
                    var_42 = (arr_34 [i_9] [i_9]);
                    var_43 |= (arr_13 [i_9]);
                    arr_55 [i_9] [i_16] [i_9] [9] = (arr_40 [i_9] [1] [i_16] [i_16]);
                }
            }
        }
        var_44 = var_2;
    }
    var_45 ^= var_8;
    var_46 = (((((var_12 & (min(var_2, var_14))))) ? 67 : ((((max(var_5, var_10))) & var_2))));
    #pragma endscop
}

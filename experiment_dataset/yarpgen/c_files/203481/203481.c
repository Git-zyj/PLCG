/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203481
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_17 = ((((arr_2 [i_0] [i_0]) || (arr_2 [i_0] [i_0]))) || ((min(var_8, (arr_2 [i_0] [i_0])))));
        var_18 = ((((-(arr_0 [i_0])))) ? (min(971563478, (arr_0 [11]))) : var_14);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                {
                    arr_13 [i_2] [i_2] [i_3] = 255;

                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {

                        for (int i_5 = 3; i_5 < 13;i_5 += 1)
                        {
                            arr_19 [13] [i_2] [i_2] [i_4] = ((!((((max(0, (arr_16 [i_1] [i_1] [i_3] [i_1] [0] [i_5 + 1])))) && var_0))));
                            var_19 = (!220);
                            arr_20 [i_2] [i_2] = ((((arr_6 [i_4]) ? 0 : ((-(arr_4 [i_1]))))));
                        }
                        /* vectorizable */
                        for (int i_6 = 1; i_6 < 11;i_6 += 1)
                        {
                            arr_23 [i_2] [i_2] = var_16;
                            arr_24 [i_1] [i_2] [i_2] [i_4] [i_4] [i_4] = (arr_9 [i_6 + 1] [i_6 + 2] [i_6] [i_6 + 1]);
                            arr_25 [5] [i_2] [i_2] [i_2] [7] = (arr_5 [i_4]);
                            var_20 = arr_21 [i_6];
                            arr_26 [i_1] [i_2] [i_3] [2] [i_2] = (31 | 3323403817);
                        }
                        for (int i_7 = 2; i_7 < 11;i_7 += 1)
                        {
                            arr_30 [i_2] [i_3] [i_2] = 1511962679;
                            arr_31 [6] [7] [7] [i_4] [i_4] [7] [i_2] = ((-(min(971563478, 255))));
                        }
                        var_21 = var_5;
                        arr_32 [i_2] [i_2] = (-(1 | 110));
                    }
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        var_22 = (min(1, 1));
                        arr_37 [i_2] = var_1;
                        arr_38 [i_1] [i_2] [12] [i_2] [i_8] = (((arr_11 [i_8] [i_2] [i_2] [i_1]) % var_6));
                    }
                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {
                        arr_41 [i_1] [1] [i_3] [i_2] [i_3] [i_2] = -232759258;
                        var_23 = (((((~(arr_11 [i_9] [i_2] [i_2] [i_1])))) ? ((((arr_11 [i_2] [i_2] [i_2] [i_2]) ? (arr_11 [i_1] [i_2] [i_2] [i_9]) : (arr_11 [i_1] [i_2] [i_2] [i_9])))) : (((arr_11 [i_1] [i_1] [i_2] [i_9]) ? var_14 : (arr_11 [i_9] [i_2] [i_2] [i_1])))));
                        var_24 = arr_6 [7];
                        arr_42 [i_2] [i_2] [i_2] [i_2] = ((((var_15 ? ((2496352282 | (arr_7 [i_1] [i_2]))) : ((((arr_8 [i_1] [i_1] [i_1]) ? (arr_36 [i_2] [i_1] [i_2]) : (arr_34 [i_1] [i_1] [11] [i_2] [i_3])))))) | ((((arr_18 [i_1] [i_1] [i_2] [i_2] [8]) ? ((min(1, (arr_29 [0] [i_2] [i_3] [i_2] [i_1])))) : 1594280666)))));
                    }
                    var_25 = min((max(var_0, (arr_4 [i_2]))), (((arr_4 [i_1]) * (arr_4 [i_3]))));
                    arr_43 [i_1] [1] [i_2] [i_1] = min((((((-109 ? -31717 : 1))) ? (arr_15 [i_2] [i_1] [13] [13] [i_2] [i_2]) : (arr_3 [i_2]))), var_15);
                }
            }
        }
        arr_44 [i_1] [i_1] = (31 || 13424120547200264585);
        var_26 = (var_7 ? -var_3 : (arr_16 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]));
    }
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 13;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 13;i_11 += 1)
        {
            {
                var_27 = (((!(arr_45 [i_11]))));
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 13;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 13;i_13 += 1)
                    {
                        {
                            arr_55 [i_11] [i_12] = (arr_2 [i_10] [i_10]);
                            arr_56 [i_13] [i_12] [i_10] [i_10] = ((var_7 || ((((arr_36 [i_10] [i_10] [i_13]) | (arr_0 [i_10]))))));
                            arr_57 [i_10] [i_11] [i_12] [i_13] [12] = var_1;
                            arr_58 [i_10] = ((+(((arr_10 [i_12] [i_10] [i_10]) | (arr_10 [i_12] [i_11] [i_10])))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

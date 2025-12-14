/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49465
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (var_10 - 6902224640081415124);

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = arr_1 [i_0];
        arr_4 [i_0] = (max((arr_2 [i_0] [i_0]), ((var_5 | ((((arr_2 [i_0] [i_0]) ? 0 : 2142043927)))))));
        arr_5 [i_0] = (((((((var_1 ? var_1 : var_3))) ? (((var_11 ? -22185 : 65535))) : var_0)) < ((max(((5779 ? 122 : 8250)), var_7)))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_8 [i_1] = ((arr_1 [i_1]) ? (((var_8 < var_5) ? (1 % 2499169469728320242) : 57286)) : (((arr_6 [i_1] [i_1]) ? var_8 : (arr_6 [i_1] [i_1]))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    {
                        arr_15 [i_2] [i_1] = (var_10 || var_1);
                        arr_16 [i_4] = (max((((max(var_0, var_5)) * (((((arr_2 [i_1] [i_4]) < 1)))))), ((max((max(var_9, 2142043944)), 8250)))));
                        arr_17 [i_2] = (((arr_0 [i_1]) ? (arr_11 [i_1]) : var_12));
                    }
                }
            }
        }
        arr_18 [i_1] [i_1] = (min(3838398187, 1));
        arr_19 [i_1] [i_1] = ((57286 ? 8232 : 1));
    }
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        arr_22 [i_5] = (arr_1 [i_5]);
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    {
                        arr_30 [i_6] [i_6] [10] [i_6] &= (min(((var_5 ? (((arr_27 [i_5] [i_6] [i_7] [i_5]) ? (arr_20 [i_5] [i_6]) : var_5)) : (max(var_2, 9)))), (((((var_12 % (arr_28 [i_5] [i_6] [16] [14])))) ? ((var_11 ? var_7 : var_8)) : ((((arr_27 [i_8] [i_7] [12] [12]) - (arr_25 [i_8] [12] [12] [i_5]))))))));
                        arr_31 [8] [i_6] [8] = ((var_9 ? ((var_5 << ((((var_7 ? var_6 : var_0)) - 373593578)))) : (min((arr_27 [i_5] [i_6] [i_7] [19]), 18446744073709551615))));

                        for (int i_9 = 1; i_9 < 18;i_9 += 1)
                        {
                            arr_36 [i_5] [15] [10] [i_6] [i_9] = (max(((min(((var_6 * (arr_33 [i_5] [i_6] [i_7]))), var_7))), var_5));
                            arr_37 [i_6] [i_6] [i_6] [i_6] [i_6] = (arr_35 [i_6] [i_9] [i_9 - 1] [19] [i_9 - 1]);
                            arr_38 [i_5] [i_5] [i_6] [i_7] [i_6] [i_5] [i_9 + 2] = (-112 < 3838398171);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212313
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_4 [i_1] = ((((~(~var_1)))) ? (((((~2111548390) + 2147483647)) >> (((((arr_1 [i_0 + 1] [i_0 + 1]) ? (arr_1 [i_0 - 1] [i_1]) : var_9)) + 7495)))) : (arr_3 [i_0] [i_1]));
                arr_5 [14] = (max(((-804358973780620979 * (arr_3 [i_0 - 1] [i_0 + 1]))), var_10));
            }
        }
    }
    var_16 = (((((var_7 ^ (~47121)))) || (((var_9 / (var_9 / var_0))))));

    for (int i_2 = 3; i_2 < 14;i_2 += 1)
    {
        arr_8 [i_2] = ((((~(arr_1 [i_2 + 1] [i_2 + 3]))) / ((((1 <= (-127 - 1))) ? (var_9 & var_15) : var_11))));
        arr_9 [i_2] = ((((((max((arr_0 [20] [20]), var_5))))) * var_8));
    }
    for (int i_3 = 2; i_3 < 14;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 4; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            {
                                arr_24 [i_3] [3] = ((((((var_4 << (1921566100 - 1921566100))) >= (!47128))) ? ((var_4 ? (var_4 + var_9) : (arr_23 [i_3] [i_3] [i_3] [i_3] [i_7]))) : (~var_11)));
                                arr_25 [i_3 - 1] [i_5] [i_4] &= ((+(((((((arr_6 [i_7]) ? (arr_21 [i_7] [i_7]) : var_7))) || -7045960162913234810)))));
                            }
                        }
                    }
                    arr_26 [i_3] [i_4] [i_4] [i_4] = arr_18 [i_5];
                    arr_27 [i_3] = (((((2111548390 ? var_5 : (!16506)))) ? ((((var_13 == var_7) > (arr_13 [i_3 + 1])))) : (arr_15 [i_3 - 2] [i_4] [i_4])));
                }
            }
        }
        arr_28 [i_3] [i_3] = var_12;
    }
    for (int i_8 = 1; i_8 < 9;i_8 += 1)
    {
        arr_32 [i_8] [i_8] = (((var_11 ? 47128 : var_12)));
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 12;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                {
                    arr_40 [i_8] [8] [i_8 + 3] &= ((((((2111548390 ? -53 : 0)) + 2147483647)) << (((((arr_38 [6] [0]) % (((var_3 ? (arr_34 [4]) : (arr_7 [i_8] [i_8 + 2])))))) - 2508))));
                    arr_41 [i_8] [0] [8] &= ((!((!(arr_10 [0])))));
                    arr_42 [2] [i_10] [i_10] [i_10] = (min((arr_22 [i_8 + 1]), (arr_10 [10])));
                }
            }
        }
    }
    #pragma endscop
}

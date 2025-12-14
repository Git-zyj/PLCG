/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45683
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (~0);
    var_12 |= var_10;

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            arr_5 [i_0] [i_0] = var_1;
            arr_6 [0] [0] [i_1] = 2769707545;
            arr_7 [11] [i_0] = ((32767 ? var_3 : (var_5 / var_0)));
            arr_8 [i_0 + 1] = (max((((var_7 + 2147483647) >> (var_8 - 147))), var_4));
        }
        arr_9 [i_0] = ((~(min((!var_10), (max(var_6, var_5))))));
        arr_10 [i_0] [i_0] = -var_6;
        arr_11 [i_0 - 2] = var_7;
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        arr_14 [6] [6] = ((max((max(var_7, 1)), (!var_0))));
        arr_15 [10] = -14062;

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {

            for (int i_4 = 3; i_4 < 9;i_4 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 9;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        {
                            arr_27 [i_2] [i_2] = (((((~(var_0 | var_8)))) ? var_3 : -28166));
                            arr_28 [i_2] [4] [i_4] [i_3] [i_3] [i_2] = 24483;
                            arr_29 [i_6] [i_2] [5] [i_2] [i_2] = var_5;
                        }
                    }
                }

                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    arr_32 [i_2] [i_2] [i_4 - 1] [6] = (min(var_2, (((min(41052, var_6))))));
                    arr_33 [6] = (max((var_3 && var_8), var_3));
                }
                for (int i_8 = 3; i_8 < 9;i_8 += 1) /* same iter space */
                {
                    arr_36 [i_2] [i_3] [i_3] [i_4] [i_4] [i_2] = ((min(((-(arr_31 [0])), var_4))));
                    arr_37 [8] [i_4] [i_2] [i_3] = ((min(41066, 32761)));
                }
                for (int i_9 = 3; i_9 < 9;i_9 += 1) /* same iter space */
                {
                    arr_42 [i_4 - 1] [i_2] [i_4] [i_4] = var_9;
                    arr_43 [i_2] [i_2] [1] |= ((!(((~(arr_39 [i_4 + 2] [i_4] [i_4 + 2] [i_4] [i_4 + 2]))))));
                    arr_44 [i_2] [10] [i_4 - 1] [i_9] = (max(((-var_2 ? var_2 : -24467)), -var_7));
                }
                for (int i_10 = 0; i_10 < 11;i_10 += 1)
                {
                    arr_49 [2] [i_10] [1] [i_3] [i_2] = var_7;
                    arr_50 [i_2] [i_2] [i_4] = (-(min(24467, (max(var_1, 4611686018427387903)))));
                    arr_51 [i_2] [i_2] [i_4] [i_10] = (min(((((var_3 * (arr_31 [i_4]))))), ((-((var_1 ? 20405 : -3699674654088411291))))));
                    arr_52 [i_2] [2] [i_2] = (max(((((!var_2) & (!60)))), var_1));
                    arr_53 [i_2] [i_3] [i_2] [i_2] = var_5;
                }
            }
            for (int i_11 = 3; i_11 < 9;i_11 += 1) /* same iter space */
            {
                arr_58 [i_2] [6] [i_3] [10] = (((((1 ? (arr_12 [i_2] [4]) : 45132))) ? -13682 : 32745));
                arr_59 [i_2] [i_3] [i_2] [i_3] = (min(51338, (max(var_4, -var_10))));
            }
            arr_60 [i_2] [i_2] = (((~(~var_0))) & 0);
            arr_61 [i_2] = (min(var_9, (((arr_30 [i_3] [i_2] [i_2] [i_2] [i_2] [i_2]) ? var_3 : var_8))));
        }
        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 11;i_13 += 1)
            {
                for (int i_14 = 3; i_14 < 10;i_14 += 1)
                {
                    {
                        arr_71 [0] &= 1;
                        arr_72 [9] [i_2] [9] [i_14] = var_8;
                        arr_73 [i_2] [i_2] [i_2] [1] = 1;
                        arr_74 [i_2] [i_2] [i_2] [i_2] [i_2] = ((-(!var_8)));
                    }
                }
            }
            arr_75 [i_2] [i_12] = (arr_31 [i_12]);
        }
    }
    for (int i_15 = 0; i_15 < 22;i_15 += 1)
    {
        arr_78 [i_15] = (max(var_4, ((var_4 ? 2031616 : (var_10 + var_6)))));
        arr_79 [i_15] = ((((var_8 - (~6061116608729414748))) > ((max(var_4, (arr_76 [i_15]))))));
        arr_80 [i_15] = (!(((var_7 ? (arr_77 [19]) : var_8))));
        arr_81 [i_15] = 1;
    }
    var_13 = (~var_0);
    #pragma endscop
}

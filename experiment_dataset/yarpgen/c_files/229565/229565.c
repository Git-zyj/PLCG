/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229565
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] = (((((~(arr_3 [i_1])))) & ((var_13 / (arr_3 [i_1])))));
                var_19 = ((1784157787 ? 4294967295 : 1));
                var_20 = (max(var_20, (((((((var_1 | (arr_1 [i_1]))) & (23708 & 8312))) | (max((((arr_1 [i_0]) ^ 809293888)), ((max((arr_1 [i_1]), var_10))))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 15;i_3 += 1)
        {
            {
                arr_14 [i_2] [i_3] [i_3 + 1] = (arr_7 [i_3 + 1]);
                arr_15 [i_2] [i_3] = (~((var_2 << (((max((arr_10 [i_3] [i_2] [i_2]), 2379785318386216690)) - 18446744073709527691)))));

                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
                    {
                        arr_21 [i_5] [i_4] [i_3] [i_2] = (arr_19 [i_2] [i_2] [i_2] [i_3 + 1]);

                        for (int i_6 = 1; i_6 < 14;i_6 += 1)
                        {
                            arr_25 [i_2] [i_2] [i_4] [12] [i_5] [i_3] = ((~(((((arr_6 [i_6]) + 2147483647)) >> (17975 - 17968)))));
                            arr_26 [i_2] [i_3] [i_3] [i_5] [i_6] = (arr_24 [i_6] [i_6 + 2] [i_6 + 1] [i_6]);
                            arr_27 [i_2] [i_2] [i_4] [i_5] [i_5] [i_5] [i_6] = (((arr_7 [i_3 - 1]) == var_1));
                        }
                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            arr_30 [1] [i_4] [i_4] [i_4] [i_4] &= (arr_10 [i_3] [i_3 - 1] [i_3 - 1]);
                            arr_31 [i_3] [i_3] [i_3] [i_5] [i_7] [i_7] = -var_11;
                        }
                        var_21 = ((~(arr_16 [i_3 - 1])));
                        arr_32 [i_2] [5] [i_3] [i_3] [i_5] &= ((~(arr_12 [i_3 + 1] [i_5])));
                    }
                    for (int i_8 = 0; i_8 < 16;i_8 += 1) /* same iter space */
                    {
                        arr_35 [i_8] [i_4] = (var_10 / 1);

                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 16;i_9 += 1)
                        {
                            arr_38 [i_8] [i_8] [i_8] = ((63488 && (((23691 ? 202 : (arr_34 [i_2] [i_2] [i_2]))))));
                            arr_39 [i_2] [i_9] [i_8] [i_8] [i_9] [i_2] [i_4] = ((~(63495 / 14)));
                            var_22 = (~(((arr_20 [i_2] [i_2] [i_2] [i_2] [i_2]) >> (var_7 - 2808528480))));
                            arr_40 [i_2] [i_3] [i_2] [i_8] = var_13;
                        }
                        arr_41 [i_3] [i_4] = (((-(max((arr_37 [i_2] [i_2] [i_2] [i_2] [i_2]), (arr_9 [i_4]))))));
                        arr_42 [i_3 + 1] = ((+(((var_10 != -112) << (((125 % var_7) - 115))))));
                        arr_43 [i_2] [9] [i_4] [i_4] = -var_9;
                    }

                    for (int i_10 = 1; i_10 < 1;i_10 += 1)
                    {
                        var_23 ^= (((min((arr_7 [i_3 + 1]), (((var_13 + (arr_29 [i_2] [i_3] [i_3 + 1] [i_4] [i_10])))))) - 1652));
                        var_24 = (max(var_24, (((!(arr_29 [i_2] [i_3 - 1] [i_4] [i_10] [i_10 - 1]))))));
                        var_25 -= ((((~(arr_36 [i_10] [i_10] [i_3] [i_3 + 1]))) + var_3));
                    }
                }
            }
        }
    }
    #pragma endscop
}

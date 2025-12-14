/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217533
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((arr_0 [i_0]) << (((((arr_1 [i_0]) | (((arr_0 [i_0]) ? var_0 : var_13)))) - 4256795624))));
        var_14 = ((((max((arr_1 [i_0]), 2594615588))) ? (((-(arr_1 [i_0])))) : (((arr_1 [i_0]) ? -7414099824872483442 : var_10))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 4; i_4 < 12;i_4 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            arr_18 [i_5] [i_4 - 2] [i_3] [1] [3] = var_7;
                            var_15 = 1700351708;
                            var_16 = (((arr_4 [i_2 - 1]) ? (arr_4 [i_2 + 1]) : 26289));
                            arr_19 [2] [i_2 - 1] [i_2 - 1] = (((var_1 / 9223372036854775807) ? (4797339154908509559 & 1700351707) : (((var_9 ? var_11 : 1700351702)))));
                            arr_20 [i_1] [i_1] = ((0 ? (arr_11 [i_2 + 1] [i_2 - 2] [i_4 - 4] [9] [i_4 - 4] [i_4 - 4]) : 8857));
                        }
                        for (int i_6 = 1; i_6 < 9;i_6 += 1)
                        {
                            var_17 = 4294967295;
                            var_18 = 127;
                            arr_23 [4] [i_3] [i_3] [i_3] = (((min((arr_3 [i_2 - 1] [4]), -6338072890469138006)) <= (((var_1 + 9223372036854775807) << (((arr_3 [i_2 - 1] [i_2 + 1]) - 3073901350512423410))))));
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            arr_26 [i_7] [i_7] = -var_9;
                            arr_27 [9] [i_3] [i_7] = ((-var_11 ? var_5 : 2594615583));
                        }
                        arr_28 [0] [i_2 - 1] [0] [i_2 - 1] = (~(-1 & 0));
                        arr_29 [i_1] [i_1] [11] [i_1] [11] [i_1] = (max(((~(min(var_8, -13293)))), (~var_11)));
                        var_19 = ((((((!((((arr_10 [i_4] [i_3] [i_2] [i_1]) ? 1700351708 : var_7))))))) - (arr_21 [11] [i_2 + 1] [i_2 - 2] [i_2 - 1] [i_2 - 1] [i_2 - 2])));
                    }
                }
            }
        }
        arr_30 [6] = ((((arr_22 [9] [i_1] [i_1] [i_1] [11]) ? 32767 : (arr_22 [i_1] [1] [11] [i_1] [1]))) & (!1));
        arr_31 [i_1] [i_1] = ((-(~2594615587)));
        var_20 = (max((min((var_1 | -4039475797381987592), (arr_13 [i_1] [i_1] [i_1] [i_1]))), (min((((var_3 + 9223372036854775807) << (32767 - 32767))), (arr_8 [i_1])))));
    }
    for (int i_8 = 0; i_8 < 13;i_8 += 1) /* same iter space */
    {
        arr_35 [i_8] [i_8] = 0;
        arr_36 [2] = (!var_11);
        var_21 = (~((74 ? var_13 : (arr_22 [i_8] [i_8] [i_8] [i_8] [i_8]))));
    }
    var_22 = (min((max(var_9, (max(var_8, var_6)))), ((-(min(var_1, var_9))))));
    var_23 = (var_12 ? (min(-32668, var_3)) : ((((min(var_8, 948844257))) ? (9102491867847876351 % 67108864) : (((max(var_2, -20)))))));
    #pragma endscop
}

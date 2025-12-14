/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234656
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 10;i_3 += 1)
                {
                    {
                        var_13 ^= (((arr_2 [i_0] [10] [i_0]) < var_3));
                        arr_9 [i_0] [4] [i_1] [9] = ((min((arr_3 [i_0] [i_1] [i_3 + 1]), var_6)));
                        arr_10 [i_0] [i_0] [i_0] [i_0] = var_2;
                        var_14 += ((var_5 ? ((max(var_0, (arr_6 [i_0] [i_1] [10] [2])))) : var_1));
                    }
                }
            }
        }
        var_15 = var_0;
        arr_11 [i_0] [i_0] = ((((((!var_11) ? (arr_6 [i_0] [i_0] [i_0] [i_0]) : ((((arr_6 [4] [4] [i_0] [i_0]) ? var_2 : var_0)))))) ? (arr_0 [i_0]) : (max(var_3, (var_4 | var_5)))));
        arr_12 [1] [i_0] = ((var_0 ? ((((max(95, -1767237747))) ^ ((var_2 ? var_7 : var_10)))) : (((-(arr_1 [i_0]))))));
    }
    for (int i_4 = 0; i_4 < 0;i_4 += 1)
    {
        var_16 = var_11;
        var_17 = ((((((((254 ? 87 : 613998877))) ? (arr_13 [i_4] [i_4 + 1]) : 160))) ? ((((((arr_14 [i_4]) ? var_11 : 255))))) : (max(var_9, (arr_14 [i_4 + 1])))));
        arr_17 [i_4] = ((((arr_16 [i_4 + 1] [i_4 + 1]) ? (arr_14 [i_4 + 1]) : var_11)));

        for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
        {
            arr_21 [i_4] = (max(((((((var_7 ? var_4 : (arr_18 [i_4 + 1] [i_5])))) ? ((var_7 ? var_0 : var_0)) : ((((arr_14 [16]) ? (arr_13 [i_4 + 1] [i_4 + 1]) : var_1)))))), (max(var_4, var_9))));
            var_18 = -var_10;
            arr_22 [i_4] [i_4] = (arr_13 [i_5] [i_4]);
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
        {
            var_19 *= var_2;
            arr_25 [i_4] = (var_9 <= var_8);
            var_20 += ((var_11 ? ((-(arr_15 [i_6]))) : var_5));
            arr_26 [i_4] [10] [i_6] &= (((arr_23 [i_4] [i_4] [i_6]) ? ((((arr_19 [20] [i_6] [i_6]) ? var_4 : var_7))) : ((var_8 ? var_2 : var_1))));
        }
    }
    for (int i_7 = 0; i_7 < 15;i_7 += 1)
    {
        arr_29 [7] = max((min(276121962, 1274272386)), -1);

        for (int i_8 = 2; i_8 < 12;i_8 += 1)
        {
            var_21 = var_10;
            var_22 = (((((((~(arr_18 [i_7] [8])))) && var_3)) ? (((((var_4 ? (arr_28 [i_7] [9]) : (arr_15 [i_8])))) ? (((6484168591587335220 ? 0 : 95))) : ((var_2 ? var_10 : var_5)))) : var_6));

            for (int i_9 = 0; i_9 < 15;i_9 += 1)
            {
                arr_35 [i_7] [0] [i_8] [i_9] = (min(((var_6 ? var_5 : var_10)), (max((arr_32 [2] [i_8 + 1]), (max((arr_23 [i_7] [i_8] [i_7]), var_8))))));
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 15;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 15;i_11 += 1)
                    {
                        {
                            var_23 *= ((((max((((arr_39 [i_11]) ? var_9 : var_6)), ((((arr_39 [i_11]) >> (var_11 - 166))))))) ? ((max(65528, -1))) : (arr_19 [0] [i_8] [i_7])));
                            arr_41 [i_7] [i_7] [i_7] [1] = var_10;
                            var_24 = (max(var_24, var_4));
                        }
                    }
                }
            }
            arr_42 [i_7] [5] [i_7] &= ((((var_4 ? var_6 : (arr_30 [i_8 + 1]))) | (((8 ? 38 : 1912358992)))));
        }
        arr_43 [i_7] [i_7] = var_8;
    }
    var_25 = var_0;
    #pragma endscop
}

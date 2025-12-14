/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30909
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = 224;
        var_18 = var_1;
    }
    for (int i_1 = 1; i_1 < 19;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {

            /* vectorizable */
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                var_19 = (max(var_19, ((((arr_4 [i_2]) - (arr_4 [i_2]))))));
                arr_10 [i_1] [i_2] [i_3] = (((arr_4 [i_1]) == var_7));
                var_20 &= ((-(~var_6)));
                arr_11 [i_1] = (((arr_8 [i_1 + 1] [i_1 - 1] [i_1 + 1]) ? -var_3 : (((arr_5 [i_1]) ? var_11 : (arr_7 [i_1] [i_1])))));
            }
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                var_21 = (min(var_21, ((max(((((arr_9 [i_4]) ? (arr_9 [i_4]) : (arr_5 [i_4])))), (min(1, ((min(1, 1))))))))));

                for (int i_5 = 1; i_5 < 1;i_5 += 1)
                {
                    var_22 = ((~(arr_4 [i_1])));
                    arr_16 [i_1] [i_1] = ((244 ? -var_5 : ((224 ? (arr_8 [i_5] [i_1] [i_1]) : (arr_15 [i_1 + 1] [i_1] [i_2] [i_4] [i_5] [i_2])))));
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    arr_19 [i_1] [i_4] [i_1] = ((((65299 || (-9223372036854775807 - 1)))));
                    arr_20 [i_6] [i_4] [i_4] [i_1 + 1] |= ((-46 - (arr_14 [i_2] [i_4] [i_4] [i_1 + 1])));
                    arr_21 [i_1 + 1] [i_1] [i_4] [i_6] = (((var_10 ? var_0 : var_4)));
                    var_23 = var_12;
                }
            }
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                arr_26 [i_1] [i_2] = (((((9223372036854775807 ? (arr_7 [i_1 - 1] [i_1]) : (arr_22 [i_1 - 1] [i_1] [i_1 + 1])))) ? ((-(arr_22 [i_1 - 1] [i_1] [i_1 - 1]))) : (var_12 || var_8)));
                var_24 = (arr_7 [i_2] [i_1]);
            }

            for (int i_8 = 0; i_8 < 20;i_8 += 1)
            {
                arr_29 [i_1] = (((-1319066799 - 65306) || 14021));
                var_25 = (max(var_25, (((~(((((244 ? var_12 : var_1))) ? (max(var_4, var_8)) : (max(var_0, (arr_22 [i_1 - 1] [i_2] [i_8]))))))))));
                arr_30 [i_8] [i_2] [i_1] = (arr_3 [i_8]);
                var_26 = ((-(max((min((arr_28 [i_1] [i_1]), (arr_9 [i_1]))), (arr_22 [i_2] [i_1] [i_2])))));
            }
            for (int i_9 = 0; i_9 < 20;i_9 += 1)
            {
                var_27 = ((var_9 - ((((((var_3 ? -1 : (arr_9 [i_1])))) == (min(var_6, 224)))))));
                var_28 -= -3248732230834458314;
                arr_34 [i_2] [i_9] &= var_4;
            }
            var_29 = (max(var_29, (((((max(65312, ((65327 >> (-1 + 27)))))) || var_0)))));
            var_30 = var_9;
        }
        var_31 = (min(var_2, ((var_6 ? (((arr_6 [i_1 + 1] [i_1]) ? (arr_4 [i_1]) : var_10)) : (min(255, (arr_32 [i_1])))))));
    }
    for (int i_10 = 1; i_10 < 19;i_10 += 1) /* same iter space */
    {
        arr_38 [i_10] [i_10] = (min((min((arr_6 [i_10] [i_10]), (max(var_11, 3248732230834458320)))), 3248732230834458328));
        var_32 = (min(-var_7, var_5));
    }
    var_33 = ((-(((min(18446744073709551615, var_7)) - var_10))));
    var_34 -= var_10;
    #pragma endscop
}

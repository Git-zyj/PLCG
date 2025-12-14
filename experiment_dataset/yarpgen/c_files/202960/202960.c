/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202960
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_6;

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_20 += (min((arr_1 [i_0 + 1]), 183));

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
            {
                arr_7 [i_2] [i_2] [i_0] [i_0] = (((arr_5 [i_0 + 1]) ? (((arr_5 [i_0 + 1]) ? 1 : (arr_5 [i_0 + 1]))) : ((max(139, (arr_5 [i_0 + 1]))))));
                arr_8 [i_2] = arr_5 [i_0 + 1];

                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    arr_12 [i_2] [i_3] = var_16;
                    var_21 = (((arr_2 [i_0]) ? ((((arr_2 [i_0 + 1]) && (arr_2 [i_0 + 1])))) : 1));
                }
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {

                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        var_22 += (arr_2 [i_0 + 1]);
                        var_23 += ((1 ? 239 : (((((42 ? 1 : 234)) >= ((253 - (arr_18 [i_0] [i_1] [i_2] [i_4]))))))));
                        var_24 |= 235;
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        arr_21 [i_0] [i_1] [i_2] [i_4] [i_6] = (((arr_4 [i_0] [i_0 + 1] [i_0 + 1] [i_0]) << (arr_20 [i_0] [i_0 + 1] [i_4])));
                        arr_22 [i_1] [i_1] [i_0] [i_1] [i_0] &= (((arr_15 [i_0 + 1]) ? 157 : (arr_19 [i_0 + 1] [i_1] [i_1] [i_1] [i_1])));
                        var_25 = (((arr_1 [i_0 + 1]) ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 + 1])));
                        var_26 = (max(var_26, (239 == 1)));
                        var_27 = (min(var_27, ((((arr_11 [i_0] [i_0] [i_0] [i_6]) + 21)))));
                    }
                    var_28 = ((((1 ? var_13 : (((arr_4 [i_0] [i_0] [i_2] [i_2]) << var_16)))) % (arr_5 [i_0 + 1])));
                }
            }
            for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
            {
                arr_26 [i_1] [i_1] [i_1] = (((min((((arr_2 [i_0]) != 255)), 1))) <= (((arr_20 [i_0] [i_1] [i_1]) ^ ((var_3 ? (arr_16 [i_1] [i_1] [i_7] [i_7] [i_7]) : (arr_20 [i_1] [i_1] [i_1]))))));
                var_29 *= 21;
            }

            for (int i_8 = 1; i_8 < 11;i_8 += 1)
            {
                arr_30 [i_8] [i_8] = 93;

                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    var_30 = (arr_15 [i_0]);
                    var_31 |= var_4;
                    arr_33 [i_8] = ((((((arr_17 [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_8 + 1]) ^ (arr_19 [i_8] [i_1] [i_0] [i_1] [i_0])))) ? (arr_10 [i_0] [i_0] [i_0]) : ((max(219, (arr_27 [i_0 + 1] [i_0]))))));
                    var_32 = arr_11 [i_0] [i_0] [i_0] [i_0];
                }
                var_33 = (max(var_33, (((((min((arr_27 [i_8] [i_1]), (arr_27 [i_0] [i_0])))) / ((((arr_27 [i_0] [i_1]) >= (arr_27 [i_1] [i_0 + 1])))))))));
            }
        }
    }
    for (int i_10 = 0; i_10 < 16;i_10 += 1)
    {
        arr_36 [i_10] [i_10] = arr_34 [i_10] [i_10];

        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            var_34 += ((~((~(arr_35 [i_10])))));
            arr_39 [i_10] = ((((((arr_34 [i_10] [i_10]) == (arr_34 [i_10] [i_10])))) & (arr_34 [i_10] [i_11])));
        }
    }
    #pragma endscop
}

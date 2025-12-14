/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203801
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_13;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_15 = ((!((max(var_3, var_10)))));
        arr_3 [i_0] = ((((min((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_0])))) < ((((3981162972974909107 ? 237 : var_12))))));
        var_16 = ((-(!1076650577)));

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_17 = 19;
            var_18 = ((var_2 ? var_5 : ((((max(8970564170920760678, (arr_2 [i_0] [i_1])))) ? ((72 ? (-2147483647 - 1) : (arr_2 [i_0] [i_1]))) : (((arr_0 [i_1]) ? (arr_6 [i_0] [i_1] [i_0]) : 255))))));
        }
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {

            for (int i_3 = 1; i_3 < 19;i_3 += 1)
            {
                arr_14 [i_3] [i_2] [i_0] = (max((min(((var_10 - (arr_6 [i_0] [i_2] [i_3]))), var_0)), ((max(var_13, 15186)))));

                for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
                {
                    var_19 = (min(var_19, ((!(var_1 | -var_10)))));
                    arr_17 [i_0] [i_2] |= ((((((arr_16 [i_4] [i_3 - 1] [i_2] [i_0]) * var_6))) ? ((min((arr_1 [i_0] [i_2]), (arr_16 [i_0] [i_2] [i_3 + 1] [i_4])))) : (((arr_1 [i_0] [i_2]) ? (arr_16 [i_0] [i_2] [i_2] [i_4]) : var_9))));
                }
                for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
                {
                    var_20 = (min(var_20, ((min((arr_16 [i_5] [i_5] [i_5] [i_5]), ((-(max(var_3, var_6)))))))));
                    arr_22 [i_0] [i_0] [i_5] [i_5] = 1;
                    var_21 = (((var_12 & (arr_12 [i_3 + 1] [i_3] [i_3]))));

                    for (int i_6 = 2; i_6 < 19;i_6 += 1)
                    {
                        arr_26 [14] [i_2] [i_3] [14] [i_5] = ((((arr_7 [i_3]) < ((var_10 ? 2030810979117483808 : (arr_18 [2] [i_5] [i_5] [0]))))));
                        var_22 = (var_2 / var_2);
                        arr_27 [i_0] [i_5] [i_3] [i_0] [i_6] = ((((((arr_9 [i_6]) ? -1076650577 : (arr_1 [i_5] [i_6])))) ? (var_1 > var_1) : (arr_1 [i_3 + 1] [i_6 - 2])));
                        arr_28 [16] [i_5] [i_5] [i_2] [i_5] [i_0] [i_0] = (max((((arr_23 [i_0] [i_2] [i_0] [i_5] [i_0] [i_5] [i_3 + 1]) + (arr_10 [i_0] [i_2] [0] [0]))), ((var_3 - (arr_20 [i_5] [i_5] [i_5] [i_2])))));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        var_23 = (min(var_23, (arr_2 [i_0] [i_3])));
                        var_24 &= (((arr_5 [i_0] [i_0] [i_3 + 1]) % (arr_23 [i_0] [i_3 - 1] [i_3] [i_5] [i_2] [i_0] [16])));
                        var_25 = (min(var_25, ((((arr_31 [i_7] [i_5] [i_5] [i_5] [i_7]) < (arr_24 [i_2]))))));
                    }
                }
                for (int i_8 = 0; i_8 < 20;i_8 += 1) /* same iter space */
                {
                    arr_36 [i_8] [i_8] [i_8] [i_8] = var_12;
                    arr_37 [i_2] [i_2] [i_3 - 1] [i_8] [1] = var_9;
                    arr_38 [i_0] = ((-(max((arr_20 [i_0] [i_0] [i_3 + 1] [i_3 + 1]), var_3))));

                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        var_26 = (max(var_26, -240));
                        var_27 = (max(var_27, var_9));
                    }
                    for (int i_10 = 4; i_10 < 18;i_10 += 1)
                    {
                        var_28 = (min((arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (((arr_23 [i_0] [i_0] [i_2] [i_3] [i_0] [i_8] [i_10 - 1]) ^ (arr_23 [i_0] [i_0] [i_2] [i_3] [i_2] [i_8] [i_10 - 2])))));
                        arr_44 [i_0] [i_0] [i_8] [i_8] [i_10] = ((((!(arr_23 [i_10] [i_10] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_2] [i_0]))) ? -26 : (212 < -1)));
                        var_29 = max((-1378831281 % var_3), ((((arr_33 [i_0] [i_2] [i_3] [i_8]) ? var_10 : (arr_33 [i_0] [i_2] [i_2] [i_10 + 1])))));
                    }
                }
            }
            var_30 = (min(var_30, ((((arr_7 [i_0]) < (var_8 > 0))))));
        }
        for (int i_11 = 0; i_11 < 20;i_11 += 1)
        {
            var_31 = arr_34 [19] [i_0] [i_0] [i_11];
            var_32 = (arr_5 [14] [i_11] [i_11]);
            var_33 = (arr_6 [i_0] [i_0] [i_11]);
        }
    }
    #pragma endscop
}

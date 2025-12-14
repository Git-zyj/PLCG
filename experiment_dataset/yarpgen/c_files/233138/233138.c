/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233138
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_16;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = var_16;

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_20 = 121;
                    arr_9 [i_0] [i_2] [i_0] = 252;
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {

                    for (int i_4 = 1; i_4 < 22;i_4 += 1)
                    {
                        var_21 = var_18;
                        var_22 = (min(var_22, (((1438179568 ? var_10 : var_5)))));
                        var_23 = (max(var_23, (37 % var_10)));
                    }
                    arr_16 [i_0] [i_1] [i_1] = ((~(~14284195592766292671)));
                    var_24 = (i_0 % 2 == 0) ? ((((arr_3 [i_0] [i_0] [i_1 + 2]) << (var_2 - 14425791562981022987)))) : ((((((arr_3 [i_0] [i_0] [i_1 + 2]) + 9223372036854775807)) << (var_2 - 14425791562981022987))));

                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        var_25 = ((var_12 ? var_4 : 194));
                        var_26 = 1678012460;
                        var_27 = (min(var_27, -1678012456));
                    }
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            var_28 = (((arr_4 [i_0]) % (arr_4 [i_0])));
                            arr_26 [i_0] [i_0] = var_15;
                        }
                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            arr_29 [i_6] [i_0] [i_1 - 1] [i_6] = ((-((134 ? 1048441907 : var_10))));
                            var_29 += ((var_11 | (4965850080025564885 > 0)));
                            var_30 *= -var_4;
                        }
                        for (int i_9 = 0; i_9 < 23;i_9 += 1)
                        {
                            arr_33 [i_3] [i_1 + 1] [i_0] [i_0] [i_9] = ((~((-(-32767 - 1)))));
                            var_31 = (~1);
                            var_32 = (arr_15 [i_0] [i_1 + 2] [i_3] [i_6] [i_9]);
                            arr_34 [i_0] [i_1] [i_0] [i_0] [i_9] = var_12;
                            arr_35 [i_0] [i_6] [i_3] [i_0] [i_0] = 3583375251;
                        }
                        for (int i_10 = 0; i_10 < 23;i_10 += 1)
                        {
                            var_33 = (max(var_33, -3987394259242908135));
                            arr_40 [i_0] [i_0] [i_0] [i_0] = ((-(arr_11 [i_0] [i_1 + 1])));
                        }
                        arr_41 [i_6] [i_0] [i_0] [i_0] [i_0] = 3445377759829663206;
                    }
                }
            }
        }
    }
    var_34 = 711592028;
    var_35 = var_18;
    var_36 = (max(var_36, (((4294967295 ? var_7 : (min(var_18, var_13)))))));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25606
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 17556231238187426473;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    var_12 = ((((max((arr_2 [i_0]), (arr_2 [i_0])))) ? ((((((arr_0 [i_0]) ? 291798865 : var_5))) ? (((~(arr_0 [i_0])))) : (max(var_1, var_7)))) : ((((((139611588448485376 / (arr_1 [i_0])))) ? ((7 ? var_10 : (arr_6 [9] [i_2] [i_2]))) : var_5)))));
                    var_13 = (min(var_13, (arr_0 [16])));
                    arr_7 [i_0] = (min(((((arr_4 [i_0] [i_1 - 1] [i_2] [i_0]) ? ((var_2 * (arr_2 [i_0]))) : (max(var_8, (arr_2 [i_0])))))), (((((min((arr_0 [i_0]), var_7)))) - ((var_4 ? -1825809698 : 18446744073709551615))))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
                {
                    var_14 = (max(var_14, (arr_4 [i_0] [i_0] [i_0] [i_0])));
                    arr_12 [i_0] = var_7;
                    var_15 *= ((~((var_8 ? (arr_10 [i_1]) : 1))));
                }
                for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
                {
                    var_16 ^= (((arr_3 [i_0]) ^ (max(((((arr_13 [i_0]) ? var_10 : (arr_5 [i_4] [i_1] [i_0])))), (arr_9 [i_4])))));
                    arr_17 [i_0] [i_0] = (arr_3 [i_0]);
                    arr_18 [4] [i_0] [4] [9] = (arr_3 [i_1]);
                }
                var_17 = var_10;

                /* vectorizable */
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    var_18 = ((-(arr_20 [i_1 - 1])));
                    var_19 = (min(var_19, (((var_0 - (4294967295 >= 0))))));
                    var_20 = (max(var_20, (((!(arr_19 [i_1] [i_5]))))));
                    var_21 = (~(arr_13 [i_0]));
                }
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 19;i_8 += 1)
                        {
                            {
                                arr_30 [i_0] [i_0] [i_6] [i_0] [i_8] = (max(((((~136471709) / 1561827945))), (max(((1 + (arr_26 [i_1] [i_0] [i_1]))), -var_9))));
                                arr_31 [i_0] [i_1] [3] [i_0] [i_8] = ((((((max((arr_10 [i_7]), 0))) ? (((max((arr_0 [i_0]), var_0)))) : ((var_0 ? (arr_1 [i_0]) : 3942209800)))) >> (((max((arr_22 [i_0] [i_1 - 1] [i_6] [3]), var_8)) - 4126375515))));
                                var_22 = (min(var_22, (arr_15 [i_0] [i_0] [17] [i_0])));
                            }
                        }
                    }
                    var_23 = (max((((arr_14 [i_0] [i_0] [i_6]) ? ((-(arr_8 [i_0] [i_0] [i_0]))) : (((arr_26 [0] [i_0] [i_6]) ? 1830028404 : (arr_0 [i_0]))))), ((((arr_16 [i_0] [i_0] [i_0] [i_0]) != (((118 ? var_3 : (arr_4 [i_0] [i_1] [i_6] [i_6])))))))));
                    var_24 = ((((~(arr_20 [i_1 - 1]))) | var_5));

                    for (int i_9 = 0; i_9 < 19;i_9 += 1)
                    {
                        var_25 = 1073741824;

                        for (int i_10 = 0; i_10 < 19;i_10 += 1)
                        {
                            var_26 ^= (min(var_7, ((~(arr_23 [0] [i_6] [i_6] [i_1 - 1])))));
                            arr_37 [i_0] [i_0] [i_0] [6] [i_0] [i_0] [i_0] = (((((var_9 ? ((var_0 ? -7497638872664637175 : 1)) : (arr_19 [i_0] [i_0])))) ? 127 : ((min((max(var_0, (arr_35 [i_1]))), var_0)))));
                        }
                    }
                    arr_38 [i_0] [i_0] = (!var_4);
                }
                var_27 = (min(var_27, 18446744073709551588));
            }
        }
    }
    var_28 = (max(var_28, var_9));
    #pragma endscop
}

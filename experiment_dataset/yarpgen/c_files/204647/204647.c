/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204647
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_8 [i_0] = ((((((((arr_4 [i_0] [i_0] [i_0]) ? 1078710999 : (arr_6 [i_0] [i_0])))) ? (arr_2 [i_0]) : (((1 ? (arr_5 [14]) : 1))))) | 1));
                var_19 -= (min((min((((arr_2 [10]) | 181)), (arr_3 [0]))), ((((arr_1 [10]) ^ (arr_1 [2]))))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        arr_14 [i_3] [i_3] [i_3] [i_0] = (arr_3 [i_0]);

                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            var_20 = arr_9 [i_4] [i_4] [i_4] [i_4];
                            var_21 = (arr_2 [i_0]);
                        }
                        for (int i_5 = 1; i_5 < 17;i_5 += 1) /* same iter space */
                        {
                            var_22 = (((arr_2 [i_0]) ? (((arr_19 [i_2] [i_2] [i_2] [i_2] [i_2]) ? (arr_5 [i_0]) : (arr_6 [i_0] [i_0]))) : (arr_19 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0])));
                            var_23 = 50049;
                            arr_21 [i_3] [i_1] [i_2] [i_3] [i_1] [i_3] &= (((arr_9 [i_3] [i_3] [i_3] [i_3]) ? (arr_18 [i_1]) : (((arr_1 [i_3]) ? 1 : (arr_16 [i_0] [i_0] [i_3] [i_0] [i_2] [i_3])))));
                        }
                        for (int i_6 = 1; i_6 < 17;i_6 += 1) /* same iter space */
                        {
                            var_24 = (((arr_2 [i_0]) + ((((arr_13 [1] [i_3] [i_3]) ? 1 : (arr_7 [i_6 + 1] [i_2] [i_2]))))));
                            var_25 += ((arr_4 [i_6 - 1] [i_6 - 1] [i_0 - 1]) ? 169 : (arr_4 [i_6 + 1] [i_1] [i_0 - 1]));
                        }
                        for (int i_7 = 1; i_7 < 17;i_7 += 1) /* same iter space */
                        {
                            var_26 += (arr_2 [i_3]);
                            arr_27 [i_0] [i_0] [i_0] [i_0] = (((arr_5 [i_3]) ? (((arr_9 [i_0 + 1] [1] [i_0] [i_0]) / (arr_4 [i_3] [i_3] [i_3]))) : (((arr_15 [i_0 - 1]) << (56276 - 56276)))));
                            var_27 = arr_22 [i_2] [i_7 + 1] [i_3] [i_1] [i_2] [i_1] [i_0];
                            var_28 = ((((((arr_1 [i_0]) ? (arr_4 [i_0] [i_0] [i_0]) : (arr_18 [i_0])))) ? (arr_15 [i_2]) : (((arr_12 [i_0]) ? (arr_9 [i_0] [i_0] [i_0] [i_0]) : (arr_15 [i_0 - 1])))));
                        }
                        var_29 = (max(var_29, (((((((arr_18 [i_0]) ? (arr_26 [i_0] [i_0] [i_0 + 1]) : (arr_13 [i_0] [i_1] [i_2])))) ? (arr_0 [i_1]) : (arr_15 [i_0 + 1]))))));
                        var_30 = (((arr_26 [i_0] [i_0 + 1] [i_0 + 1]) != (arr_10 [i_0 + 1] [i_0 + 1] [i_0 + 1])));
                    }
                    var_31 = (arr_24 [i_0 - 1]);
                }
                arr_28 [i_0] [i_0] [i_0] = (((max(((max((arr_3 [i_0]), (arr_11 [i_0] [i_0] [i_0] [i_0])))), (arr_6 [i_0 + 1] [i_0 - 1]))) % (((min((((arr_10 [i_1] [i_1] [i_0]) != 0)), (((arr_7 [i_0] [i_1] [i_1]) && (arr_0 [i_1])))))))));
            }
        }
    }

    /* vectorizable */
    for (int i_8 = 0; i_8 < 0;i_8 += 1)
    {
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 11;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 11;i_10 += 1)
            {
                {
                    var_32 = (((arr_29 [i_9]) && (~14439453343321714251)));
                    var_33 = (((((arr_2 [i_9]) & (arr_12 [i_9]))) + (((1024 ? (arr_12 [i_9]) : (arr_16 [i_10] [i_10] [i_9] [i_9] [i_8 + 1] [i_8]))))));
                    var_34 = -1988438219;
                }
            }
        }
        arr_38 [i_8] = 1;

        for (int i_11 = 1; i_11 < 9;i_11 += 1)
        {
            arr_41 [i_8] [i_8] [i_8] = (((arr_40 [i_11] [i_11] [i_11]) << (1988438205 - 1988438202)));
            var_35 = (((arr_29 [i_11 + 2]) ? (arr_33 [i_11 + 1] [i_11 + 2]) : (((arr_36 [i_8] [i_8]) ? (arr_22 [i_8] [i_8] [i_8] [i_8] [4] [i_8] [i_8]) : 207))));
            arr_42 [i_8] [i_8] = ((0 >> ((((181 ? (arr_35 [i_8]) : 0)) - 17327812443260827633))));
            var_36 -= ((((((arr_9 [i_8] [i_8 + 1] [i_8 + 1] [i_8]) + (arr_10 [i_8] [17] [i_8])))) ? (arr_29 [i_8]) : (arr_32 [i_8 + 1])));
            arr_43 [i_8] [i_8] = (arr_15 [i_8 + 1]);
        }
    }
    #pragma endscop
}

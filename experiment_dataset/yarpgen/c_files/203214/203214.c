/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203214
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((-((((var_13 ? var_16 : var_12))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_13 [i_1] = (((((20739 ? 15674 : (arr_11 [i_0] [i_0] [i_0] [i_0])))) ? ((var_15 ? var_15 : 0)) : (((arr_2 [i_1]) ? (arr_9 [i_4] [i_4] [i_2] [i_1]) : 8))));
                                var_21 = (-(((((var_11 ? var_1 : (arr_6 [i_0] [i_0] [i_3] [i_1])))) ? (((min((arr_8 [i_3] [i_3] [i_3] [i_3] [i_3]), (arr_3 [i_2] [i_3] [i_4]))))) : ((-(arr_7 [6] [i_1] [i_2] [6] [i_4]))))));
                                var_22 = ((var_9 ? (((-(((!(arr_8 [i_4] [i_1] [i_2] [i_1] [i_0]))))))) : (max(-var_17, ((min(14690, 248)))))));
                            }
                        }
                    }
                    var_23 += (min(((((((-1 ? 2567993504 : -1))) ? (max((arr_6 [i_0] [i_0] [i_0] [i_0]), 1740344819)) : ((var_19 ? (arr_11 [i_0] [i_1] [i_2] [i_2]) : var_12))))), 7900568854397778333));
                    var_24 = (max(((~(max(var_5, 44797)))), ((((var_17 ? var_3 : (arr_4 [i_2] [i_1] [i_0] [i_0])))))));
                }
            }
        }
    }
    var_25 = (min(var_25, var_11));
    var_26 = (min(((-((1 ? var_4 : 6)))), (min((~20739), (max(8, -1))))));
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 19;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                {
                    var_27 = (min(var_27, (((-(min(-1, (max(-1463650933, 1353200079793095501)))))))));
                    var_28 = (((((arr_17 [i_5 - 1] [i_5 - 1] [i_6]) ? (arr_17 [i_5 + 1] [i_5 + 1] [i_6]) : var_6))) ? -var_9 : 1);
                    var_29 = 7929017476081736475;
                    var_30 = (min(var_30, ((max((((9223372036854775807 ? 1715573642483230346 : 220))), ((((!252) - ((max(1, 1)))))))))));

                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        var_31 = (-(max(((0 ? (arr_1 [i_6]) : 2147483647)), (1 * 0))));
                        var_32 = ((782446283 ? (((arr_6 [i_5] [i_5 + 1] [i_5] [i_8]) ? ((1 ? var_6 : var_0)) : (!1))) : (((var_5 ? (arr_10 [i_5]) : 1)))));
                    }
                }
            }
        }
    }
    #pragma endscop
}

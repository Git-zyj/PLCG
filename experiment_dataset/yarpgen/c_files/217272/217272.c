/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217272
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_17 ? (2579260374 & 69) : (188 / var_16)));

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_19 = var_14;
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {

                    for (int i_3 = 3; i_3 < 15;i_3 += 1)
                    {

                        for (int i_4 = 2; i_4 < 16;i_4 += 1) /* same iter space */
                        {
                            var_20 *= ((((max((arr_7 [i_1 - 1]), (arr_7 [i_1 + 1])))) == (((arr_7 [i_1 + 1]) ? (arr_7 [i_1 - 1]) : 195))));
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_4 - 2] = (min((arr_2 [i_3] [i_0] [i_0]), (arr_7 [i_2])));
                        }
                        for (int i_5 = 2; i_5 < 16;i_5 += 1) /* same iter space */
                        {
                            arr_19 [i_0] [i_2] [i_1] [10] [i_2] [i_0] [i_5] = (((48 % 2047) <= (((arr_6 [i_0 - 1] [i_1 - 1] [i_2 + 1]) * (var_10 == 205)))));
                            arr_20 [i_0] [9] [i_2 - 1] [i_0] [i_5] = (max(((((arr_12 [i_0] [i_1] [11] [i_3] [i_5]) * 831747496))), (min(var_15, (min(3, var_15))))));
                            arr_21 [i_0 + 2] [i_0 + 2] [i_1] [i_2] [i_3] [i_3] [13] = (arr_4 [i_0 + 1]);
                        }

                        for (int i_6 = 3; i_6 < 14;i_6 += 1) /* same iter space */
                        {
                            arr_24 [i_6] [i_1 + 1] [i_2] [i_1 + 1] [i_0] [11] = ((!(((((arr_11 [13] [i_1 - 1] [6] [i_1 - 1] [9]) >= var_7)) && 3306))));
                            var_21 = (min(var_21, ((((arr_13 [i_2] [i_3] [i_6]) ? ((((((arr_15 [i_6 - 2] [i_2] [2]) - 12))))) : (((arr_4 [i_3]) ? ((5 / (arr_9 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]))) : ((((arr_0 [0]) ? (arr_22 [i_3] [i_2 - 1] [i_2]) : var_10))))))))));
                            var_22 = (((((((arr_11 [15] [16] [i_2] [i_1] [i_0]) > 7)))) ? (((arr_10 [15] [15] [15] [2]) >> (-4 - 4294967274))) : ((((3322 && 8) && (arr_2 [i_0 + 2] [i_1] [i_0 + 1]))))));
                        }
                        for (int i_7 = 3; i_7 < 14;i_7 += 1) /* same iter space */
                        {
                            var_23 = (min((arr_12 [i_1] [i_1] [i_3 + 1] [i_7 + 3] [15]), 46));
                            var_24 = (max(var_24, 26));
                            arr_27 [i_2] [i_0] [i_2] = ((-(min(252, -5746638702828381584))));
                        }
                        arr_28 [i_3] [i_2 + 1] [i_1] [i_1] [i_1] [i_0] &= ((((min((!var_12), ((65535 % (arr_3 [i_1] [i_0])))))) - (min(2222306282, ((((arr_14 [i_3] [i_3] [i_2] [i_1] [i_1] [i_0] [i_0]) ? (arr_15 [i_0 - 1] [i_2] [4]) : (arr_3 [i_3] [i_3]))))))));
                        var_25 = -7;
                        arr_29 [i_0] [i_1] [0] [i_3] [i_3] [i_3] = ((min(169, 127)));
                    }
                    arr_30 [i_2] [i_1] [i_0] = ((23040 ? (((((var_4 - (arr_11 [i_2] [6] [i_1] [i_1 + 2] [i_1]))) + (arr_12 [i_0] [i_0] [3] [i_2] [i_2])))) : (((5 + (arr_6 [i_0] [i_1] [i_2]))))));
                }
            }
        }
    }
    for (int i_8 = 1; i_8 < 8;i_8 += 1)
    {
        arr_35 [i_8] = (((6 ? 18446744073709551608 : 8)));
        var_26 = ((((!(arr_13 [i_8] [i_8] [13]))) ? (((((arr_18 [i_8] [i_8] [i_8 - 1] [i_8] [i_8]) == var_11)) ? ((var_7 ? 1939286284 : 212)) : (!var_13))) : (min(var_6, (arr_34 [i_8] [i_8 - 1])))));
        arr_36 [i_8 - 1] [i_8] = ((3250222064 ? (((((max(var_10, (arr_4 [i_8])))) ? (max(5, (arr_33 [8] [i_8]))) : (((var_10 * (arr_22 [i_8] [2] [2]))))))) : (min(255, 753722575455296261))));
    }
    #pragma endscop
}

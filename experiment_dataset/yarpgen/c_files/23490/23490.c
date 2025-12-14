/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23490
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_13 = ((64 ? -114 : 0));
                var_14 = ((((var_2 ^ ((((var_10 >= (arr_2 [i_1] [i_1]))))))) ^ -1));
                var_15 = var_0;

                /* vectorizable */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    arr_9 [i_1] [i_1] [i_1] [i_1] = (((arr_7 [i_0] [i_0]) ? (arr_8 [i_0] [i_1] [i_1]) : (arr_0 [i_0] [i_2])));
                    var_16 += (arr_4 [i_0] [i_1] [i_0]);
                }
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 10;i_5 += 1)
                        {
                            {
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] &= (max((((145083054 / var_0) ? (min(7, var_3)) : (!0))), ((min((min(114, (arr_12 [i_0] [i_0] [i_0]))), ((64 ? (arr_3 [i_4] [i_4]) : (arr_5 [i_0]))))))));
                                arr_17 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] = ((((109 | (828 - 2126103774))) < ((-var_5 ? (((18446744073709551596 ? -35320353 : 51))) : (min(-25, 3456071005))))));
                                var_17 = -8462359048352904317;
                            }
                        }
                    }
                    var_18 ^= (((((12551580106715391782 ? 6789065361650516913 : 830)) % ((-5520229365865127581 ? var_4 : var_6)))));
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    var_19 = (max(var_19, var_3));
                    arr_21 [i_0] [i_1] [i_0] [i_0] = 16840418426320003402;
                    var_20 += ((!(arr_15 [i_0] [i_1])));
                }
                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            {
                                var_21 = ((((((((58 ? (arr_12 [i_1] [i_1] [i_1]) : (arr_18 [i_7] [i_7] [i_7] [i_7])))) - 2575552111))) * ((var_2 ? var_1 : 18414844422899165407))));
                                var_22 = (min(var_22, (((!((!(arr_18 [i_0] [i_1] [i_7] [i_0]))))))));
                            }
                        }
                    }

                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        var_23 = ((var_12 * ((((var_8 ? (arr_24 [i_0] [i_0] [i_0] [i_0]) : 12551580106715391782)) * (arr_19 [i_0] [i_0] [i_0])))));
                        var_24 ^= (208151767 != 643309783);
                        var_25 = (2575552111 / -32751);
                    }
                    var_26 = ((((!(((-(arr_10 [i_0] [i_0] [i_0]))))))));
                }
                var_27 = (max(var_27, (arr_20 [i_0] [i_0] [i_0])));
            }
        }
    }
    var_28 = ((((min(6663152497689467582, (-9223372036854775807 - 1)))) * (max((var_11 / var_12), var_8))));
    #pragma endscop
}

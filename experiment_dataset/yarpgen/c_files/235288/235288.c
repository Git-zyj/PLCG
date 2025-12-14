/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((((var_3 | 1) <= (var_3 * 1)))) << (((((var_1 & var_0) | (var_0 <= var_0))) - 32844))));
    var_13 *= (((((var_7 < var_2) >= (49918 > var_10)))) >= ((((1 | var_4) < (var_9 + 7471788766594027978)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_14 += ((((((var_5 / (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) * ((((arr_1 [i_3]) * var_5))))) / (((var_11 / 1344998109) / (5131713811215495964 / var_11)))));
                                var_15 ^= (((((63916 && var_0) * (var_1 || 0))) & ((((((arr_13 [i_0] [i_2] [i_0]) ^ (arr_0 [i_0]))) < (var_2 <= var_2))))));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
                    {
                        arr_16 [i_1] [i_1] [i_2] [i_1] = ((((0 & (36010 + 0))) * (((((var_5 * (arr_1 [0]))) * (var_1 && 60477))))));
                        var_16 = (((((var_0 / var_6) * ((((arr_2 [i_0] [i_1] [i_2]) << (arr_2 [i_0] [i_0] [i_0])))))) & ((((var_7 + 1) + ((((arr_6 [i_1] [i_1]) + (arr_2 [i_1] [i_1] [i_2])))))))));
                    }
                    for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
                    {
                        arr_20 [i_1] [11] = ((((((((arr_14 [i_0] [i_1] [i_2] [i_2] [i_6]) && (arr_8 [i_0] [12] [12] [i_1])))) % ((((arr_9 [i_6] [i_2] [4] [i_0]) && (arr_17 [i_0] [1] [1] [i_0] [i_0] [i_0])))))) % ((((((var_5 * (arr_9 [i_0] [8] [1] [i_6])))) || (var_3 / 1))))));
                        arr_21 [i_0] [6] [i_2] [i_1] = (((((1 * 65535) != (var_2 / -7706077918425114326))) && (((((((var_6 / (arr_8 [i_1] [i_0] [i_1] [i_1]))) + 9223372036854775807)) >> (((var_5 & var_0) - 8421)))))));
                    }
                }
            }
        }
    }
    var_17 = (((((var_2 ^ var_5) * (1 >> var_8))) - ((((60471 + 1) / (var_4 / var_9))))));
    #pragma endscop
}

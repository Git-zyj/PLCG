/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49070
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_12 = ((((((((arr_0 [i_0] [i_0]) >= 1))) * (0 * var_5))) % ((((var_4 ^ (arr_1 [i_0]))) - (var_11 ^ var_10)))));
        var_13 = ((((((((arr_1 [i_0]) | (arr_1 [i_0])))) <= (794612033 + 9110954722717245258)))) ^ (((-14966 > 0) + ((((arr_1 [i_0]) && var_10))))));
    }
    var_14 = (((((((246 > 1) <= ((var_11 >> (var_1 - 4374442619265588129))))))) ^ (((var_7 * var_0) - (9110954722717245280 + var_7)))));
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        var_15 |= (((-1 + var_9) ^ (var_3 ^ 21)));
                        var_16 = (((0 > var_5) - ((((arr_4 [i_1] [i_1]) > (arr_7 [17]))))));
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            {
                                var_17 = (min(var_17, ((((((1 == -1054130307968229740) && ((((arr_7 [i_5]) + 1405))))) && ((((var_6 ^ 0) - ((((arr_11 [10]) > 367974801327970949)))))))))));
                                var_18 = (max(var_18, (((((((var_3 % (arr_3 [i_6]))) >> ((((arr_6 [i_1] [i_1] [i_6]) <= var_3))))) * ((((((arr_8 [i_1]) > var_2))) >> ((-24114 / (arr_7 [1]))))))))));
                                var_19 ^= (((((1371719586 > 2433) && ((((-417010151 + 2147483647) >> var_10)))))) / (((var_0 / var_2) ^ (((-12 && (arr_11 [16])))))));
                                var_20 = ((((((((((arr_14 [i_1] [i_3] [17]) <= (arr_14 [i_1] [i_3] [i_6]))))) >= ((13480835207673847391 + (arr_13 [i_1] [i_3] [i_1] [i_6])))))) ^ (((1 * var_0) * (-17640 * 5)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216998
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_13 = (0 << 0);

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 7;i_3 += 1)
                    {
                        arr_10 [i_0 - 1] [i_1] [i_2] [i_3 + 2] = (((9007199254740991 / 1) > ((var_8 & (arr_0 [i_0 - 1] [i_3 - 1])))));
                        var_14 = (((((var_4 ^ (arr_1 [i_0 - 1] [i_1])))) | (3571196066917163601 ^ 65)));

                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            var_15 = (min(var_15, (((((0 <= (arr_9 [i_4] [i_2]))) || (var_3 && var_2))))));
                            var_16 = (((((-469159406 + 2147483647) << (var_8 - 18059107133707425779))) & (var_4 + 1)));
                            var_17 = (((var_7 / 1) | (1 + 1)));
                            var_18 = (((1 < var_7) != (((arr_11 [i_4] [i_3 - 1] [i_2] [i_1] [i_0 - 1]) * var_3))));
                        }
                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            arr_18 [i_5] [i_3 - 1] [i_3 + 1] [i_2] [i_2] [i_1] [i_0 - 1] = ((((1 & (arr_15 [i_0 - 1] [i_1] [i_1] [i_2] [i_3 - 1] [i_5]))) != (((var_4 ^ (arr_3 [i_3 - 1] [i_5]))))));
                            var_19 += (((((18446744073709551615 && (arr_0 [i_2] [i_3 + 2])))) >> (((arr_1 [i_0 - 1] [i_5]) * 0))));
                        }
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            arr_23 [i_6] [i_1] [i_2] [i_3 - 1] [i_6] = ((((var_1 % (arr_0 [i_1] [i_6]))) >> (((var_9 | var_9) - 114))));
                            arr_24 [i_6] = (((1 != 18446744073709551615) % (((arr_5 [i_1] [i_3 + 3] [i_6]) | (arr_4 [i_0 - 1] [i_1] [i_3 + 3])))));
                            var_20 = (((var_0 != 1) | (1 != var_6)));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 4; i_7 < 16;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            {
                var_21 *= ((((((var_10 % 1458309046) && (1 & 0)))) * (((((arr_28 [i_7 - 2]) >> (((arr_26 [i_8]) - 12666246851199168725)))) & (var_9 <= 0)))));
                var_22 = (((((var_12 <= var_0) | (var_6 && 18446744073709551615))) << (((((((arr_26 [i_7 - 1]) && var_5))) < (var_3 > 1125891316908032))))));
            }
        }
    }
    #pragma endscop
}

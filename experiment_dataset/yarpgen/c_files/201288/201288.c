/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_18 = (((min((max(127, 9223372036854775807)), var_0))) ? (((~var_16) ? var_15 : var_1)) : var_10);
        arr_2 [i_0] [i_0] = var_16;
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_19 = (((~(max(2097151, var_17)))));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                {
                    var_20 = (max(var_20, (((max(-var_8, ((var_5 ? var_15 : 9223372036854775807))))))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            {
                                arr_17 [15] [10] [2] [i_4] [i_4] = (((!(arr_13 [i_2 - 1] [i_2] [i_2] [i_2 - 1] [i_2] [i_2 - 1] [i_1]))));
                                var_21 = (max(((((arr_10 [i_1] [i_2] [i_3] [i_4]) >= 35175782154240))), ((~(((-9223372036854775807 + 9223372036854775807) << (((arr_9 [i_2] [i_3] [i_4] [i_5]) - 97))))))));
                            }
                        }
                    }

                    for (int i_6 = 1; i_6 < 15;i_6 += 1)
                    {
                        arr_21 [i_6] [7] = (+(((-7344427479008207797 / var_5) ? (var_7 - -2010249486950817366) : var_3)));
                        var_22 = (((((-(!9223372036854775807)))) >= ((((((-1550866406 + 2147483647) << (((((-9223372036854775807 - -9223372036854775782) + 35)) - 10))))) ? 1550866405 : 2097151))));
                        arr_22 [6] [i_6] [i_6] = ((((((var_15 ? 4294967295 : var_17)) <= (arr_0 [i_6]))) ? ((((!(arr_5 [i_1] [i_2] [i_3]))))) : (min((((65535 << (var_8 - 2413104695557160330)))), ((var_3 ? var_0 : 9223372036854775807))))));
                        arr_23 [i_1] [i_6] [i_1] [i_1] [i_3] [i_6] = min(65535, 41);
                    }
                    var_23 = var_7;
                    arr_24 [i_3] [i_2] [i_1] = (min((((arr_3 [i_3]) & var_8)), (((var_12 ? 137438953472 : var_8)))));
                }
            }
        }
    }
    var_24 = var_12;
    var_25 = (((((3612028529 ? 1607697361 : (-7954308615441041034 == var_4)))) ? ((var_13 ? 1375880907 : 216974819)) : ((9223372036854775807 ? var_16 : var_14))));
    var_26 = max(var_4, (min((max(1524, var_15)), var_11)));
    var_27 = (min(var_27, ((max(var_6, ((((((((-9223372036854775807 - 1) && var_13)))) >= var_0))))))));
    #pragma endscop
}

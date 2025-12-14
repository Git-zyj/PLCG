/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223536
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_12 = ((-(((arr_1 [i_0]) ? -859 : 8849))));
        var_13 ^= (((arr_0 [6]) ? var_5 : (~-22051)));
        var_14 = ((((((((var_6 ? (arr_1 [i_0]) : var_10))) ? (arr_0 [i_0]) : (arr_1 [i_0])))) ? (8868 | 1337735571) : (((arr_0 [i_0]) ? (arr_1 [i_0]) : ((((arr_1 [i_0]) ? 1 : var_1)))))));
        var_15 = (1556165011 ? -7414147391780184438 : 1);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_16 = ((((!-7414147391780184430) | ((65535 ? (arr_2 [i_0]) : (arr_0 [i_0]))))) == (!1));

                    for (int i_3 = 2; i_3 < 6;i_3 += 1) /* same iter space */
                    {
                        arr_10 [i_0] [i_0] [i_1] [i_0] [i_2] [i_0] = ((7039130428476440354 ? (((((arr_6 [i_3 + 3] [i_0] [i_3 + 4]) || var_0)))) : ((-((-37 ? (arr_9 [1] [i_1] [i_2] [i_3]) : -57))))));
                        var_17 += (((((!(arr_1 [i_1])))) * (13 == 18446744073709551615)));
                    }
                    for (int i_4 = 2; i_4 < 6;i_4 += 1) /* same iter space */
                    {
                        arr_14 [i_0] [i_1] [i_4 + 3] [i_4 + 3] [i_0] = (((arr_9 [i_0] [i_0] [i_0] [i_0]) ? var_11 : (arr_2 [i_0])));

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            var_18 = ((~(arr_8 [i_0] [i_0] [i_2] [i_4 - 2] [i_5])));
                            var_19 = ((((-22051 | (arr_13 [i_0] [i_0] [7] [i_4]))) * ((((arr_7 [i_0] [i_1] [i_2]) - var_8)))));
                        }
                    }
                }
            }
        }
    }

    for (int i_6 = 0; i_6 < 10;i_6 += 1)
    {
        var_20 = (((arr_19 [i_6]) ? ((var_8 ? (arr_1 [i_6]) : (arr_7 [2] [2] [i_6]))) : var_3));
        arr_21 [i_6] = (((((min((arr_11 [i_6] [i_6] [i_6] [i_6] [i_6]), (arr_11 [i_6] [i_6] [i_6] [i_6] [i_6]))))) - -3290917485));
        var_21 = (((arr_19 [i_6]) - (((-11352 ? (arr_6 [i_6] [6] [8]) : -127)))));
        var_22 = (min(var_22, (((!((!(12497447340777711310 == 1))))))));
        var_23 ^= ((!(arr_2 [4])));
    }
    #pragma endscop
}

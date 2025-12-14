/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227144
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_10 = (max((((arr_2 [i_0]) ? (arr_1 [i_0]) : var_0)), (((arr_1 [i_0]) - (arr_2 [i_0])))));
        var_11 = (max(var_11, (arr_2 [i_0])));
        var_12 = 18446744073709551615;
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_13 |= (((~(max((arr_4 [i_1]), (arr_5 [i_1]))))) | (min((arr_5 [i_1]), ((var_4 | (arr_5 [i_1]))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                {
                    var_14 += (max((arr_7 [i_3]), var_3));

                    for (int i_4 = 1; i_4 < 12;i_4 += 1)
                    {
                        var_15 = (((((1 ? 16 : -1278567845))) | 1));
                        var_16 ^= (((max((arr_5 [i_4 + 3]), (arr_5 [i_4 + 3]))) & (var_7 | -606295832306654767)));
                        arr_13 [i_1] [i_2] [i_4 + 3] = ((((((max(7007283501736509483, 18446744073709551615)) ^ (max(12171794263466709702, 28433))))) ? ((((max(var_6, var_8))))) : (((arr_6 [i_2] [i_3] [i_4]) ? (max(22389, 9223372036854775807)) : (((arr_3 [i_1] [i_3]) ? 5035685610296789292 : 25829))))));
                        var_17 = (min(var_17, ((((((arr_5 [i_4 + 2]) ^ var_5)) <= ((var_1 ? (arr_5 [i_4 + 2]) : (arr_5 [i_4 + 1]))))))));
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_18 = (min(var_18, (((((((arr_15 [i_5] [i_5] [i_3] [i_2] [i_2] [i_1]) ? (arr_4 [i_3]) : (~127)))) ? (((((-97 ? 9223372036854775807 : 4294967295))) ^ ((~(arr_5 [i_1]))))) : (((~(arr_6 [i_1] [i_3] [i_5])))))))));
                        var_19 = (((~var_8) ? (((var_7 ? 249 : var_3))) : ((((((arr_9 [i_1] [i_3]) ? (arr_9 [i_1] [i_1]) : var_0))) ? (5530 == 9223372036854775807) : (max(var_8, 1))))));
                        var_20 = (min(var_20, 28192));
                    }
                }
            }
        }
        var_21 += (((arr_14 [i_1] [i_1] [i_1] [i_1] [6]) < (((arr_9 [i_1] [i_1]) ? ((~(arr_10 [i_1] [i_1] [i_1] [i_1] [i_1]))) : (((arr_11 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) ? (arr_15 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) : 167))))));
    }
    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {
        arr_19 [i_6] = (((max(var_3, (arr_16 [i_6]))) + var_9));

        for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
        {
            arr_22 [i_6] [i_7] [i_6] = ((((17645260957250137747 ? ((((-9223372036854775807 - 1) ? var_7 : var_0))) : (min((arr_16 [i_7]), (arr_11 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]))))) - (((arr_2 [i_6]) ? var_2 : 75))));
            arr_23 [i_6] [i_6] = ((760413047 | var_7) | (min((((arr_1 [i_6]) & (arr_5 [i_6]))), (((var_4 ? var_6 : var_5))))));
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 12;i_8 += 1) /* same iter space */
        {
            arr_28 [i_6] [i_8] = -125;
            arr_29 [i_6] = (arr_5 [i_6]);
        }
    }
    var_22 ^= (max((max(18446744073709551614, (var_7 | -9223372036854775799))), var_8));
    #pragma endscop
}

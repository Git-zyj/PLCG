/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30726
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_17 &= (arr_0 [i_0]);
        var_18 = (min((min(1, 40)), ((max(15, 15)))));
        var_19 = (((((arr_1 [i_0 + 2]) ? (((arr_2 [i_0]) ? (arr_2 [i_0 + 2]) : (arr_1 [i_0 - 1]))) : (((arr_0 [i_0 - 1]) ? 23702 : 40))))));
        var_20 |= (arr_2 [i_0]);
    }
    for (int i_1 = 1; i_1 < 21;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = min(((((arr_2 [i_1]) != (arr_3 [i_1 + 1] [i_1])))), (arr_0 [19]));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 19;i_3 += 1)
            {
                {
                    var_21 = (max(((((-(arr_5 [i_1] [i_1]))) % (min((arr_13 [i_1] [i_1 - 1] [i_1 - 1] [i_3 - 2]), var_3)))), ((((arr_8 [i_1]) <= ((7591088877155899350 & (arr_1 [11]))))))));
                    var_22 -= (max(((min(((((arr_1 [8]) == var_16))), (min(196, -27749))))), (((arr_5 [i_3 + 1] [i_1 + 2]) / var_4))));
                    arr_14 [i_1 + 1] [i_1] [i_1] [i_1] = (((15 <= (852944582962052046 | -96))) ? ((35340 ? (arr_12 [i_1 + 1] [i_3 + 3] [i_1 - 1] [i_1]) : (arr_8 [i_1]))) : 41834);
                    var_23 *= (min(((((arr_9 [i_1 + 2] [i_3 - 2] [i_3 + 4]) <= (arr_9 [i_1 + 1] [i_3 - 2] [i_3 - 2])))), (min((arr_9 [i_1 + 1] [i_3 - 2] [i_3 + 1]), (arr_9 [i_1 - 1] [i_3 + 4] [i_3 + 4])))));
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 20;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            {
                                var_24 = (max((((-(((arr_0 [i_3 + 3]) | var_1))))), (((8192 ? var_4 : var_13)))));
                                var_25 = (((arr_8 [i_1]) <= (((min((max((arr_1 [i_4 + 2]), var_7)), (arr_1 [i_1])))))));
                            }
                        }
                    }
                }
            }
        }
        var_26 = (max((((arr_15 [i_1 + 1] [i_1 - 1] [15] [i_1]) ? (arr_15 [i_1 - 1] [i_1 - 1] [i_1] [i_1]) : (arr_15 [i_1 + 2] [i_1 + 1] [21] [i_1]))), (((((arr_20 [i_1 + 2] [i_1 + 2] [i_1 + 2] [7] [i_1] [i_1]) ? 18270 : 9)) / (min((-2147483647 - 1), -31560))))));
        var_27 += ((((18446744073709551615 ? (((var_0 && (arr_8 [i_1])))) : ((((arr_0 [i_1 + 1]) && var_14))))) % (((((max((arr_20 [17] [i_1] [i_1 + 1] [i_1 + 1] [i_1] [i_1]), (arr_16 [i_1] [i_1] [i_1] [i_1 + 2] [i_1] [1])))) != (arr_12 [i_1 + 2] [i_1 + 2] [i_1 + 2] [6]))))));
        var_28 = (max(((((arr_8 [i_1 - 1]) <= (arr_8 [i_1 + 2])))), (arr_8 [i_1 + 2])));
    }
    var_29 = (((((min(var_15, -41)) * (var_16 * var_14))) - ((((((var_1 ? var_11 : var_2))) ? var_2 : var_12)))));
    #pragma endscop
}

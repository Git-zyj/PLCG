/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233739
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((1 * (min((var_9 & var_0), -0))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_0] = ((((!(32748 / 496)))));
                    var_17 -= (((!(((8192 + (arr_1 [i_0 - 1])))))) ? (-32750 != 8192) : (((((var_0 ? (arr_4 [i_0 - 1]) : var_4))) + 36028797018955776)));

                    for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
                    {
                        var_18 = (max(var_18, var_8));
                        var_19 = (((((!var_1) << (((arr_1 [i_3]) - 27113))))) ? (((var_13 | var_14) ? var_6 : 1)) : 5);
                        var_20 = (((arr_6 [i_0 - 1] [i_2] [i_0 - 1]) >= ((-((18410715276690595846 ? 63 : 1))))));

                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            var_21 = (((((arr_15 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [6]) ? 5 : (arr_1 [i_0 - 1]))) >> (-6 + 11)));
                            var_22 = (((((((((-8 * (arr_9 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4])))) && (var_4 <= -2147483626))))) != (((~var_12) ? (((arr_12 [i_0] [i_1] [i_0] [i_0] [i_4] [i_4]) | 5)) : ((~(arr_12 [i_0] [i_0 - 1] [i_0] [i_0] [i_0 - 1] [i_0 - 1])))))));
                            var_23 = (arr_1 [i_2]);
                        }
                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            var_24 = 18446744073709551615;
                            var_25 = (((((var_10 / (max(var_12, 4294967295))))) ? (var_14 ^ var_3) : -var_10));
                        }
                        for (int i_6 = 2; i_6 < 9;i_6 += 1)
                        {
                            var_26 = ((var_13 ? (2097151 * var_13) : (arr_3 [2] [i_6 + 2])));
                            var_27 |= ((((var_9 ? (18446744073709551615 & 65535) : (arr_4 [i_6 + 3]))) | -1));
                            var_28 = var_8;
                        }
                        var_29 = (min(((((var_6 && var_7) <= (arr_5 [i_0] [i_1] [i_0])))), (arr_12 [i_0 - 1] [i_1] [i_0] [i_3] [i_2] [i_1])));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
                    {
                        var_30 = (0 > -1);
                        var_31 = (min(var_31, (((var_9 ? var_8 : ((25 ? var_14 : -1)))))));
                    }
                }
            }
        }
    }
    var_32 = (var_9 - var_8);
    #pragma endscop
}

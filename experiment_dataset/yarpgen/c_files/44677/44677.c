/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44677
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        arr_13 [i_0] [i_0] [i_0] [i_2] [i_3] [i_3] = (((arr_12 [i_0]) >= (arr_0 [i_1 - 2])));
                        var_19 += ((~(((arr_9 [i_0] [i_2] [i_3] [i_3]) ? (arr_4 [i_0] [i_1]) : var_9))));
                        arr_14 [i_0] [i_3] = (arr_1 [i_0] [i_2]);
                    }
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        var_20 += (((arr_7 [i_0] [i_1] [4]) ? 113 : var_8));
                        arr_17 [i_0] [i_1] [i_2] [i_4] = (arr_16 [i_0] [i_0] [i_2] [i_4] [i_4] [i_4]);
                        var_21 = ((-9223372036854775807 ? ((((arr_7 [i_1] [i_1] [i_0]) == ((((arr_4 [i_2] [i_0]) << (((arr_16 [i_0] [i_1 - 3] [i_2] [i_4] [i_4] [i_1 - 3]) - 1366265697)))))))) : ((~((142 ? (arr_0 [i_1]) : var_18))))));
                        var_22 += (((((var_18 ? (arr_3 [i_1 - 1]) : (arr_3 [i_1 - 1])))) ? (arr_3 [i_1 - 3]) : (0 * 0)));
                    }
                    for (int i_5 = 2; i_5 < 9;i_5 += 1)
                    {
                        var_23 = ((max(var_9, var_16)));
                        arr_21 [i_0] [i_0] [i_0] [i_1] [i_0] [i_5] = arr_11 [i_0];
                        var_24 += (min(9223372036854775806, (min((min(142, -2)), 1))));
                        arr_22 [i_0] [i_1] [i_0] [i_5 + 1] [i_1 + 1] [i_0] = (min((((arr_1 [i_0] [i_1 + 1]) ? var_4 : (arr_16 [i_0] [i_0] [i_1] [i_1] [i_1] [i_5]))), (!0)));

                        for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
                        {
                            var_25 &= (((((~(min(var_8, (arr_12 [i_6])))))) ? (var_0 + var_5) : 10));
                            arr_25 [i_0] [i_2] [i_0] [i_6] = var_3;
                            arr_26 [i_6] [i_1] [i_1] [i_6] [i_1] [i_1] [i_1 + 1] &= ((18446744073709551615 ? (((((((arr_19 [i_0] [i_1] [i_0] [i_6] [i_6]) ? var_18 : 113))) / (max((arr_19 [i_6] [i_6] [i_2] [i_6] [i_0]), var_12))))) : -var_8));
                        }
                        for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
                        {
                            var_26 = var_0;
                            var_27 = (max((arr_9 [i_0] [i_1 + 1] [i_0] [i_7]), (max(((1 ? 17891014902486890292 : -2147483631)), (((18446744073709551615 ? 1 : 1)))))));
                            var_28 = (max(var_28, (((-(min(2882627428, -var_7)))))));
                        }
                    }
                    var_29 = (max((((max(-2147483636, var_10)) - var_0)), (((~((251 ? -2147483641 : -1)))))));
                    arr_29 [i_0] [i_0] [i_2] = (((~(((var_4 && (arr_28 [i_0] [i_0] [i_0] [i_0] [i_1 - 3] [i_1] [i_2])))))));
                    var_30 = (max(var_30, (((105 ? 247 : ((-(-127 - 1))))))));
                    arr_30 [i_0] [i_0] [i_0] = (max((((arr_28 [i_2] [i_2] [i_2] [i_0] [i_1 - 3] [i_1 + 1] [i_0]) || (arr_28 [i_1] [i_1 - 1] [i_1 - 2] [i_0] [i_1 + 1] [i_1 - 1] [i_1]))), 1));
                }
            }
        }
    }
    var_31 = (var_11 % var_6);
    #pragma endscop
}

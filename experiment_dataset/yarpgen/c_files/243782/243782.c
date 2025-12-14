/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243782
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = 1;
        var_10 = (min(var_10, (~-7784)));
        arr_3 [i_0] = (var_8 & 45910);
        arr_4 [i_0] = 5698243448663701528;
        var_11 = (max(var_11, 4294967295));
    }

    for (int i_1 = 2; i_1 < 10;i_1 += 1)
    {
        var_12 = (min(var_12, (arr_1 [i_1 - 1])));
        var_13 *= arr_5 [i_1];
    }
    for (int i_2 = 1; i_2 < 11;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    var_14 *= 19625;

                    for (int i_5 = 1; i_5 < 10;i_5 += 1)
                    {
                        var_15 = (((((3272022169 < 224099484773016488) ? (((4294967295 ? (-32767 - 1) : 866705852))) : 6409243335207538048)) >> ((((max(2525563929, 0))) ? (arr_1 [i_4]) : -25))));
                        var_16 = (min((min((!var_4), ((var_1 ? 18281 : 11)))), (var_5 & var_5)));
                    }
                    for (int i_6 = 2; i_6 < 11;i_6 += 1)
                    {
                        var_17 = (!(((-20679 ? 1 : (arr_0 [i_3 - 2])))));
                        var_18 = 3872450344957499056;

                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            arr_23 [i_2] [i_2] [i_2 + 1] [i_2] [i_2] [i_2] [i_2] = ((4002199544 ? ((((!(((var_0 ? 0 : -16325))))))) : (min((arr_14 [i_3 + 2] [i_6 - 1]), (arr_14 [i_3 - 2] [i_6 - 2])))));
                            arr_24 [i_2] [i_2 - 1] [i_2] [i_2 + 1] [i_2] = 18374513687281390225;
                            var_19 *= 0;
                            var_20 -= (((((-9223372036854775807 - 1) + 39546)) >= (((min((arr_13 [i_3 - 2] [i_6 - 1]), -1149))))));
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 12;i_8 += 1)
                        {
                            var_21 = var_1;
                            arr_27 [i_2] [i_2] [i_2] [i_4] [i_2] [i_8] = (1 == ((-(arr_1 [1]))));
                            arr_28 [i_8] [i_2] [0] [i_3 - 3] [i_2] |= (~2310774241);
                            var_22 -= ((0 ? 19625 : 0));
                            var_23 = var_9;
                        }
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            arr_33 [i_2] [i_9] [i_6 + 1] [i_6] [i_9] [i_6] [i_6 + 1] = (arr_31 [i_2 - 1] [i_3 - 1] [i_3 - 1] [i_3 + 2] [i_6 - 1]);
                            var_24 = 2206810694;
                        }
                    }
                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        arr_38 [i_2] [i_2] [i_4] [i_4] [i_4] [i_3] = 45911;
                        var_25 = 4294967283;
                        var_26 *= 1;
                        var_27 -= 11438506331314738390;
                        arr_39 [i_2] [i_2] = (min((!0), (((arr_13 [i_3 + 1] [i_2 - 1]) + var_9))));
                    }
                }
            }
        }
        var_28 = (max(((min(-25525, (587850140 != var_2)))), ((~(max((arr_7 [i_2] [i_2 + 1]), 18446744073709551590))))));
    }
    for (int i_11 = 1; i_11 < 19;i_11 += 1)
    {
        arr_42 [i_11] = (((arr_41 [i_11] [i_11 + 1]) + (11438506331314738390 == -77)));
        var_29 = 19623;
        var_30 = (min(var_30, var_2));
        var_31 *= ((-(!4894)));
    }
    #pragma endscop
}

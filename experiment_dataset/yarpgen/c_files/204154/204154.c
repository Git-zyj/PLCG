/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204154
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_12 = (max(var_12, ((max((((((((arr_4 [i_1]) ? (arr_8 [i_0] [i_1]) : var_10))) ? ((var_7 ? (arr_11 [i_0 + 1] [i_1] [3] [i_3] [1]) : var_8)) : (((!(arr_7 [8] [5] [i_0] [i_0]))))))), var_1)))));
                                var_13 -= (((((((var_1 ? var_11 : var_10)) % 1))) ? (((var_8 * (var_0 >= var_11)))) : (((((65535 ? var_10 : (-32767 - 1)))) ? var_4 : var_0))));
                                var_14 = (max(var_14, ((((min(((65535 << (((arr_12 [i_0] [i_1] [i_0] [i_1 + 1] [0] [i_0 + 1] [i_2]) - 59564)))), 65522))) ? ((((((var_3 + 9223372036854775807) << (var_7 - 15572))) | (var_2 & var_3)))) : (((((var_2 << (var_1 - 2814950045)))) ? ((((arr_0 [3] [3]) & var_3))) : 15999584508923693285))))));
                            }
                        }
                    }
                    var_15 = (min(var_15, ((((arr_4 [i_1 - 1]) >= (arr_4 [i_1 + 2]))))));
                }
                var_16 = (min(var_16, ((max((((!var_1) ? ((var_5 ? 0 : var_10)) : var_6)), (((((var_3 ? 32767 : 65522))) ? (var_1 <= 0) : ((max(var_2, 65519))))))))));
                var_17 ^= ((!(((arr_0 [i_0] [i_1]) <= (var_4 || var_5)))));
            }
        }
    }

    for (int i_5 = 4; i_5 < 12;i_5 += 1)
    {
        arr_18 [i_5] = ((((((((1 ? var_1 : var_2))) ? (18 && -3434189028464091746) : ((min(var_11, var_8)))))) ? ((((var_2 <= var_11) ? var_6 : (var_2 % var_10)))) : (((var_5 && var_6) ? var_1 : (((max((arr_14 [6]), 219))))))));
        arr_19 [i_5] [i_5] = ((-1 - (!0)));
        var_18 = ((!((((var_8 + 2147483647) >> (var_0 - 1241603611))))));
    }
    var_19 *= var_7;
    #pragma endscop
}

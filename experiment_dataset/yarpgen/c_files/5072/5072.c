/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5072
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_13 = 0;
                var_14 = 1;
                var_15 ^= (((((-var_5 ^ ((min(var_5, -99)))))) ? (var_11 > var_11) : -var_12));
                var_16 *= (((((0 ? var_11 : ((min(var_7, 86)))))) ? (max(var_4, (var_9 * var_7))) : (((((var_10 ? -99 : var_4))) ? ((var_7 ? 255 : 0)) : var_4))));
            }
        }
    }
    var_17 = (min(1, ((123 ? ((var_11 ? 14175 : 16836)) : ((min(-104, var_7)))))));
    var_18 = ((-(((((var_0 >> (var_1 + 13543))) <= (var_7 | var_12))))));

    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        arr_8 [i_2] [i_2] = ((((((var_5 + 2147483647) << (-var_1 - 13538)))) ? (-var_4 & var_0) : (max(-16836, 1))));
        arr_9 [i_2] = (!var_10);
    }
    /* LoopNest 2 */
    for (int i_3 = 3; i_3 < 10;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            {
                var_19 = (min(var_19, (max(((max(var_4, var_1))), (var_8 % var_6)))));
                arr_15 [i_3] [i_4] = (((min(var_7, 99))));

                for (int i_5 = 2; i_5 < 9;i_5 += 1)
                {
                    var_20 = ((((max(-14, (min(55059, 20))))) | (((((max(var_12, var_9)))) - (1 + var_2)))));
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 7;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            {
                                var_21 = ((((max(((var_7 ? var_3 : -11116)), ((max(var_0, -31009)))))) ? (max((~var_2), (((var_10 ? -8946 : var_9))))) : (((((min(var_1, var_9))) & (((-14 + 2147483647) >> var_10)))))));
                                var_22 |= -31;
                            }
                        }
                    }
                    arr_23 [4] [i_3] = (~12);
                }
                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    var_23 = ((~var_6) * (((~var_12) * (var_12 / var_1))));
                    arr_27 [i_3] [i_3] [i_3] [i_3] = (((((var_5 ? var_1 : var_5))) ? ((var_7 ? var_11 : var_12)) : ((var_3 ? var_7 : var_7))));
                }
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237544
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_1 ? var_10 : var_5));
    var_13 = (((((var_4 ^ var_0) > var_6)) ? (((((!var_3) == (var_1 && var_10))))) : var_4));
    var_14 = ((var_7 == var_1) ? var_5 : ((((!var_8) + (var_10 < var_8)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    var_15 = ((((((var_3 ? -5278801808080282067 : var_4))) ? (arr_3 [i_0]) : var_10)) * (((((((var_10 ? var_9 : (arr_8 [i_1] [i_1] [i_1]))) + 9223372036854775807)) << (((((arr_1 [i_1 + 1] [i_2 - 1]) + 12842)) - 4))))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_16 = var_11;
                                var_17 = (((arr_10 [i_1 - 3] [i_3 + 1] [2] [i_2 + 1]) ? ((((arr_10 [i_1 + 1] [i_3 - 1] [i_2] [i_2 - 1]) ? var_9 : var_2))) : 15));
                                var_18 = ((((18446744073709551596 ? ((var_6 ? var_3 : var_11)) : var_10)) > (arr_14 [i_3 - 3] [i_1 + 1] [i_2 + 1] [i_1 + 1] [i_0])));
                            }
                        }
                    }
                    arr_15 [i_2] [i_1] [i_1] [i_0] = (max(var_0, var_5));
                }
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    var_19 += ((1 ? ((17 * (arr_5 [i_1 - 3] [i_1]))) : var_1));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            {
                                arr_26 [i_1 - 2] [i_1 - 2] [i_0] = ((arr_6 [i_1 + 1] [i_1] [i_1 + 2]) ? var_2 : (((arr_13 [i_1 + 1] [i_1]) ? var_5 : (arr_6 [i_1 + 1] [i_1 - 2] [i_1 + 1]))));
                                var_20 = ((((((((var_4 ? var_1 : var_1))) ? (((arr_12 [i_0] [i_1 - 3] [i_6] [i_6]) ? 18446744073709551586 : var_1)) : (arr_0 [i_0] [i_0])))) ? ((var_2 ? ((9223372036854775781 >> (var_8 - 34273))) : (var_7 || 14))) : ((((((var_2 ? 1 : 50152))) ? var_10 : var_3)))));
                                arr_27 [i_7] [i_1] [5] [i_6] [8] [8] [5] = ((-(((arr_25 [i_1 - 1] [i_1 - 2]) ? (arr_25 [i_1 + 1] [i_1 - 3]) : (arr_25 [i_1 + 2] [i_1 + 1])))));
                            }
                        }
                    }
                    arr_28 [i_0] = (((arr_17 [17] [i_0] [i_1] [i_5]) ? (arr_2 [i_0]) : ((((var_2 && (~var_6)))))));
                }
                var_21 = (max(var_21, (((var_11 ? (((arr_23 [i_1 + 1] [i_1 + 2] [i_1 + 1]) ? 53 : var_2)) : var_2)))));
                var_22 = (((max(var_1, (arr_24 [i_0] [i_1] [i_1 + 2] [i_1 - 2]))) + -var_1));
            }
        }
    }
    #pragma endscop
}

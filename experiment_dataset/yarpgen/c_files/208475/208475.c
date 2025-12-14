/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208475
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = max((((min(var_7, var_3)))), (max(var_10, (65531 && 241))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 6;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_14 = (~1);
                                arr_13 [i_4] [i_4] [i_2] [i_2 - 2] [i_4] [i_1] [i_2 + 4] = (255 ^ 1776370320324123606);
                                var_15 = (6 >= 223);
                                var_16 *= -var_2;
                                var_17 -= -18446744073709551588;
                            }
                        }
                    }
                    arr_14 [i_0] [i_1] = (~72);
                    arr_15 [i_0] [i_1] = ((var_6 ? ((min(((var_6 ? 241 : var_3)), (var_3 / 42)))) : (((((min(183, 34445)))) * ((255 ? 2057832513386983051 : var_11))))));
                    arr_16 [i_1] [i_1] [4] [i_2] = ((((min(((169 ^ (arr_7 [i_0] [i_0]))), (((var_12 ? 15 : var_8)))))) ? (min((var_9 & var_8), var_0)) : ((var_7 ? ((((arr_4 [i_0]) ? var_2 : (-127 - 1)))) : (var_11 + var_4)))));
                    var_18 += ((!(!var_2)));
                }
            }
        }
    }
    var_19 = var_10;
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 4; i_7 < 11;i_7 += 1)
            {
                {
                    arr_26 [i_5] [i_5] = (max((max((arr_22 [i_6] [i_6] [i_6]), 0)), (16388911560322568565 >= 51)));
                    var_20 = var_7;
                    var_21 = ((((-16180 % 2057832513386983035) % (~-44))));
                }
            }
        }
    }
    #pragma endscop
}

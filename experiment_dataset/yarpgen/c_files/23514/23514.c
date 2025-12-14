/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23514
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_12 >> (var_0 - 28)));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_2] = 1;
                    var_15 = (max((~var_1), ((~((((arr_2 [4] [i_1]) > 1)))))));

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        var_16 = 1;
                        var_17 = 1125831187365888;
                        var_18 = (min(var_18, 1));
                        arr_10 [i_2] [i_3] [i_2] [i_2] [i_2] [17] = (arr_0 [i_0]);
                        arr_11 [i_0] [i_3] = (((min(-9, (0 & var_2))) > (((8 ? var_4 : -17)))));
                    }
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        arr_14 [i_0] [i_0] [i_1] [i_1] [i_2] [i_4] = var_10;
                        arr_15 [i_0] [i_0] [i_2] [i_4] &= (max((max(var_12, ((var_1 ? 131070 : var_6)))), ((max(1, var_7)))));
                        var_19 = ((18446744073709551600 ? (((~9223372036854775807) ? (!1) : (((arr_12 [i_2]) ? (arr_0 [i_0]) : var_1)))) : (((((arr_0 [i_0]) + 9223372036854775807)) >> (var_1 + 25359)))));
                    }
                    var_20 = -119;
                }
            }
        }
        arr_16 [i_0] = (((((-(((!(arr_6 [i_0] [i_0]))))))) && ((max(((2 ? var_12 : var_1)), (-32767 - 1))))));
    }
    #pragma endscop
}

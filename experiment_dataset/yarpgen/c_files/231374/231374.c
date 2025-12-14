/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231374
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 *= 32740;

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        var_17 = ((((((arr_0 [i_0]) != -185))) == ((((-9223372036854775807 - 1) && (arr_0 [i_0 + 3]))))));

        for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
        {
            var_18 = (((max((min(var_14, -54)), -111))) + -1);
            var_19 = (~(((arr_0 [i_0 - 2]) ? 7 : 185)));
        }
        for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
        {
            var_20 = ((-(((var_2 || 9223372036854775807) ? (~-9223372036854775807) : (((~(arr_4 [i_2] [i_0]))))))));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 14;i_4 += 1)
                {
                    {

                        for (int i_5 = 2; i_5 < 14;i_5 += 1)
                        {
                            arr_16 [i_3] [i_3] [i_3] |= ((~(0 - -18969)));
                            arr_17 [i_0] [i_2] [i_2] [0] [i_2] [i_5] = var_2;
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            arr_22 [i_0] [2] [13] [2] [i_0] = arr_13 [i_0] [i_0 - 2];
                            var_21 += ((0 ? var_1 : (arr_7 [i_6] [8] [i_0])));
                            arr_23 [i_2] [i_2] [1] [i_2] [i_0] = 203;
                        }
                        /* vectorizable */
                        for (int i_7 = 4; i_7 < 13;i_7 += 1)
                        {
                            var_22 = (-2147483647 - 1);
                            var_23 = var_10;
                            var_24 = (4052568564 <= var_4);
                        }
                        arr_27 [i_0 + 1] [i_0] [i_0] [i_0] = (3852808049 && (((-(arr_11 [i_0] [i_2] [1] [i_4 - 1])))));
                        arr_28 [i_4 - 1] [i_0] [i_0] [i_0 - 2] = (((arr_14 [i_0] [i_0] [i_0] [i_3] [i_4]) ? ((-31 ? var_8 : var_1)) : ((((arr_0 [i_0 + 4]) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 + 4]))))));
                    }
                }
            }
        }
        arr_29 [i_0] [i_0] = (((~var_12) ? ((var_1 ? ((12061227183613806571 ? 18446744073709551615 : var_3)) : ((12287884069084565865 ? (arr_8 [i_0] [i_0] [i_0] [i_0]) : (arr_19 [i_0] [i_0] [i_0]))))) : (((var_0 ? var_15 : -var_10)))));
    }
    #pragma endscop
}

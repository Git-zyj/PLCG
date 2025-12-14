/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223321
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_7;

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_1] [i_0] = ((14 ? (min(-2101263554, ((3208040423689508040 ? 64 : 1)))) : -2101263554));
                    arr_10 [i_1] [i_2] = (((((((min(0, 0))) ? (((((arr_1 [i_0 + 2]) >= var_15)))) : ((-62 ? var_13 : 2337012035067137236))))) ? (arr_5 [i_1] [i_1] [i_0 + 1]) : ((63 ? var_6 : var_11))));
                    var_19 = (min(var_7, (min((arr_4 [i_0 + 1] [i_0 + 1]), (min(var_14, var_8))))));
                    arr_11 [3] [3] = ((~(~0)));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 9;i_4 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_5 = 3; i_5 < 11;i_5 += 1) /* same iter space */
                    {
                        var_20 = ((var_4 ? (arr_3 [i_0]) : ((var_17 ? (arr_7 [i_0 + 1] [i_0]) : 2101263554))));
                        arr_21 [i_0 + 2] [i_3] [i_4] [i_4] = (arr_3 [i_5 + 1]);
                    }
                    /* vectorizable */
                    for (int i_6 = 3; i_6 < 11;i_6 += 1) /* same iter space */
                    {
                        var_21 = ((var_8 * (arr_24 [i_4] [i_4] [i_4] [i_4] [i_0] [i_0])));
                        var_22 = (arr_6 [i_0 - 1] [i_6 - 2] [i_6]);
                        arr_26 [i_3] [i_4] [i_6] = ((((10109 ? -2101263556 : 82)) | (arr_19 [i_0] [i_4 - 1])));
                        arr_27 [i_0] [11] [i_0 - 1] [i_4] = 18446744073709551615;
                    }

                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        var_23 = ((((max(0, (arr_2 [i_4 + 4])))) | var_4));
                        arr_30 [i_0] [i_3] [i_4] [i_7] = (min((arr_17 [i_0] [i_4 - 1] [i_4 - 1] [i_7] [i_7] [i_4]), (var_8 ^ var_10)));
                        var_24 = (max(var_6, var_3));
                        arr_31 [i_4] [i_7] [i_4] [i_7] = ((-(0 * var_17)));
                        var_25 = (max((!1), (max((arr_28 [i_0 + 1] [i_4 + 4] [i_7] [i_7]), (1 + 15238703650020043575)))));
                    }
                    var_26 = ((arr_12 [2] [i_3] [i_4]) | (min((-4016980744133705733 / 18816), (min(2705534550503253017, var_9)))));
                    var_27 = (((((arr_29 [i_0 + 2] [i_3] [i_4]) ? -0 : 0)) / ((-61 + (arr_1 [i_4 + 1])))));
                    arr_32 [i_0 + 1] [i_3] [i_0] &= ((!(((((arr_4 [i_0] [i_3]) ? (arr_28 [i_0] [i_3] [i_0] [i_3]) : var_2))))));
                }
            }
        }
        arr_33 [i_0 - 1] = -9272401257287535961;
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 23;i_8 += 1)
    {
        var_28 = (-((2225967691 ? var_13 : (arr_34 [i_8] [21]))));
        var_29 = ((((var_0 ? var_14 : var_10)) % (var_7 ^ -29)));
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 23;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 23;i_10 += 1)
            {
                for (int i_11 = 1; i_11 < 21;i_11 += 1)
                {
                    {
                        arr_42 [i_11 + 2] [i_11] [i_11 + 2] [i_11 + 2] = var_14;
                        var_30 ^= (arr_37 [i_11 + 2] [i_11 + 2]);
                        var_31 = ((-((1 ? (arr_37 [i_9] [i_9]) : var_9))));
                        var_32 = ((255 ? var_5 : (arr_39 [i_11 + 1] [i_11 - 1] [9] [i_11])));
                    }
                }
            }
        }
    }
    #pragma endscop
}

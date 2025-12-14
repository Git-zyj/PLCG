/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190488
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = min((~-395080827), (((((min(var_12, 118))) ? 27090 : (~var_1)))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_16 = (((min(var_3, (arr_1 [i_0]))) - -30991));
        arr_2 [i_0] = -26;
        arr_3 [i_0] = (((var_7 ^ (((max((arr_0 [i_0]), -11344)))))));
        var_17 *= ((((((arr_1 [i_0]) ? (arr_1 [i_0]) : ((-110761749979572244 ? 151 : var_8))))) ? (((11190 ? var_12 : 118))) : (((((-106 ? -106 : (arr_1 [i_0])))) ? (!8594) : var_3))));
    }
    for (int i_1 = 1; i_1 < 11;i_1 += 1)
    {
        arr_6 [i_1] [i_1 + 1] = 30969;
        arr_7 [0] = ((((!((max(var_10, var_8))))) ? (arr_5 [i_1] [i_1]) : ((max(-106, 1)))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 11;i_3 += 1)
            {
                {
                    var_18 = (min(var_18, (((((((max(1, var_6))))) < 2147483648)))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            {
                                var_19 = (-(((arr_10 [i_1] [i_2] [i_4] [i_5]) ? (arr_10 [i_5] [i_4] [i_1 + 1] [i_5]) : (arr_10 [i_5] [i_4] [8] [i_5]))));
                                var_20 -= (((((var_3 ? (max((arr_14 [i_1] [i_5]), 3669313737)) : (((max(var_12, 1))))))) + ((1399760414 ? ((var_2 | (arr_10 [i_3] [i_4] [i_3] [i_5]))) : (arr_1 [i_3])))));
                                var_21 = ((-(((arr_4 [i_1]) ? var_12 : ((var_4 ? -395080820 : var_14))))));
                                var_22 = (min(var_22, 2147483647));
                            }
                        }
                    }
                    var_23 -= (max(137, 395080826));
                    var_24 = (min(var_24, ((-((var_12 - (arr_10 [2] [i_3 - 1] [i_3] [2])))))));
                }
            }
        }
        arr_18 [11] = ((var_3 ? (((!((max((arr_5 [i_1 - 1] [i_1]), (arr_16 [0] [0] [0] [0] [i_1 - 1] [i_1 - 1] [i_1]))))))) : var_14));
        arr_19 [i_1] |= (!((!((((arr_10 [i_1] [i_1] [i_1] [4]) ? (arr_9 [i_1] [i_1] [0]) : 2147483661))))));
    }
    for (int i_6 = 1; i_6 < 6;i_6 += 1)
    {
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 10;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 10;i_9 += 1)
                {
                    {
                        var_25 |= (min(var_13, ((var_8 ? (arr_13 [1] [i_6 + 1] [i_6] [i_6 - 1] [2]) : ((((arr_12 [i_7] [i_9]) ? (arr_16 [i_6] [i_6 + 2] [6] [i_6] [9] [i_6] [i_6 + 2]) : 3669313737)))))));
                        arr_29 [i_6] [7] [i_6 - 1] [i_6] = (((((var_1 ? (arr_4 [i_6 + 3]) : var_2))) / (((arr_21 [i_6]) ? (arr_21 [i_6 + 1]) : var_0))));
                        var_26 = (max(var_26, (((max((max(var_4, -7136683286251592331)), (arr_14 [i_6] [i_9])))))));
                        var_27 = (var_0 ? (((arr_28 [i_7] [i_8]) % (arr_0 [i_9]))) : ((var_13 * (arr_22 [i_7]))));
                    }
                }
            }
        }
        arr_30 [i_6] = (arr_8 [10] [i_6 + 4] [i_6 + 3]);
        var_28 ^= (-(arr_16 [i_6] [i_6 + 2] [i_6] [i_6] [i_6 + 3] [i_6 + 2] [i_6 + 1]));
        var_29 = (arr_11 [10]);
        var_30 = (min(var_30, ((((var_13 == ((var_8 ? var_13 : var_1)))) ? (max((max((arr_16 [i_6] [i_6 - 1] [i_6 + 2] [i_6] [i_6] [i_6] [i_6 + 1]), 3700472025093595144)), (((var_2 << (((arr_15 [11] [i_6]) - 52113))))))) : (~var_14)))));
    }
    #pragma endscop
}

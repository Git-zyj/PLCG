/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21499
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= ((((max(var_9, 807151119)) / var_1)));
    var_13 -= var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    arr_8 [i_0] [i_0] [16] [i_2] &= ((!(arr_1 [i_0])));
                    var_14 = (max(var_14, (((var_6 * var_8) ? (arr_0 [10] [i_2]) : (((var_3 | var_5) + var_4))))));

                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        var_15 -= (((((((max(var_0, (arr_2 [i_0])))) % (((arr_3 [i_1]) ? var_9 : var_5))))) ? var_5 : (var_7 - var_1)));
                        arr_12 [i_0] [i_1 - 3] [i_2] [0] |= (((((((~(arr_11 [i_0] [i_1 - 2] [i_2] [1])) + 2147483647)) >> (min((arr_9 [i_2]), 808446672))))));
                    }
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        var_16 = (max(var_16, (min(1344715232867508283, -30310))));
                        arr_15 [i_0] [i_0] [14] [14] &= (((((arr_11 [i_0] [i_0] [17] [i_0]) <= ((max(-3, (arr_1 [i_0])))))) ? ((((max(-808446672, var_4)) - (((!(arr_11 [i_0] [i_0] [i_0] [i_0]))))))) : (max((30953 / -30301), (max(var_1, (arr_10 [1] [i_1 + 2] [i_1] [i_1 + 1])))))));
                    }

                    for (int i_5 = 1; i_5 < 15;i_5 += 1)
                    {
                        var_17 = (arr_6 [i_5] [i_2] [11]);
                        var_18 = (max(var_18, (arr_17 [i_0] [i_1 - 3] [14] [6] [6])));
                        var_19 = (min(var_19, ((max((arr_18 [i_0] [i_2] [i_2]), (((!(~var_8)))))))));
                        var_20 ^= ((var_7 ? (((arr_16 [i_0] [6] [12] [i_5] [i_5]) ? 36 : 7867702504216066164)) : 30316));
                    }
                    var_21 = 1761760864;
                }
                /* vectorizable */
                for (int i_6 = 1; i_6 < 16;i_6 += 1)
                {

                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        var_22 *= ((!((((arr_1 [17]) ? (arr_19 [i_0] [i_1] [0] [6]) : (arr_0 [i_0] [1]))))));
                        var_23 = (max(var_23, (arr_1 [i_0])));
                        var_24 = (min(var_24, (arr_18 [i_1 + 1] [i_0] [i_0])));

                        for (int i_8 = 0; i_8 < 18;i_8 += 1)
                        {
                            arr_25 [i_0] [4] |= ((-(arr_14 [2] [i_7] [i_1 + 1] [2])));
                            var_25 -= ((((arr_21 [i_8] [2] [i_6] [i_7]) / (arr_20 [13] [i_1 - 1] [i_8]))));
                            var_26 = (min(var_26, ((((arr_13 [5] [i_6 + 2] [i_6 + 2]) / (((arr_16 [i_0] [12] [i_6 + 2] [0] [16]) * (arr_6 [i_7] [i_7] [i_7]))))))));
                        }
                        var_27 = (min(var_27, (((((((arr_11 [i_7] [i_6 + 2] [i_1] [i_0]) / 234))) ? ((1884452988034463809 ? var_2 : var_9)) : (((238 ? -199511270 : -1284512022))))))));
                    }
                    arr_26 [0] [0] |= (((arr_16 [i_1 + 1] [16] [i_6] [16] [i_6 + 2]) / (arr_18 [i_1 + 1] [5] [i_1 - 1])));
                    var_28 -= (!808446672);
                }
                var_29 = (max(var_29, ((((~(arr_7 [i_1 + 1] [i_0] [i_0])))))));
            }
        }
    }
    var_30 ^= (min((((var_2 | 808446672) ? ((var_10 ? var_0 : 1884452988034463788)) : (max(3488667587, 4247550954245301737)))), (((~((max(var_10, var_4))))))));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45720
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((max(var_11, ((var_9 ? 17800 : 58144))))) ? var_8 : var_11));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 4; i_3 < 11;i_3 += 1)
                    {
                        var_17 = ((!((((arr_2 [i_0] [i_0] [i_0 + 1]) ? 55356 : (arr_2 [i_0] [i_0] [i_0 - 1]))))));

                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            arr_14 [i_4] [0] [6] [i_2] [6] [2] [i_0] &= ((((-29694 ? -1 : var_12)) == ((2083761253 ? var_5 : 63))));
                            arr_15 [i_0] [11] [i_0] = ((-17805 <= ((~((var_0 ? var_7 : var_0))))));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            var_18 = (arr_0 [i_0]);
                            var_19 = arr_13 [i_1] [2] [i_1] [i_3 - 4] [7] [1] [i_3];
                            var_20 = (((~var_11) ? ((((arr_10 [i_0] [i_0]) != 44387))) : var_8));
                        }
                        arr_20 [i_2] [i_0] = ((-((~(arr_6 [1] [9] [1])))));
                        var_21 = ((~(~var_9)));
                        arr_21 [i_0] [i_1] [i_1] [1] = -831131465;
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        var_22 = (max(var_22, 0));
                        var_23 &= ((65531 ? (arr_2 [i_6] [i_2] [8]) : 1));
                        var_24 = (min(var_24, (0 / 29692)));
                        var_25 *= 17802;
                    }
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        var_26 = (~-1);
                        var_27 = (((6991842971202991170 <= (arr_22 [11] [i_1 - 1] [i_0] [1]))) ? (!9223372036854775807) : var_4);
                        var_28 = ((((((var_11 && 9223372036854775807) <= (!var_8)))) / (1 - var_7)));
                        var_29 = (min(var_29, ((max(var_0, ((((max((arr_25 [2] [4]), (arr_4 [8] [5] [0])))) ? (arr_23 [i_7]) : var_11)))))));
                    }
                    arr_26 [i_0] [7] [i_1] [i_0] = 30;
                    arr_27 [i_0] = var_14;
                    arr_28 [7] [5] [i_2] [i_0] = (((((7397 ? var_2 : (arr_9 [12] [4] [i_0] [i_2] [4])))) ? ((55380 ? (-2147483647 - 1) : 67)) : -7401));
                }
            }
        }
    }
    var_30 = -29;
    var_31 = (var_7 == var_5);
    #pragma endscop
}

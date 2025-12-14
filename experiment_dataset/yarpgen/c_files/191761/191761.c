/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191761
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_1 ? (var_16 | -25551) : ((min(3837070556, (max(1, 161972519)))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_21 = (((((-(max(var_2, (arr_0 [i_0])))))) ? (((((-1752147916 ? 53 : -44)) / var_19))) : ((0 ? var_9 : (arr_0 [i_0])))));
        var_22 -= max(7, 199);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_23 = var_11;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                {
                    var_24 = ((~(max((arr_5 [i_1] [i_2] [17]), (arr_5 [i_1] [i_2] [i_3])))));

                    for (int i_4 = 1; i_4 < 20;i_4 += 1) /* same iter space */
                    {
                        var_25 = ((((((max(-1181660084, 1))) / ((-(arr_5 [20] [i_3] [i_1]))))) / ((-(arr_5 [1] [i_3] [i_1])))));
                        arr_14 [i_4] [i_1] [i_4] [i_3] [i_1] [i_1] = ((((18446744073709551615 ? ((min(3626486404, 27))) : (max(108, -2230361406294517542)))) / 53));
                    }
                    for (int i_5 = 1; i_5 < 20;i_5 += 1) /* same iter space */
                    {
                        arr_19 [i_5] [i_2] [i_3] [i_1] = ((((max((arr_18 [i_5] [i_5 + 1] [i_5 - 1] [i_5] [i_5 - 1] [i_5]), (arr_18 [i_1] [i_5 + 1] [i_5 - 1] [i_5 + 2] [15] [i_5 + 1])))) ? (arr_8 [i_3] [i_5 + 2] [i_5 + 1] [i_5 - 1]) : (arr_18 [i_1] [i_5 + 1] [i_5 + 1] [i_5] [i_5 - 1] [i_5])));

                        /* vectorizable */
                        for (int i_6 = 3; i_6 < 20;i_6 += 1)
                        {
                            var_26 = (min(var_26, ((((arr_11 [i_3] [i_3] [i_3] [i_3]) ? 1368858018 : (2040520007370314387 % var_6))))));
                            arr_23 [i_5] [i_5] [i_1] = (var_6 > (arr_11 [i_5 - 1] [i_5 + 1] [12] [i_5 + 2]));
                            var_27 -= -35;
                            var_28 = 1;
                        }
                        var_29 = (min(var_29, 1283556120));
                        arr_24 [i_1] [i_2] [i_3] [i_5 - 1] &= (-3 > (((arr_11 [i_5 + 2] [i_5 - 1] [i_5 + 2] [i_5 + 1]) ? (arr_11 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 + 2]) : (arr_11 [i_5 + 2] [i_5 + 2] [i_5 + 1] [i_5 + 2]))));
                    }
                    var_30 -= (min((((!(((var_18 ? 143 : var_3)))))), ((668480905 & (((7 ? var_5 : 1)))))));
                }
            }
        }
        var_31 = (~532676608);
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
    {
        var_32 = (var_13 && -11774);
        arr_27 [i_7] [18] |= 18566;
        var_33 = ((((((arr_6 [i_7] [i_7]) ? (arr_7 [i_7]) : (arr_6 [i_7] [i_7])))) ? -1 : (((!(arr_7 [i_7]))))));
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
    {
        var_34 = (max((arr_9 [i_8]), ((max((arr_9 [i_8]), (arr_9 [i_8]))))));
        arr_30 [i_8] = ((-(((arr_20 [i_8] [i_8] [i_8]) & (((var_7 || (arr_11 [i_8] [i_8] [i_8] [i_8]))))))));
    }
    var_35 -= (((max(1, ((min(var_13, 96))))) % ((((~var_13) * var_17)))));
    #pragma endscop
}

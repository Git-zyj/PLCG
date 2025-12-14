/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218663
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (var_10 ? 2694398290 : (((~1) / (max(var_3, var_7)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [19] &= (!177);
                var_20 = ((0 ? ((((min(var_16, (arr_2 [i_0] [i_0])))) ? 9007199254740991 : (((max(var_5, -52)))))) : 1));

                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    arr_8 [i_0] [i_1] [i_1] [i_2] = ((((min((arr_1 [i_1] [i_2 - 1]), (min((arr_0 [i_0] [i_1]), (arr_5 [i_2] [i_1])))))) ? (((arr_3 [i_0] [i_1]) ? (((4294967295 ? -17625 : 1346934960))) : 3812565479)) : var_17));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_21 = ((((((arr_6 [i_0] [i_0]) ? (arr_11 [i_4] [i_3] [i_2 + 1] [i_1] [i_0]) : 227))) ? ((((arr_3 [i_0] [22]) ? 482401816 : -17625))) : 0));
                                arr_15 [i_4] [i_1] [7] [7] [i_2] [i_1] [i_0] = ((arr_3 [i_3 + 1] [i_2 + 1]) ? ((var_3 ? (arr_3 [i_3 + 1] [i_2 + 4]) : 1)) : (arr_3 [i_3 + 1] [i_2 + 2]));
                                arr_16 [i_0] [i_1] [i_2] [i_3 - 2] [i_4] = ((-((((var_7 / (arr_5 [i_0] [i_0])))))));
                                var_22 = ((((arr_5 [i_3 - 2] [i_2 + 3]) << (9007199254740991 - 9007199254740982))) % (max(4294967295, (arr_5 [i_3 + 1] [i_2 + 1]))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_23 = ((0 >> (((~3812565479) - 482401803))));
                                var_24 *= (((~var_6) ? ((var_0 ? (((8388607 ? (arr_11 [i_0] [i_1] [6] [7] [21]) : 1))) : (max(86, var_13)))) : (arr_10 [i_0] [i_1] [i_2 + 2] [i_2 + 3] [i_5] [i_6 - 2])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 3; i_7 < 22;i_7 += 1)
                    {
                        for (int i_8 = 4; i_8 < 22;i_8 += 1)
                        {
                            {
                                var_25 = -1;
                                arr_26 [i_7] [i_1] [i_2 - 1] [7] [i_8 + 2] = ((-(((((var_1 ? (arr_18 [i_0] [0] [i_0] [i_0]) : var_14))) ? (arr_24 [19] [i_1] [i_2 + 1] [i_7 - 3] [i_7 + 2] [i_8 - 2]) : (arr_21 [i_0] [i_1] [i_8] [i_7] [i_8 - 4])))));
                                arr_27 [i_0] [i_8] [i_2 + 4] [i_7 - 1] [i_8] |= (-(((arr_22 [i_0] [i_1] [18] [i_8]) << (((var_0 + 26331) - 29)))));
                            }
                        }
                    }
                    var_26 = ((((max(((4294967295 ? (arr_23 [i_0] [i_1] [i_2] [i_2]) : 249)), (arr_23 [i_0] [i_0] [i_2 + 1] [i_2])))) ? 3757276412 : (max((arr_25 [i_2 + 2] [i_2] [i_2] [i_2 + 2] [i_2 + 2] [i_2]), (min((arr_10 [i_1] [i_1] [i_0] [i_1] [i_2 + 2] [i_1]), (arr_19 [i_0] [i_0] [21])))))));
                }
            }
        }
    }
    var_27 = ((var_7 ? (!var_3) : var_13));
    var_28 = (min(var_28, (max(var_16, (((max(var_8, 606227995))))))));
    var_29 = (max(var_2, var_2));
    #pragma endscop
}

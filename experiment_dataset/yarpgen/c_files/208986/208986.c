/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208986
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, ((var_2 ? var_13 : (((((!var_0) >= (var_10 < var_0)))))))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_0 [i_0]) < ((3118482913496670479 ? 9056184909633434842 : -9056184909633434842))));
        var_15 = (arr_1 [i_0] [i_0]);
        arr_3 [1] = ((45 ? (((var_6 + (arr_1 [i_0] [i_0])))) : (var_11 > var_13)));
        arr_4 [14] [14] = (((((!(117 << 0))))) - (max((var_3 || var_11), (arr_0 [i_0]))));
    }
    for (int i_1 = 3; i_1 < 11;i_1 += 1)
    {
        var_16 -= ((-((~(arr_1 [i_1 - 1] [i_1 - 1])))));
        var_17 = (max(var_17, ((max((arr_6 [4]), var_1)))));
    }
    for (int i_2 = 3; i_2 < 11;i_2 += 1)
    {
        var_18 = (min(12985481801969567727, var_6));
        arr_10 [i_2] [i_2] = (min((((-872410303975106955 <= 137) > 117)), ((var_10 > (arr_5 [i_2 - 3] [i_2 - 3])))));
    }
    for (int i_3 = 1; i_3 < 7;i_3 += 1)
    {
        arr_14 [i_3] = ((min((arr_6 [6]), var_7)));
        arr_15 [i_3 + 3] [i_3] = min(var_0, ((var_1 && ((min(var_12, var_11))))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            {
                                arr_27 [i_3] [i_5] [i_5] [i_6] = ((-(min(var_13, (((arr_12 [i_5]) ? var_11 : var_3))))));
                                var_19 = min((((arr_20 [i_3] [i_5] [i_7]) ? (arr_20 [i_3 + 3] [i_5] [i_5]) : (arr_20 [i_5] [i_5] [i_7]))), (max(var_12, var_7)));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        var_20 = (max(var_20, var_13));
                        var_21 = (arr_12 [i_5]);

                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            var_22 = (((arr_11 [i_3 + 1]) | var_2));
                            arr_32 [i_5] = var_5;
                            var_23 = var_6;
                            var_24 = (max(var_24, (arr_28 [i_3 + 1])));
                        }
                        arr_33 [i_5] = (((arr_0 [i_3 - 1]) ? (arr_24 [i_3] [i_3 + 1] [i_3 + 3] [i_3 + 3] [0]) : (arr_29 [i_3] [i_3 + 3] [i_3 + 2])));
                        var_25 = (((arr_8 [i_3]) - var_7));
                    }
                    arr_34 [i_3] [i_3] [i_5] = (((((1 << (7827417444376986771 - 7827417444376986768)))) ? (((189 ? 137 : 1))) : var_12));
                    var_26 = (max(var_11, var_3));
                    var_27 = (min(var_27, (((((((((arr_29 [i_3] [2] [i_3 + 3]) + 9223372036854775807)) >> (arr_16 [i_3 + 2] [i_3 + 1])))) ? (max((((arr_23 [4] [i_4] [4] [i_5]) - var_2)), var_6)) : (9056184909633434841 | 18446744073709551615))))));
                }
            }
        }
    }
    #pragma endscop
}

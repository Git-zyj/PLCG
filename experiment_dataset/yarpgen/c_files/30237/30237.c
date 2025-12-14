/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30237
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= var_13;
    var_19 = ((var_8 ? var_14 : var_12));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 6;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_7 [i_1] = (!((((!(arr_2 [i_1 + 1] [i_0]))))));
                    arr_8 [i_1] [i_1 + 3] [i_1] [i_1] = (((86 ? (arr_5 [i_1 + 1] [i_1 - 1] [i_1 + 4] [i_1 + 4]) : -4)));
                    arr_9 [i_0] = ((-(arr_2 [i_0] [i_1 + 4])));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            {
                                arr_14 [i_1] = (((((!19360) ? 1 : (!1)))) ? (~var_0) : -17);
                                var_20 = (min(((-1873898181 ? ((61 ? 30349 : 1)) : ((6563471137711929778 ? 19111 : -9084)))), (!var_4)));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        var_21 = (((1 ? -36 : -125)));
                        arr_19 [i_5] [i_0] [5] [i_0] [i_0] [i_0] &= max(((((12028320427250182381 ? 32722 : var_9)))), 196);
                        var_22 = (!1708445283);
                        arr_20 [i_1] [i_2] = (min((~var_9), (min(-855691227, (arr_17 [i_1 - 1] [i_1 + 2])))));
                    }
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        arr_23 [i_1 + 1] [3] [i_1 + 1] [i_1] = (min((~217), (~var_5)));
                        arr_24 [i_6] [i_2] [i_1 + 4] [i_0] [i_0] = ((-((5 ? 65525 : 10870763722160380267))));
                        var_23 = var_11;
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_7 = 1; i_7 < 14;i_7 += 1)
    {
        var_24 |= (((-(arr_25 [14]))));
        arr_27 [i_7] = 65528;
        arr_28 [i_7] = (!var_3);
        var_25 ^= 1;
    }
    for (int i_8 = 1; i_8 < 14;i_8 += 1)
    {
        var_26 = 217;
        var_27 = (min(var_27, (((var_11 ? -1955186884 : (!var_14))))));
        arr_32 [i_8] = (max((min((((var_0 ? var_13 : var_14))), ((-(arr_26 [i_8]))))), (arr_31 [i_8])));
        var_28 = (((min(-15714, 1))));
    }
    for (int i_9 = 0; i_9 < 20;i_9 += 1)
    {
        arr_35 [i_9] [i_9] = (max(((max(-44, 1))), ((max((((arr_34 [i_9]) ? 1 : (arr_33 [i_9]))), (!var_13))))));
        arr_36 [i_9] [i_9] = (((((!(arr_33 [6]))))));
        arr_37 [i_9] = ((!(((((max(1, (arr_33 [i_9])))) ? var_11 : ((var_5 ? 1 : 1998299158)))))));
    }
    var_29 = ((((min((((var_9 ? var_10 : var_3))), var_15))) ? ((min(var_10, var_2))) : var_12));
    #pragma endscop
}

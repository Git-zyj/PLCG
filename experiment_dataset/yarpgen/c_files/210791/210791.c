/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210791
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_12 = (max((arr_1 [i_0]), var_8));
        arr_3 [i_0] = (arr_0 [i_0] [i_0]);
        var_13 = (min(var_13, (((~(((arr_0 [i_0] [i_0]) ^ 19355)))))));

        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        arr_13 [i_3] [i_2] [i_2] [i_3] [8] [i_3] = 543531183;
                        arr_14 [i_2] [i_1] [i_1] [i_2] = (arr_7 [i_0] [i_0] [i_0]);
                        arr_15 [9] [i_1] [i_2] [i_2] [i_2] = -543531190;

                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            arr_19 [i_2] = 69;
                            arr_20 [i_0] [i_2] = (max((var_6 ^ 9), ((~(max((arr_9 [i_0] [i_1] [i_4] [i_1]), 1689994145))))));
                        }
                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            arr_24 [i_2] [i_1] [i_2] [i_2] [i_3] [i_3] [i_5] = ((((min(var_8, 1))) ? (((arr_0 [i_1 + 2] [i_1 - 1]) ? var_4 : (arr_0 [i_1 + 1] [i_1 + 1]))) : (((arr_0 [i_1 + 2] [i_1 + 1]) - (arr_0 [i_1 + 2] [i_1 + 2])))));
                            var_14 = (max((min(-1, 543531185)), ((min((arr_11 [i_1 + 1] [i_1 + 2] [i_1 + 1]), 255)))));
                        }
                    }
                }
            }
            arr_25 [i_0] = (((((((!(arr_21 [12] [i_1])))))) ? (min(var_11, (var_7 + var_4))) : var_1));
            var_15 = (max(var_15, (arr_18 [i_0] [i_1 - 1] [i_1 - 1] [9] [i_1] [i_0] [i_0])));
            var_16 = ((!(arr_11 [i_1 + 1] [i_1 + 1] [i_1 + 2])));
        }
    }
    var_17 = -61;

    for (int i_6 = 0; i_6 < 15;i_6 += 1)
    {
        arr_28 [i_6] = (((((max(1, 543531156)))) && ((max(-7361858781956211783, 256)))));
        arr_29 [i_6] = (!var_10);

        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            var_18 = (arr_26 [i_6]);
            var_19 = (min(var_19, (((max((arr_32 [i_7] [i_7]), 1))))));
            arr_33 [i_6] [i_6] = (((((-(min(4294967055, var_5))))) ? ((((((arr_31 [i_6]) + 852350643))) ? ((min(var_9, 1001183051))) : (11782337580553545273 / 1))) : (max(-4, ((37608 ? (arr_30 [i_6] [i_6]) : 9100597686030274225))))));
        }
        var_20 = ((((min((arr_30 [i_6] [i_6]), (arr_30 [i_6] [i_6])))) << (77 - 72)));
    }
    for (int i_8 = 0; i_8 < 24;i_8 += 1)
    {
        var_21 = (min(((((((arr_36 [i_8]) ? (arr_34 [i_8]) : 7)) >= ((-(arr_34 [i_8])))))), (((var_5 ? (arr_35 [i_8]) : (arr_36 [i_8]))))));
        arr_37 [i_8] = (((arr_35 [i_8]) ? (max((arr_35 [i_8]), (arr_35 [i_8]))) : (((1 > (arr_35 [i_8]))))));
    }
    #pragma endscop
}

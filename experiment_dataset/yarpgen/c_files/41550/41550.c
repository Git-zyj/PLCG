/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41550
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min((min((var_5 | var_3), ((var_5 ? var_11 : var_5)))), (((var_4 ? (~var_6) : var_2)))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = (max((((((arr_1 [i_0]) && (arr_1 [i_0]))) ? (((arr_1 [i_0]) ? (arr_0 [i_0]) : var_2)) : (var_10 % var_9))), ((((((-1 ? -4096 : 6))) || (((-(arr_0 [i_0])))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] &= (((((((arr_1 [i_0]) ? (arr_1 [i_2]) : (arr_1 [i_0])))) ? ((min(var_9, (arr_4 [i_0] [i_1])))) : (min((arr_6 [i_0] [i_0] [i_2 - 1] [i_0]), (arr_0 [i_0]))))));
                    arr_9 [i_2] [i_2] = (min(-1, -4));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_3] [i_2] |= ((((((-32767 - 1) ? (arr_12 [i_1] [i_3]) : var_5))) ? (arr_0 [i_0]) : var_7));
                        arr_15 [i_0] [i_2] = (((arr_0 [i_2 - 1]) ? (arr_0 [i_2 - 1]) : var_10));
                        arr_16 [i_0] [i_1] [i_2] [i_2] = (arr_1 [i_0]);
                        arr_17 [i_0] [i_2] [i_0] [i_2] [i_2] [i_3] = (arr_4 [i_0] [i_0]);
                    }
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        arr_21 [i_0] [i_1] [i_2] [i_4] [i_0] = (((arr_19 [i_0]) ? var_6 : (((((67 ? -11 : -1188278983))) ? (max((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_4 [i_0] [i_0]))) : ((min((arr_20 [i_1] [i_2] [i_4]), (arr_0 [i_2 - 1]))))))));
                        arr_22 [i_0] [i_1] [i_1] [i_2] [i_2] = (((arr_19 [i_1]) ? (min((arr_0 [i_0]), (arr_1 [i_1]))) : (((var_10 ? (arr_13 [i_2] [i_2 - 1] [1] [i_2 - 1] [9]) : ((-60 ? 54 : (arr_12 [i_2] [i_1]))))))));
                        arr_23 [i_0] [7] [i_0] [i_2] = (((((var_7 ? (arr_13 [i_2] [i_4] [i_2] [i_0] [i_0]) : (arr_5 [i_0] [i_1] [i_2] [8])))) >= (arr_19 [i_0])));
                    }
                    arr_24 [i_2] = ((min((!var_11), (max((arr_12 [i_2] [i_1]), (arr_3 [i_1]))))));
                    arr_25 [i_2 - 1] [i_2] [i_0] = (((((-((min((arr_5 [i_2] [i_1] [i_2] [i_0]), (arr_11 [1] [1] [i_2] [i_1] [i_2 - 1]))))))) / (min((max(var_5, var_5)), (arr_4 [i_2 - 1] [i_2 - 1])))));
                }
            }
        }
        arr_26 [i_0] [i_0] = (max((arr_4 [i_0] [i_0]), (min((((arr_6 [3] [9] [i_0] [i_0]) ? (arr_6 [i_0] [i_0] [i_0] [1]) : var_1)), (var_3 || var_6)))));

        for (int i_5 = 1; i_5 < 10;i_5 += 1)
        {
            arr_30 [11] = (min((((((-(arr_27 [i_0] [i_0])))) ? (((arr_29 [i_0] [i_5 - 1] [i_0]) ? (arr_19 [i_5 + 2]) : (arr_13 [i_0] [i_5 + 2] [i_0] [i_0] [i_5]))) : ((min((arr_29 [i_0] [i_5] [i_0]), (arr_19 [i_0])))))), (max((arr_19 [i_0]), (((arr_7 [4] [4] [i_5 + 3] [i_0]) ? (arr_28 [i_0] [i_0]) : (arr_19 [i_0])))))));
            /* LoopNest 3 */
            for (int i_6 = 1; i_6 < 12;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        {
                            arr_39 [i_0] [i_5 + 2] [i_6] [0] [i_8] = (((arr_3 [i_8]) ? (arr_34 [i_0] [i_5] [9] [i_7] [i_5]) : ((var_8 | (max((arr_33 [i_0] [i_0] [6] [i_0]), var_9))))));
                            arr_40 [12] [i_7] [i_7] [i_6] [i_7] [12] [i_0] = arr_37 [i_8] [i_7] [i_6] [i_6] [i_6] [i_7] [i_0];
                        }
                    }
                }
            }
            arr_41 [i_0] [1] = (((((arr_35 [i_5] [i_0] [i_0] [i_0]) ? (arr_18 [i_0] [i_5 - 1] [i_5] [i_5 - 1]) : (arr_35 [i_0] [i_0] [i_0] [i_5]))) != (max((((arr_10 [i_5] [i_5]) ? (arr_36 [i_0] [i_0] [i_5] [4]) : (arr_29 [i_5] [i_0] [1]))), (arr_32 [i_0] [1] [i_5])))));
        }
    }
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        arr_44 [i_9] &= ((!(((var_4 ? (arr_43 [i_9] [i_9]) : ((1 ? 61 : -62)))))));
        arr_45 [i_9] = ((7 ? 130 : ((54635 ? -76 : -48))));
    }
    #pragma endscop
}

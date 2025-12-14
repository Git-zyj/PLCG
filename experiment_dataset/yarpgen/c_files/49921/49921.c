/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49921
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((max(var_1, (((var_7 ? var_0 : var_0))))));
    var_11 = (max((min(((var_6 ? var_0 : var_8)), ((var_7 ? var_2 : var_8)))), ((var_0 ? var_5 : ((var_6 ? var_0 : var_4))))));
    var_12 = var_4;
    var_13 = (min((max(13666145998426895085, (max(63, 11027699038965980621)))), var_1));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = ((!(arr_0 [8])));
        arr_4 [i_0] = (arr_0 [i_0]);
        arr_5 [i_0] [i_0] = (((arr_2 [i_0] [i_0]) && (arr_2 [i_0] [i_0])));
        arr_6 [i_0] = (((arr_0 [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0])));
    }
    for (int i_1 = 1; i_1 < 20;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 4; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                {
                    var_14 = ((-74 ? 1 : 1));
                    arr_15 [i_1] [i_3] [i_1] [i_1 + 1] = (max(((max(1, 1))), (min(0, (min(-19601, 255))))));
                }
            }
        }

        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            arr_19 [i_1] [i_4 - 1] = (((arr_14 [i_1 + 1] [i_1] [i_4] [i_4]) ? (((!16991108652505090210) ? 11027699038965980621 : 70368744177648)) : ((255 ? (max(-1698478143, 1994341779227642623)) : 1804))));
            arr_20 [i_1] [i_4 - 1] = (((max((arr_11 [i_4 - 1]), (arr_13 [i_4 - 1] [i_4 - 1] [i_4])))) | ((((((arr_14 [i_1 + 2] [i_1] [i_1 + 2] [i_4]) ? (arr_14 [i_1] [i_1] [i_4 - 1] [i_4 - 1]) : (arr_9 [i_4])))) ? (arr_10 [i_1 + 2] [i_1] [i_4 - 1]) : (arr_7 [i_4 - 1] [i_4 - 1]))));
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        {
                            arr_31 [i_6] [i_6] = ((((max((max((arr_12 [i_1]), (arr_24 [i_5] [i_5]))), (arr_21 [i_1 - 1] [i_1 - 1] [i_7])))) ? ((((max((arr_23 [i_7] [i_7] [i_7]), (arr_10 [13] [i_5] [i_7])))) ? (((arr_22 [i_1] [i_4] [i_1]) ? (arr_21 [13] [13] [i_7]) : (arr_9 [i_7]))) : (arr_10 [i_4 - 1] [i_4 - 1] [i_4]))) : ((((arr_12 [i_1 + 1]) ? ((~(arr_23 [i_7] [i_5] [i_4]))) : (min((arr_27 [i_7] [i_7] [i_6] [i_5] [8] [i_1 + 1]), (arr_9 [i_7]))))))));
                            arr_32 [i_6] = ((((((arr_24 [i_1 + 1] [i_6]) ? (arr_24 [i_4] [i_6]) : (arr_24 [i_1 + 1] [i_1 + 1])))) ? (!-7350817351219868919) : ((((arr_24 [i_1 - 1] [i_7]) && (arr_24 [i_5] [i_1 - 1]))))));
                            var_15 = (min(11027699038965980616, 244));
                            var_16 = (max(((-(arr_21 [i_5] [i_1 + 1] [i_4 - 1]))), ((((arr_29 [i_6] [i_1] [i_5] [i_6] [1] [i_6]) ? (arr_27 [i_1] [i_4 - 1] [i_4 - 1] [i_5] [i_6] [i_7]) : (arr_11 [i_1 + 1]))))));
                            arr_33 [i_1] [i_6] = (max((((arr_24 [i_4 - 1] [i_4 - 1]) ^ (arr_24 [i_4 - 1] [i_4 - 1]))), (((-(arr_17 [i_1 + 2]))))));
                        }
                    }
                }
            }
            arr_34 [i_1] [i_1 + 2] [i_4 - 1] = (((arr_23 [i_4 - 1] [i_4 - 1] [i_4]) ? (max((max(-2383544665689278389, 0)), (arr_12 [i_1 + 2]))) : ((((arr_17 [i_4 - 1]) ? (max((arr_27 [i_4] [i_4] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1]), (arr_25 [18] [18] [i_4] [i_4 - 1]))) : (max((arr_27 [i_1 + 1] [i_1 + 2] [i_1] [i_4] [14] [i_4]), (arr_27 [7] [i_4] [i_4 - 1] [i_1] [i_1 - 1] [i_1]))))))));
        }
        arr_35 [i_1 + 1] = (max(-1337843510, 3280147860432110047));
    }
    #pragma endscop
}

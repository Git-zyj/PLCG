/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190762
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_12;

    for (int i_0 = 3; i_0 < 12;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (max(1543218271897661544, 65535));
        arr_3 [i_0] [i_0 + 2] = ((((((arr_1 [i_0 + 1]) - (arr_1 [i_0 - 1])))) ? (((-(arr_1 [i_0 - 3])))) : (max(-899189861, -1543218271897661543))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_18 = (((arr_5 [i_0] [i_0] [i_1]) ? 0 : ((((arr_5 [i_0] [8] [i_0 - 3]) ? (arr_5 [i_0 - 3] [i_1] [0]) : (arr_1 [i_1]))))));
            arr_6 [6] = ((var_4 ? (arr_5 [i_0] [i_1] [i_0 - 2]) : ((-(arr_5 [i_0] [i_0 - 1] [i_0])))));
        }
        for (int i_2 = 1; i_2 < 13;i_2 += 1)
        {
            var_19 = (-((-1543218271897661545 ? 62 : 76)));
            var_20 = (max(4294967295, 122));
            var_21 = (max(var_21, (((-10073 ^ ((max(((((arr_9 [i_0]) == (arr_5 [i_0] [i_0] [i_0])))), (arr_8 [i_2 + 1])))))))));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 13;i_4 += 1)
                {
                    {
                        var_22 = (min((max((arr_11 [i_4 - 2] [i_4] [i_4] [i_4 + 1]), -1543218271897661524)), ((((arr_1 [i_4 - 1]) ? ((max(var_3, 63536))) : (((arr_12 [i_4 - 2] [i_2] [i_2] [i_0 - 1]) ? (arr_11 [i_0] [i_2 - 1] [i_0] [i_4]) : (arr_1 [i_0]))))))));
                        arr_17 [i_3] [i_2] [i_4] = (max(((max((arr_11 [i_3] [i_3] [i_4 + 1] [i_4 - 2]), (arr_11 [i_3] [i_4 - 2] [i_3] [i_4 + 1])))), ((26526 ? (arr_1 [i_4 - 1]) : (arr_1 [i_4 + 1])))));
                        var_23 = var_4;
                        arr_18 [i_0 - 3] [i_2 + 1] [i_4] [i_3] [i_4] [i_4] = ((!(((-(((-77 || (arr_4 [i_4])))))))));
                    }
                }
            }
        }
        var_24 = (min(63536, ((((((max((arr_11 [i_0] [i_0] [i_0] [i_0]), var_2)))) == var_0)))));
    }
    for (int i_5 = 3; i_5 < 12;i_5 += 1) /* same iter space */
    {

        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            arr_26 [i_5] [i_6] [i_5 - 3] = ((((((arr_19 [i_5]) / (arr_7 [i_5 - 2])))) ? (((((14012681737725474544 & (arr_22 [4] [i_5]))) > (0 < 4434062335984077072)))) : var_6));
            arr_27 [12] [i_5] = (min((~var_9), (((arr_22 [i_5 + 1] [i_5 - 2]) & (arr_22 [i_5 + 1] [i_5 - 2])))));
            var_25 = max(var_8, (((arr_24 [i_5] [i_5]) ? (arr_14 [i_5] [i_5 + 1] [i_5 + 1] [i_5]) : 7881299347898368)));
        }
        arr_28 [i_5] [i_5] = (((((((max(1, 23))) ? (((max((arr_11 [i_5] [i_5 + 1] [i_5] [i_5]), var_4)))) : (max((arr_11 [i_5] [i_5] [i_5 + 1] [i_5]), var_0))))) ? (arr_25 [i_5]) : (max(((2007 ? (arr_7 [i_5]) : 14012681737725474544)), ((var_15 ? 14012681737725474544 : -122))))));
    }
    for (int i_7 = 3; i_7 < 12;i_7 += 1) /* same iter space */
    {
        var_26 = -1543218271897661545;
        var_27 |= var_0;
        var_28 = (max(var_28, ((max(63537, 0)))));
        arr_31 [i_7] = (arr_20 [i_7]);
    }
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 20;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 20;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 20;i_10 += 1)
            {
                {
                    var_29 -= -1;
                    arr_40 [i_8] [i_9] [i_10] |= (arr_35 [i_8]);
                }
            }
        }
    }
    #pragma endscop
}

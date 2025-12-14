/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213092
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
                    {
                        arr_10 [i_0] [i_0] [i_1] = (max((min((((arr_0 [i_0] [1]) ? 14202296364820601759 : (arr_1 [i_3]))), (((-5377 ? var_1 : var_17))))), (arr_7 [i_0] [i_2] [i_0] [i_0])));
                        var_19 = (max(237, ((0 ? (14336 && -5377) : (arr_2 [i_1 + 1] [i_2])))));
                        var_20 += (arr_1 [14]);
                    }
                    for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
                    {
                        arr_13 [i_0 - 2] [i_0] [i_1] [i_4] = (max((min((arr_0 [i_2] [i_4]), (arr_5 [i_4] [13]))), 102));

                        for (int i_5 = 3; i_5 < 14;i_5 += 1)
                        {
                            var_21 &= (((((((max(39, -5356))) & -24321))) ? ((~(arr_3 [i_1 - 1] [i_1 + 2] [i_1 + 2]))) : ((min(var_5, ((((arr_11 [2] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_5 - 3]) ? (arr_6 [i_0 + 1] [i_1] [6] [i_4]) : 11692))))))));
                            arr_17 [i_5] [i_4] [i_0] [13] [i_0] = ((((((5388 >> var_13) ? (arr_4 [i_0] [i_1 - 1]) : var_17))) ? (((arr_14 [10] [i_0] [i_1 - 1] [i_1 + 2] [i_2] [4] [i_1 - 1]) ? ((max(-5358, 0))) : var_18)) : ((min((arr_14 [i_0] [9] [i_0] [i_0] [i_0 - 2] [i_1 - 1] [i_5]), var_6)))));
                            arr_18 [i_0 - 2] [i_1] [i_2] [i_4] [i_0] = (max((((arr_4 [i_0] [i_1 + 1]) ? (arr_4 [i_0] [i_1 + 1]) : 495156097)), ((((arr_0 [i_1] [i_1 + 1]) ? (arr_4 [i_0] [i_1 + 1]) : (arr_4 [i_0] [i_1 + 1]))))));
                        }
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            arr_22 [i_0 + 2] [i_0] [i_0 + 2] [8] = (arr_16 [i_0 + 1] [i_6]);
                            var_22 = ((((-5377 ? ((-83 ? (arr_12 [i_0] [i_0]) : var_2)) : -67)) > 181));
                        }
                        for (int i_7 = 4; i_7 < 14;i_7 += 1) /* same iter space */
                        {
                            var_23 = ((84 && (((~(((arr_3 [7] [i_1] [i_7]) | 0)))))));
                            var_24 = (((arr_0 [0] [i_1]) >= 230));
                            arr_26 [i_0] [i_0] [i_0] [i_0] = ((~((((-20017 ? (arr_15 [1] [i_2] [i_1 - 1] [i_0]) : -23)) & (arr_16 [i_0] [i_0])))));
                        }
                        for (int i_8 = 4; i_8 < 14;i_8 += 1) /* same iter space */
                        {
                            arr_29 [i_0 + 1] [i_0] [i_2] [i_4] [i_0 + 1] [i_2] = (min((arr_5 [i_0 + 2] [i_0 - 3]), (arr_5 [i_0 + 2] [i_0 + 2])));
                            var_25 += ((((!(5920 + -32754)))));
                            var_26 = (((!(((65535 ? -5362 : (arr_15 [i_0] [14] [i_4] [i_8])))))));
                            arr_30 [i_0] [i_0] [i_0] [i_4] [i_8] = (min((arr_4 [i_0] [i_1 - 1]), (arr_14 [i_0 - 3] [i_0 - 3] [i_1 + 1] [i_4] [i_8] [i_8 - 3] [i_0 + 2])));
                        }
                        var_27 = ((var_3 - (((((arr_25 [i_2] [i_2]) * (arr_3 [i_1] [2] [i_4]))) / (((min(12770, (arr_16 [i_4] [i_1])))))))));
                    }
                    var_28 = (!-100);
                }
            }
        }
    }
    var_29 = var_16;
    /* LoopNest 3 */
    for (int i_9 = 2; i_9 < 14;i_9 += 1)
    {
        for (int i_10 = 4; i_10 < 14;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 15;i_11 += 1)
            {
                {

                    for (int i_12 = 2; i_12 < 15;i_12 += 1)
                    {
                        var_30 ^= (((!((((arr_35 [i_11] [i_11]) ? (arr_34 [i_9]) : (arr_35 [i_10 + 1] [i_11 - 1])))))));
                        arr_40 [2] = (arr_32 [i_9] [i_10 - 1]);
                        arr_41 [i_9 + 1] [i_10 + 1] [i_11] [i_12] |= (arr_37 [i_11 + 1] [i_11 + 1]);
                        arr_42 [i_12] [7] [i_11] [i_10] [i_9 + 1] [i_9] = 22;
                    }
                    var_31 ^= (arr_34 [i_10]);
                }
            }
        }
    }
    var_32 = (max(var_12, (max(var_4, ((0 ? 4811058609709830874 : 255))))));
    var_33 = var_3;
    #pragma endscop
}

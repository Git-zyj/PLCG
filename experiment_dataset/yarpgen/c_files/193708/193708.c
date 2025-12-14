/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193708
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_11 += (min((arr_2 [i_1 - 2] [i_1 + 1]), (((!((!(arr_7 [i_0] [i_0] [i_0]))))))));
                    var_12 = (arr_2 [i_0] [i_0]);
                    var_13 = ((((max(((var_0 / (arr_5 [i_0] [i_0]))), var_9))) ? (((15001 - ((216 ? 3 : (arr_6 [i_2] [i_1] [i_2] [i_2])))))) : (min((arr_5 [i_0] [12]), ((((arr_4 [i_2] [i_0]) ? 1 : var_7)))))));
                    var_14 *= (arr_7 [i_0] [i_0] [i_0]);
                    arr_8 [i_2] = (max(280311613, ((max((arr_2 [i_2] [i_0]), var_6)))));
                }
            }
        }
    }

    for (int i_3 = 2; i_3 < 12;i_3 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    var_15 = (arr_10 [i_5]);
                    var_16 = ((((max(((var_4 ? (arr_11 [i_3] [i_4] [i_5]) : (arr_6 [i_4] [5] [i_5] [12]))), -15006))) || (arr_14 [i_3] [i_5] [i_5] [1])));
                }
            }
        }
        var_17 = arr_9 [i_3];
    }
    for (int i_6 = 2; i_6 < 12;i_6 += 1) /* same iter space */
    {
        var_18 = ((((-(arr_15 [i_6] [i_6]))) == 14989));
        /* LoopNest 3 */
        for (int i_7 = 4; i_7 < 14;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 13;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    {
                        var_19 = (min((arr_4 [i_6 + 1] [i_7]), (((!(var_2 || 15007))))));
                        var_20 = ((-((((arr_25 [i_7] [i_7] [i_8 - 2]) && (arr_15 [i_7] [i_7]))))));
                        arr_28 [13] [i_7] [i_8] [i_7] [i_7] = (i_7 % 2 == zero) ? ((((arr_17 [i_7] [i_7]) >> (arr_6 [i_7] [i_7] [i_8] [i_9])))) : ((((arr_17 [i_7] [i_7]) >> (((arr_6 [i_7] [i_7] [i_8] [i_9]) + 16)))));
                        var_21 = (max((arr_2 [i_6] [i_6]), (arr_27 [i_7] [i_9] [i_9] [i_9] [i_6] [10])));

                        for (int i_10 = 0; i_10 < 15;i_10 += 1) /* same iter space */
                        {
                            var_22 = (arr_11 [i_7] [i_8 - 2] [i_10]);
                            var_23 = (min((!33), (min(7778616078226269688, 10668127995483281948))));
                        }
                        for (int i_11 = 0; i_11 < 15;i_11 += 1) /* same iter space */
                        {
                            var_24 = (i_7 % 2 == zero) ? ((((arr_5 [i_9] [i_7 - 1]) / ((((((var_2 ? (arr_12 [i_7] [14]) : (arr_21 [i_6 + 1])))) ? (arr_18 [i_6 + 3]) : (~var_2))))))) : ((((arr_5 [i_9] [i_7 - 1]) * ((((((var_2 ? (arr_12 [i_7] [14]) : (arr_21 [i_6 + 1])))) ? (arr_18 [i_6 + 3]) : (~var_2)))))));
                            var_25 |= var_9;
                        }
                        for (int i_12 = 0; i_12 < 15;i_12 += 1) /* same iter space */
                        {
                            var_26 = var_4;
                            var_27 = (min((var_10 - var_8), (arr_7 [i_8] [i_7] [i_12])));
                            arr_35 [i_7] [i_7] = (((2654154685655454427 - 7778616078226269688) ? 15009 : -34));
                            var_28 = ((~((min((max(var_9, var_7)), (max(var_1, (arr_6 [i_7] [18] [15] [i_9]))))))));
                        }
                        for (int i_13 = 1; i_13 < 14;i_13 += 1)
                        {
                            arr_38 [i_7] [i_7 + 1] [i_8 - 1] [i_9] [i_7] = (min((((arr_23 [i_8 + 2] [i_9] [i_7]) ? ((((arr_11 [i_6] [i_9] [i_9]) ? (arr_36 [1] [i_7] [i_7] [i_9] [1]) : var_5))) : (min((arr_4 [i_6] [i_9]), (arr_5 [9] [i_7]))))), ((((arr_16 [i_7]) ? ((max((arr_12 [i_7] [i_7]), var_7))) : ((min((arr_22 [i_13 + 1] [i_7] [i_7] [i_6]), 123))))))));
                            var_29 = (min(var_29, ((max((arr_12 [i_6] [i_13 - 1]), (((arr_32 [i_6 - 1]) == (arr_27 [i_6] [i_6 - 2] [i_6 + 3] [i_6 + 1] [i_6 + 2] [i_6 + 2]))))))));
                            arr_39 [i_6] [i_7] [i_6] [i_9] [i_7] = (((var_10 ? (arr_0 [i_13 + 1]) : (arr_0 [i_13 + 1]))));
                            var_30 &= ((arr_1 [i_6]) ? ((-39 & (((arr_4 [i_6] [18]) ? var_4 : (arr_22 [i_9] [i_6] [i_9] [i_9]))))) : (arr_18 [i_9]));
                            arr_40 [i_6] [i_7] [9] [i_7] [i_9] [i_13] = ((((((arr_23 [i_9] [i_7] [i_7]) ? (arr_30 [i_6] [i_6] [i_8] [i_9] [i_7] [i_9]) : (arr_3 [i_6 - 1] [i_7 - 3] [i_8 + 1])))) + (((~50528) ? var_0 : (arr_24 [i_7] [i_7] [i_7])))));
                        }
                    }
                }
            }
        }
        arr_41 [14] [i_6] |= (min(((765793468 ? 364872633 : 7778616078226269696)), 136));
    }
    #pragma endscop
}

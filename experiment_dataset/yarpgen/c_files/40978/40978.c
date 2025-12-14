/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40978
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 14;i_3 += 1)
                {
                    {
                        arr_9 [i_1] [i_2] [i_1] = 100;
                        var_17 = (arr_6 [1] [i_1] [i_2]);
                        var_18 = (max(var_18, (((((max(21447, -22859))) ? ((max((arr_2 [i_1] [i_0] [i_3]), (arr_3 [i_1] [i_3 - 3])))) : (arr_2 [i_3] [i_2] [i_0 - 3]))))));
                    }
                }
            }
        }
        var_19 = (min(var_19, ((((var_14 ? ((var_2 << (49 - 24))) : ((max(var_14, var_0)))))))));
    }
    for (int i_4 = 1; i_4 < 17;i_4 += 1)
    {
        arr_12 [i_4] [i_4 - 1] = ((!(((max(var_1, var_14)) < (arr_8 [2] [i_4] [i_4] [0])))));
        var_20 = ((((arr_1 [i_4]) ? 1883385291833291142 : (((154 ? 8 : var_3))))));
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        arr_16 [i_5] = (arr_0 [8]);
        /* LoopNest 3 */
        for (int i_6 = 2; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                for (int i_8 = 3; i_8 < 11;i_8 += 1)
                {
                    {
                        arr_25 [i_5] [i_6] [i_5] [i_8] = (max(((max(var_9, var_16))), (max(var_13, ((min((arr_13 [i_7] [i_7]), var_14)))))));
                        arr_26 [i_5] [i_5] [i_5] [i_5] = ((~(((arr_3 [i_8] [i_6 - 2]) ? (arr_5 [i_8] [i_8 + 2] [i_8 + 3] [i_6 - 1]) : (arr_5 [i_8] [i_8 - 3] [i_6 - 1] [i_6 - 2])))));
                        arr_27 [i_5] [i_5] [i_5] [i_7] [i_8] = ((-(arr_2 [i_8 - 1] [i_5] [i_6 - 2])));
                        arr_28 [i_8] [i_5] [i_5] = (max((((arr_14 [i_5]) ? var_15 : ((var_5 ? (arr_0 [5]) : (arr_23 [i_5]))))), ((max(var_0, (max(var_7, 65529)))))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 14;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 13;i_10 += 1)
            {
                {
                    arr_34 [i_5] [4] [4] [i_5] = (arr_22 [i_5] [i_10 - 1]);
                    arr_35 [i_5] [i_5] [i_5] = (arr_19 [i_5] [i_9] [i_10]);

                    for (int i_11 = 1; i_11 < 13;i_11 += 1) /* same iter space */
                    {
                        arr_39 [i_5] [i_10] [i_10] = ((((max((((~(arr_33 [i_10] [i_9] [i_5])))), (arr_37 [i_5] [i_10] [i_9] [i_5])))) < ((var_7 ? (arr_6 [i_11 - 1] [i_10 - 1] [i_5]) : var_6))));
                        var_21 = (max(var_21, (((~(!21469))))));
                        arr_40 [i_5] [i_9] [i_10] [0] |= var_9;
                    }
                    for (int i_12 = 1; i_12 < 13;i_12 += 1) /* same iter space */
                    {
                        var_22 = (max((max((arr_18 [i_5]), (arr_21 [i_9] [i_5] [i_5]))), ((((arr_10 [i_10]) - (arr_22 [i_5] [i_10]))))));
                        arr_43 [i_5] [i_5] [i_9] [i_10] [i_12] = ((!((((arr_14 [i_5]) >> (var_1 - 3490170113))))));
                        arr_44 [i_5] [i_5] [i_5] [i_12] = (max((max((arr_8 [i_5] [i_9] [i_10] [i_5]), (((arr_31 [i_5]) - var_6)))), ((max(var_7, 1)))));
                        var_23 = (~var_0);
                        arr_45 [i_10] [i_5] [i_9] [i_9] [i_5] [5] = (((((arr_6 [i_10 - 1] [i_12 - 1] [i_12 - 1]) | (arr_6 [i_10 + 1] [i_12 + 1] [i_12 + 1])))) <= ((1927037770987287001 - (arr_6 [i_10 + 1] [i_12 - 1] [i_12 - 1]))));
                    }
                }
            }
        }
    }
    var_24 = -var_0;
    /* LoopNest 2 */
    for (int i_13 = 1; i_13 < 21;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 22;i_14 += 1)
        {
            {
                var_25 *= (!((max(var_5, var_1))));
                arr_51 [i_14] [i_13] [i_14] = (arr_49 [7] [i_14] [i_14]);
            }
        }
    }
    #pragma endscop
}

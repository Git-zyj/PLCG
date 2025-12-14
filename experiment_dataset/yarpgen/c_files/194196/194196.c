/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194196
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_20 -= (((arr_0 [9] [i_0]) >= (~var_12)));
        arr_2 [i_0] = (arr_0 [i_0] [i_0]);
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 19;i_4 += 1)
                    {
                        for (int i_5 = 3; i_5 < 17;i_5 += 1)
                        {
                            {
                                var_21 = ((arr_6 [0] [i_4 + 1] [i_3]) + ((((arr_16 [i_5 - 1] [i_5] [i_5 + 3] [i_4 + 1] [6] [i_5] [i_4 - 1]) ? (arr_16 [i_5 - 1] [i_5] [i_5 - 2] [i_4 + 1] [i_4 + 1] [i_5] [i_4 + 1]) : (arr_16 [i_5 - 1] [i_5] [i_5 + 3] [i_4 + 1] [7] [i_5] [i_4 + 1])))));
                                var_22 += ((-(((~13861632171965605693) ? ((14271 ? var_17 : var_7)) : (arr_13 [i_4 - 1] [i_5 - 3])))));
                                arr_17 [i_5] [1] [13] = 14275;
                                var_23 = ((!((((!-118) % ((103 ? 3690581702987964219 : 949437371)))))));
                                var_24 = ((-((((((arr_11 [i_3] [8] [i_3] [0]) / 3220460981243035869))) ? 3220460981243035893 : 30235))));
                            }
                        }
                    }
                    var_25 = (arr_10 [i_1] [i_1] [3] [i_1]);
                }
            }
        }
        var_26 = (arr_12 [16] [10] [i_1] [i_1] [16] [i_1]);
        arr_18 [13] = (((!139) > (((arr_8 [i_1] [i_1]) ? (arr_8 [i_1] [i_1]) : (arr_8 [i_1] [i_1])))));
        var_27 = (max(var_27, (arr_15 [2] [i_1] [i_1] [i_1] [i_1] [i_1])));
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 11;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 11;i_10 += 1)
                        {
                            {
                                arr_33 [i_6] [i_7] [i_8] [i_9] [i_10] = ((~(((!(arr_3 [i_7] [i_9]))))));
                                arr_34 [i_6] [i_6] [i_8] [i_9] [5] = (((arr_30 [6] [i_8] [i_9] [i_10]) + (arr_24 [i_6] [i_6] [i_6])));
                                var_28 = (max(var_28, -6));
                            }
                        }
                    }
                }
                var_29 = (min(var_29, ((((((arr_22 [i_7] [i_6]) ? (arr_22 [i_6] [i_7]) : (arr_22 [i_7] [i_7]))) == 59911)))));
                var_30 = 74;
            }
        }
    }
    var_31 ^= var_6;
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 22;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 22;i_12 += 1)
        {
            {
                arr_40 [i_11] = 1;
                var_32 = (min(var_32, (((((((arr_35 [i_11]) < 24205))) ? ((-8192 ? 184 : -87)) : ((-var_15 ? (arr_35 [i_11]) : ((-(arr_37 [i_11]))))))))));
                var_33 = (arr_37 [19]);
                arr_41 [5] [i_12] = ((23429 ? -9223372036854775789 : (arr_36 [i_12])));
                arr_42 [i_11] [6] = (-14414 & 49);
            }
        }
    }
    var_34 += ((var_2 ? var_10 : var_0));
    #pragma endscop
}

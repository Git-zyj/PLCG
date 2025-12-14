/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202995
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += (134217727 > var_8);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_11 = (max(var_11, (((((((arr_0 [i_1 + 1]) % (arr_2 [4] [i_1])))) && ((((arr_0 [i_2]) * 2366254492))))))));
                    arr_10 [i_0] [i_1] [i_1 + 1] [i_1] = ((((min(-1, (2147483634 || var_2)))) ? ((4294967291 ? ((min(-2147483617, 2147483634))) : 134217727)) : ((2147483640 ? 24 : 2242222226158452601))));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
                    {
                        var_12 = ((~2147483634) & -134217722);
                        arr_13 [i_0] [10] [10] [i_3] [i_1] = (2147483634 - 134217694);
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                    {
                        arr_16 [i_0] [i_0] [16] |= (((2147483627 / 2147483634) * (arr_9 [i_1 + 1] [16])));
                        arr_17 [2] [i_2] [2] [i_2] [i_1] [7] = (2324 + 134217737);
                        var_13 -= ((((arr_14 [i_0] [0] [i_2] [1]) ? ((((-9515 != (arr_4 [i_0] [16]))))) : ((63212 ? (arr_3 [i_0] [i_2]) : var_9)))));
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 4; i_6 < 15;i_6 += 1)
                        {
                            {
                                var_14 *= max(((((arr_3 [i_1 + 1] [i_5 - 2]) < (arr_3 [i_1 + 1] [i_5 - 1])))), var_7);
                                arr_23 [i_6] [i_5] [i_1] [i_1] [i_0] [i_0] = -134217711;
                                var_15 = ((((((arr_15 [i_0] [i_1] [i_1] [i_5] [i_6]) * ((63215 ? 2324 : 2324))))) % -134217727));
                            }
                        }
                    }
                    var_16 = (max(var_16, (arr_4 [8] [8])));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 18;i_8 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 16;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 15;i_10 += 1)
                        {
                            {
                                arr_36 [i_7] [i_7] [i_7] [1] [i_7] = (((arr_5 [i_7]) + (((-(arr_33 [i_9 - 1] [i_10] [i_10] [i_10 + 1] [i_10] [i_7]))))));
                                var_17 = var_3;
                            }
                        }
                    }
                    arr_37 [i_7] [i_7] [i_7] [i_7] = ((+(((arr_31 [i_7]) ? 22 : (arr_31 [i_7])))));
                }
            }
        }
        var_18 = (max(var_18, 31782));
        var_19 = (max(var_19, (((((max((arr_24 [6] [i_0] [6]), (arr_30 [i_0] [i_0] [i_0] [11])))) && 65514)))));
        arr_38 [i_0] = (((((arr_28 [i_0] [14] [0] [0]) ? ((2324 ? 63 : -2147483641)) : (arr_32 [i_0] [i_0] [i_0] [14] [i_0]))) << ((((-(arr_0 [i_0])))))));
    }
    for (int i_11 = 0; i_11 < 18;i_11 += 1)
    {
        arr_41 [6] = -15;
        arr_42 [i_11] = ((((min((arr_40 [i_11]), (((arr_29 [i_11] [i_11]) ? 65255 : 2339))))) ? (arr_22 [i_11] [i_11] [i_11] [i_11] [i_11]) : ((max(63199, ((~(arr_4 [i_11] [i_11]))))))));
    }
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 23;i_12 += 1)
    {
        for (int i_13 = 2; i_13 < 20;i_13 += 1)
        {
            {
                arr_47 [i_13] = (min(-134217713, (min(63192, (134217708 << 7)))));
                var_20 |= (arr_45 [i_12] [22] [0]);
                var_21 = (max(var_21, (arr_46 [1])));
            }
        }
    }
    var_22 = ((var_5 ? var_7 : var_4));
    #pragma endscop
}

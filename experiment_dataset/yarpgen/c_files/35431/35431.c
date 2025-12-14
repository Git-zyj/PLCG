/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35431
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= (max(((!((max(4439806080868120818, 1))))), ((!(!-124)))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_11 [12] [i_1] [i_1] [i_1] [i_1] |= (max(((min((((!(arr_4 [16] [i_2] [i_3])))), (min(-123, (arr_0 [i_0] [i_1])))))), ((~(max(var_15, var_0))))));
                        arr_12 [i_2] [i_2] [i_0] [i_2] = ((!(((-((min(51654, 116))))))));
                        arr_13 [i_0] [i_1] [i_0] [i_2] = (max(((max((max((arr_7 [i_2]), var_5)), 1940702181))), (min((min(var_1, (arr_0 [i_1] [i_1]))), (arr_4 [i_2] [i_2] [1])))));
                        var_20 = (max((((+(min((arr_8 [i_2]), (arr_5 [i_0] [i_0] [i_3])))))), (max(((min((arr_0 [i_0] [i_3]), (arr_6 [i_1] [i_1] [i_2])))), (min(var_17, (arr_1 [i_2] [3])))))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                {
                    var_21 *= (max(((~(min(var_2, (arr_9 [i_0] [i_0] [10] [10]))))), ((max((~-12), (min(1220507127, -99)))))));
                    var_22 = (max(((-(max(var_9, 0)))), ((max((min((arr_3 [i_4]), var_12)), ((min(2857684017, (arr_5 [i_0] [19] [i_0])))))))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                arr_25 [i_0] [i_0] [i_7] [i_0] [i_7] [i_0] [i_6] = (max((min(-1467096398500005007, ((min(86, var_18))))), ((max((min(var_17, var_7)), (min((arr_24 [i_0] [i_0] [i_4] [i_4] [i_0] [i_6] [i_0]), (arr_15 [i_0] [i_4] [i_5]))))))));
                                var_23 = (max((max(((~(arr_20 [i_7] [i_0]))), ((min(var_18, 116))))), ((~(min((arr_4 [i_6] [i_6] [i_5]), (arr_17 [14] [i_6] [i_6])))))));
                            }
                        }
                    }
                    arr_26 [i_0] [i_4] [i_5] [i_5] = (+-var_5);
                }
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 20;i_9 += 1)
            {
                {

                    for (int i_10 = 3; i_10 < 16;i_10 += 1)
                    {
                        arr_35 [i_0] [i_8] [i_0] [i_0] = ((~(min((max(1, var_10)), (~var_10)))));
                        var_24 = ((~(min(2822393506, (min(var_2, (arr_27 [i_0] [i_8])))))));
                        var_25 *= ((~(max((min((arr_8 [2]), var_6)), 20))));
                        var_26 = (max(var_26, ((max((((~(max(-1467096398500005023, (arr_18 [i_0] [i_9] [i_9] [i_10])))))), (min((min((arr_32 [13] [i_9] [i_8] [i_0]), (arr_29 [14] [14] [14]))), ((max((arr_3 [i_10]), (arr_7 [18])))))))))));
                    }
                    for (int i_11 = 0; i_11 < 20;i_11 += 1)
                    {
                        arr_38 [i_8] [i_8] = (min((max(((max(1, -32748))), (max(18446744073709551606, 8)))), (max(-405366238, ((-(arr_27 [i_9] [i_0])))))));
                        arr_39 [i_0] [i_0] [i_8] [17] [i_0] = (max(((((min(32740, var_7))))), (max(((min((arr_4 [i_8] [i_8] [i_8]), var_18))), (min(73, var_9))))));
                    }
                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 20;i_12 += 1)
                    {
                        var_27 = (~(~var_2));
                        arr_42 [14] [i_9] [i_0] [14] |= ((-(~182)));
                        arr_43 [i_8] = (~(~var_9));
                        var_28 = ((-(!-110)));
                    }
                    arr_44 [i_0] [i_8] [i_8] = max(((min((min(var_18, (arr_14 [i_9] [i_0]))), var_13))), (max(var_15, ((-(arr_28 [i_8] [i_9]))))));
                }
            }
        }
        var_29 *= ((~(~var_5)));
    }
    for (int i_13 = 1; i_13 < 17;i_13 += 1)
    {
        arr_47 [i_13] = (max((max(((-(arr_19 [i_13] [i_13] [i_13] [i_13 + 1]))), ((min(var_0, 112))))), ((-(max((arr_19 [i_13 + 2] [i_13 + 2] [i_13] [i_13 + 2]), var_17))))));
        arr_48 [i_13] = (max((min(((min((arr_5 [i_13] [i_13 - 1] [i_13]), var_14))), ((-(arr_21 [i_13] [i_13] [i_13] [i_13]))))), (max((max(var_18, (arr_3 [i_13]))), (min(var_7, var_10))))));
        arr_49 [i_13] [i_13] = (max((min((min(17937506203197653804, 2857684043)), (min((arr_23 [i_13] [i_13] [i_13] [14] [i_13]), (arr_32 [16] [14] [1] [i_13]))))), ((min((min(2807223567, 1862)), ((min((arr_45 [i_13] [i_13]), 118))))))));
        arr_50 [i_13] = max((!-123), (max((max(var_17, 23)), (max((arr_18 [i_13] [i_13] [i_13] [i_13]), (arr_16 [i_13] [i_13 + 1]))))));
    }
    #pragma endscop
}

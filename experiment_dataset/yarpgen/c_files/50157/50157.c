/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50157
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_18 = ((~(max((arr_2 [i_1] [i_1] [i_1]), ((-24955 ? 60 : var_12))))));
                    var_19 = (((((!(arr_6 [i_0] [i_0] [6])))) != 240));
                    arr_7 [i_0] [i_1] [i_0] = (arr_5 [i_1 - 1] [i_0]);
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                {
                    var_20 = (((215 ? (var_11 ^ 32265) : (166 + 52390))) & (((arr_10 [i_3]) ? (!1) : (!1))));

                    for (int i_6 = 3; i_6 < 24;i_6 += 1)
                    {
                        arr_19 [i_3] [i_3] = min(8, (arr_14 [i_3] [14] [i_5] [i_3]));
                        arr_20 [i_3] = (min((((min(1, (arr_13 [i_3] [15] [i_5]))) ? 181 : (((~(arr_18 [i_3] [i_4] [i_5] [i_6 - 3])))))), ((((((arr_9 [i_3]) | (arr_9 [i_3]))) * (arr_11 [i_3]))))));
                    }
                    for (int i_7 = 1; i_7 < 22;i_7 += 1)
                    {

                        for (int i_8 = 1; i_8 < 23;i_8 += 1)
                        {
                            var_21 -= (arr_17 [i_3] [i_5] [i_3] [i_7]);
                            arr_26 [i_3] [i_4] [i_3] [i_7] [i_8] [i_4] = (min((!11334), (arr_9 [i_3])));
                        }

                        for (int i_9 = 0; i_9 < 25;i_9 += 1)
                        {
                            var_22 = var_8;
                            arr_29 [i_3] [i_3] [i_5] [i_3] [i_7] [i_3] = (((max((arr_22 [i_7 + 1] [i_7 + 3] [i_7 + 2] [i_7]), 3)) >= -13));
                            arr_30 [i_3] [i_3] [i_5] [i_3] [i_3] = ((-(max((((arr_10 [i_3]) ? 8793926185443532769 : (arr_12 [i_3] [i_3]))), ((max(-28042, 131)))))));
                            var_23 = (max(var_23, 1));
                            arr_31 [i_3] [16] [i_5] [i_7] [i_3] [i_9] = (max((arr_21 [i_3] [i_4] [i_3] [i_7]), ((((arr_15 [i_9] [i_9] [i_9] [i_9]) + (arr_25 [i_3] [i_4] [i_4] [i_9] [i_9]))))));
                        }
                        var_24 = ((+(((!-4394858823651034985) ? 140 : 1))));
                        var_25 = ((((max((arr_21 [i_7 + 1] [i_7 + 1] [i_7 + 3] [i_7 + 3]), (arr_21 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 + 2])))) ? (((max(3, -16753)))) : ((var_14 ^ (arr_21 [i_7 + 3] [i_7 - 1] [i_7 + 1] [i_7 + 1])))));
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 25;i_10 += 1) /* same iter space */
                    {
                        arr_34 [i_3] [i_3] [i_3] [i_3] = (!187);
                        var_26 = (min(var_26, 0));
                    }
                    for (int i_11 = 0; i_11 < 25;i_11 += 1) /* same iter space */
                    {
                        arr_38 [i_3] [i_3] = (((((arr_12 [i_3] [i_3]) ^ (((((arr_17 [i_3] [i_3] [i_3] [i_3]) <= 1)))))) - (((((max((arr_17 [i_11] [i_3] [i_3] [i_3]), 46))) - (arr_36 [i_3] [i_3] [i_3] [i_11]))))));
                        var_27 = (max(var_27, (((((min((arr_24 [i_3] [i_3] [i_4] [i_5] [i_11] [i_11]), (arr_24 [i_3] [i_3] [i_4] [i_5] [i_11] [i_3]))))) % (min(8740787707349119693, ((min(-32766, var_11)))))))));
                        arr_39 [5] [i_3] [i_5] [i_3] [i_11] [i_11] = ((!(arr_12 [i_3] [i_11])));
                        var_28 = (min(var_28, ((((arr_35 [i_3] [i_4] [i_5] [i_11] [i_4] [i_3]) / ((min((arr_36 [i_3] [i_4] [i_5] [i_3]), (arr_36 [i_3] [i_4] [i_5] [i_11])))))))));
                        arr_40 [i_3] [22] [i_3] [i_3] [i_3] [i_3] = (arr_25 [i_3] [i_3] [i_4] [i_5] [i_11]);
                    }
                    var_29 = (min(var_29, ((max(var_8, ((min(245, (((var_0 <= (arr_27 [i_3] [i_5] [i_4] [6] [i_5] [6] [i_5]))))))))))));
                    var_30 *= (((((arr_10 [i_5]) || (arr_22 [i_3] [i_4] [i_3] [i_3]))) || (((var_12 ? (arr_10 [i_5]) : (arr_22 [i_3] [i_4] [i_5] [i_5]))))));
                }
            }
        }
    }
    #pragma endscop
}

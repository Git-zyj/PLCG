/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4707
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_19 = (arr_4 [i_1] [0]);
                var_20 = (((var_17 ? 97 : (arr_3 [i_1] [i_1] [i_1]))));

                for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
                {
                    arr_7 [i_2] [i_2] [i_1] [i_2] = var_8;
                    var_21 = var_7;
                    arr_8 [i_0 - 2] [i_1] [i_2] [i_2] = (arr_2 [i_0]);
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
                {
                    arr_12 [i_3] = ((~(var_7 & 1)));

                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        var_22 = ((-(arr_11 [i_0 - 1] [i_0] [i_0 + 2] [i_0 + 1])));

                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            arr_17 [i_3] [i_3] = (((arr_5 [i_0] [i_0 - 2] [i_0 - 2] [i_3]) ? var_0 : (arr_5 [i_0] [i_0 - 2] [i_0 - 2] [i_3])));
                            var_23 = (((~var_2) + var_3));
                            var_24 = (arr_9 [i_0] [i_3]);
                            arr_18 [12] [i_3] [i_4] [12] [5] [1] = (arr_11 [i_0 - 1] [i_0] [i_0] [i_0 - 2]);
                        }
                    }
                }
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    var_25 = (((~-98) / (max(1, (~var_18)))));
                    var_26 = 2029708715;
                    var_27 = (((min((max((arr_9 [13] [i_6]), (arr_15 [i_0] [i_0] [i_1] [i_1] [i_6]))), -1482172301)) << (max(var_15, ((1 >> (var_3 - 72)))))));
                }
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    var_28 = ((!(arr_15 [i_0 - 1] [i_0] [i_0 - 2] [i_0 + 1] [i_7])));
                    arr_23 [i_7] [i_1] [i_7] = (arr_2 [11]);
                    var_29 = -63;
                    var_30 = ((((max((arr_0 [i_0]), var_14)) / (max((arr_11 [7] [i_1] [i_1] [3]), (arr_3 [i_0] [i_0] [i_7]))))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 22;i_9 += 1)
                        {
                            {
                                var_31 = (max(((32767 + (arr_10 [i_7]))), ((max(-78, 23434)))));
                                arr_29 [i_8] [i_8] [i_7] [i_8] [i_8] [i_7] [i_9 + 1] = (arr_24 [i_0]);
                                var_32 = (((((arr_3 [i_8] [i_0 + 2] [i_9 - 2]) == (arr_3 [i_1] [i_0 - 1] [i_9 - 2]))) ? var_7 : (((max(var_11, (arr_3 [i_0] [i_0 + 3] [i_9 - 2])))))));
                                var_33 = ((~(arr_15 [i_0] [i_0 - 1] [i_0 + 3] [i_0 - 1] [i_7])));
                            }
                        }
                    }
                }
                var_34 = (((!255) ? (164 + var_6) : ((((((arr_13 [i_0] [9]) ? (arr_2 [i_1]) : (arr_20 [i_1] [i_1] [i_1])))) ? 127 : 2265258587))));
                arr_30 [12] [i_0] [i_0] = ((+((((arr_4 [i_1] [i_0 - 2]) != (arr_4 [i_0 + 1] [i_1]))))));
            }
        }
    }
    var_35 = (((((((max(var_9, 2147483647))) ? (~var_5) : var_17))) ? ((((((var_2 ? var_0 : var_4)) < var_12)))) : var_2));
    #pragma endscop
}

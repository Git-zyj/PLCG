/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235235
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = ((((min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))) / 241));
        arr_3 [i_0] = (max(((((min(26, (arr_1 [i_0] [i_0])))) ? (arr_0 [i_0]) : 14)), (arr_1 [i_0] [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_17 = var_15;
                                arr_13 [i_0] [i_0] [i_2 + 1] [i_0] [i_3] [i_2] = (+(min((~9223372036854775785), 56036)));
                                var_18 = 244;
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        arr_16 [i_0] [i_2] [i_2] [i_5] = ((~(arr_0 [i_2])));

                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            arr_19 [i_0] [i_1 + 1] [i_2] [i_2] [i_2] = -211;
                            arr_20 [i_0] [i_2] [i_1 - 1] [i_2 - 1] [i_1 - 1] [i_6] = (arr_12 [i_0] [i_1 - 1] [i_2 - 4] [i_2] [i_6]);
                            arr_21 [i_6] [i_2] [i_1] = ((-((min((arr_18 [i_2 - 2] [i_1 - 1] [i_1 - 1] [i_1] [i_0] [i_0]), (arr_18 [i_2 + 1] [i_1 - 1] [i_1 + 1] [i_1] [i_1 + 1] [i_1]))))));
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            var_19 = (max(var_19, 9971));
                            arr_24 [i_2] [i_1 - 1] [i_2] = ((~(arr_10 [i_2 - 2] [i_1] [i_2 - 4] [i_2 - 2] [i_1 - 1] [i_1])));
                            arr_25 [i_2] [i_7] [i_2] [i_2] [i_2] [i_0] [i_0] = 30;
                        }
                        for (int i_8 = 0; i_8 < 15;i_8 += 1) /* same iter space */
                        {
                            var_20 += (arr_18 [i_0] [i_1 + 1] [i_1 + 1] [i_2 - 2] [i_1 + 1] [i_1 + 1]);
                            var_21 += (max(236, (((min(4631903915858213461, 129))))));
                            var_22 = (max((~201), 37));
                        }
                        for (int i_9 = 0; i_9 < 15;i_9 += 1) /* same iter space */
                        {
                            var_23 *= (max(((!(arr_30 [i_1] [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_2 - 4]))), (!9988)));
                            var_24 += (arr_10 [i_2 - 2] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_0]);
                            arr_32 [i_9] [i_2] [i_2] [i_1] [i_2] [i_0] = (((~(~192))));
                        }
                    }
                    for (int i_10 = 2; i_10 < 14;i_10 += 1)
                    {
                        var_25 = (max(var_25, (((!(arr_34 [i_10 - 2] [i_2 - 4] [i_1 + 1] [i_0]))))));
                        arr_35 [i_1 - 1] [i_2] [i_0] [i_1 - 1] [i_2] [i_0] = (80 && 5103632100237635640);

                        for (int i_11 = 0; i_11 < 15;i_11 += 1)
                        {
                            arr_39 [i_0] [i_1] [i_0] [i_10 + 1] [i_2] = (234 || -5958805221400115340);
                            arr_40 [i_0] [i_2] [i_2 + 1] [i_2] [i_0] = -5958805221400115343;
                        }
                    }
                    for (int i_12 = 0; i_12 < 15;i_12 += 1)
                    {
                        var_26 *= (min((((arr_11 [i_1] [i_1 + 1] [i_2 + 1] [i_2 - 1] [i_2 - 2] [i_2 - 4] [i_12]) & (arr_11 [i_0] [i_1 - 1] [i_2 - 3] [i_12] [i_12] [i_12] [i_12]))), 56));
                        var_27 -= ((min(59, ((-(arr_28 [i_12] [i_1] [i_2 - 1] [i_1] [i_12]))))));
                        arr_43 [i_2] = ((69 && (arr_8 [i_1] [i_1 - 1] [i_1 - 1] [i_2 - 1] [i_2 - 1])));
                        var_28 = (min(var_28, 37888));
                        var_29 = (max(var_29, (arr_9 [i_0] [i_1] [i_1 - 1] [i_2] [i_12])));
                    }
                }
            }
        }
    }
    for (int i_13 = 1; i_13 < 16;i_13 += 1)
    {
        arr_48 [i_13] = arr_45 [i_13];
        var_30 = ((-50 | ((~(arr_47 [i_13])))));
        arr_49 [i_13] = 21;
    }
    var_31 = (((var_2 ^ (9517 ^ 5958805221400115352))));
    #pragma endscop
}

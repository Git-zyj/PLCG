/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244082
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_12 = (102 ^ var_7);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_13 = (arr_6 [i_0]);
                                arr_12 [i_0] [i_0] [i_2] [i_2] [i_3] [i_4] = (((((max((arr_9 [i_2] [i_1] [i_2] [i_2] [i_4]), var_8)) + 32762)) != (((((-33 && (arr_6 [i_4 - 2]))) ? (arr_10 [i_4 + 2] [i_4 + 2] [i_2] [i_0 - 2] [i_4] [i_0] [i_3]) : (min(var_1, var_11)))))));
                                arr_13 [i_2] [i_1] [3] [3] [5] = 24;
                            }
                        }
                    }
                    var_14 = (arr_3 [i_0] [i_0 - 1] [i_2]);
                    var_15 = var_10;
                }
            }
        }
    }

    for (int i_5 = 3; i_5 < 13;i_5 += 1)
    {
        arr_17 [i_5] = ((8331 ? (505301211 + -0) : (((arr_11 [i_5] [i_5 - 1] [i_5 - 3] [i_5 - 1] [i_5 - 3] [i_5] [i_5 + 1]) ? (arr_15 [i_5 - 3] [i_5 - 1]) : 3464164330166198978))));
        var_16 = (-40 != 553455544);
        var_17 = (arr_10 [i_5 - 3] [i_5] [i_5] [2] [i_5] [i_5] [9]);
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 15;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                {
                    var_18 = -65532;
                    var_19 = (((arr_22 [i_7] [i_7]) ? -24 : (var_3 <= var_5)));
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 16;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 15;i_10 += 1)
                        {
                            {
                                arr_31 [i_6] [15] [i_7] = var_9;
                                arr_32 [i_10] [i_7] [14] [i_7] [i_6] = (((arr_23 [i_7 + 2] [i_9 + 2]) != (arr_10 [0] [i_10 - 1] [i_7] [0] [i_10 - 1] [i_9 + 1] [i_7 + 3])));
                            }
                        }
                    }
                }
            }
        }
        arr_33 [i_6] = 116;
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 18;i_11 += 1) /* same iter space */
    {
        var_20 = (((arr_4 [i_11] [i_11] [i_11]) - (arr_2 [i_11])));
        arr_37 [i_11] [8] = (862 ^ 72);
    }
    var_21 = (max((-969095151 + -47), var_4));
    #pragma endscop
}

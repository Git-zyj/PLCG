/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48682
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_1] |= ((!((((((arr_2 [i_0] [1] [1]) ? var_3 : (arr_2 [i_0] [i_0] [i_0])))) || (((var_19 ? 192 : (arr_4 [1]))))))));
                    arr_9 [i_0] [i_1 + 1] [i_2] [i_0 + 1] = (min((arr_2 [i_1 + 1] [i_1 + 1] [i_0 - 1]), (((arr_2 [i_1 + 1] [i_1 + 1] [i_0 + 2]) ? var_9 : var_16))));

                    for (int i_3 = 3; i_3 < 22;i_3 += 1)
                    {
                        arr_12 [13] [i_1] [13] [15] = ((!((((arr_2 [i_0] [i_0] [i_0]) ? (max((arr_0 [i_3 - 3]), var_13)) : (arr_2 [i_3 - 1] [i_1] [i_2]))))));
                        arr_13 [i_0] [i_0] [i_0] [i_0] = ((((((var_8 & 11052108439605690132) == (arr_6 [i_0 + 2] [i_1 + 1] [i_2] [i_3 - 2])))) != var_8));
                    }
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        arr_16 [i_0 + 1] [i_1] [i_2] [i_4] = (arr_4 [i_0 + 2]);

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            arr_20 [3] = ((arr_17 [14] [i_4] [i_2] [i_1] [i_0 - 1]) ? 16045 : (arr_1 [i_0] [i_0]));
                            arr_21 [i_0 - 1] [i_1] [i_1] [i_4] [i_5] [i_5] = var_4;
                            arr_22 [i_5] [i_1] [i_0] [i_0] [i_1] [i_0] = (arr_6 [i_0 - 2] [i_1] [i_2] [i_1 + 1]);
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 0;i_6 += 1)
                        {
                            arr_26 [i_6 + 1] [i_6] [i_2] [i_6] [i_0] = 7394635634103861507;
                            arr_27 [i_0] [i_1] [1] [i_6] [i_6] = (~7394635634103861483);
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            arr_30 [i_0] [i_0 - 1] [i_0] = (arr_11 [i_0 + 1] [i_0 + 1] [i_0 - 2] [i_0 + 1] [i_1 + 1] [i_0 + 1]);
                            arr_31 [i_0] [i_0 - 2] [i_0 - 2] [i_0 + 2] [i_0] [i_0] = arr_28 [i_0 - 2] [i_2] [i_2] [i_4] [i_7] [i_2] [i_7];
                        }
                        /* vectorizable */
                        for (int i_8 = 3; i_8 < 22;i_8 += 1)
                        {
                            arr_34 [i_0] [i_1 + 1] [i_2] [i_4] [i_8] [i_4] = (((!(arr_15 [i_1 + 1]))) ? (arr_10 [7] [i_1 + 1] [i_4] [i_8 - 3]) : (arr_1 [i_0 + 2] [i_1 + 1]));
                            arr_35 [i_8 + 1] [i_4] [i_4] [i_1 + 1] [i_1 + 1] [i_0 - 2] = (((arr_1 [i_1 + 1] [i_0 - 1]) > (arr_1 [i_1 + 1] [i_0 + 2])));
                        }
                        arr_36 [i_4] [i_2] [i_0] = ((((max((arr_19 [i_1 + 1] [i_1] [i_1 + 1] [i_0 - 1] [i_0]), (arr_25 [i_2] [i_1 + 1] [i_0 + 1] [i_0] [i_0 - 2] [i_0])))) ? ((max((!var_7), ((var_15 ? var_4 : (arr_5 [i_0 + 1] [i_1 + 1] [i_2] [i_4])))))) : (((arr_17 [i_0 + 2] [i_0 + 2] [i_0] [i_0] [i_0]) & (max((arr_7 [i_0] [i_1] [i_2]), 11052108439605690108))))));
                        arr_37 [i_0] [i_1 + 1] [8] [i_4] = (11052108439605690109 <= 7394635634103861513);
                    }
                    arr_38 [i_0 - 2] [i_0] [i_2] = (arr_19 [i_0 - 2] [i_1] [i_1] [i_2] [i_2]);
                }
            }
        }
    }
    var_20 = var_0;
    #pragma endscop
}

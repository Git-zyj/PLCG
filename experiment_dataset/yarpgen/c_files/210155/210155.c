/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210155
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_17 -= (arr_8 [i_0 - 2] [19] [1]);
                                arr_13 [0] [0] [i_2] [9] [i_2] [i_3 + 1] [i_2] = (~-4851731813176547474);
                                var_18 = max((max((arr_8 [i_0] [i_1] [i_1]), (arr_11 [i_4 + 2] [i_1 + 1] [i_0 + 2] [i_0 + 2] [i_0 - 1] [0]))), var_11);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            {
                                var_19 ^= ((((arr_4 [i_0 + 3]) ? 482449688 : var_7)));
                                arr_18 [18] [i_2] [18] [12] [i_5] [i_6] = ((((~(max(-3682994841516561064, var_9)))) % (((arr_0 [i_0] [i_2]) & ((182 ? 8714287366364084275 : (arr_9 [i_0] [i_2] [i_2] [i_2] [i_5] [17])))))));
                            }
                        }
                    }

                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        var_20 = (((((((((arr_10 [i_2] [i_7]) / 8714287366364084287))) ? (arr_9 [i_1] [i_2] [i_1 + 3] [i_1 + 2] [i_1 + 3] [i_1 + 3]) : (max((arr_15 [i_0 + 1] [i_1 - 1] [13] [4]), 8714287366364084273))))) | 14844926115714634431));
                        var_21 = (max((~1), (arr_6 [i_0] [i_0] [i_0 - 1])));
                        arr_22 [14] [i_2] [i_2] [i_2] [i_1 - 1] [i_7] = (arr_2 [i_0 - 2] [i_2]);
                    }

                    for (int i_8 = 1; i_8 < 17;i_8 += 1)
                    {
                        arr_27 [i_8] [i_1] [i_2] [i_8] [i_1] = (82 * -14718);
                        var_22 = (max(var_22, (((-2037694800 - (arr_25 [i_8] [i_2] [i_1] [i_0 - 1]))))));

                        /* vectorizable */
                        for (int i_9 = 1; i_9 < 17;i_9 += 1)
                        {
                            var_23 += var_8;
                            arr_30 [i_0 + 3] [i_0 + 3] [i_1 - 1] [i_2] [i_2] [i_9] = ((!(arr_28 [i_0 - 2] [i_0 - 2] [1] [i_8 + 4] [i_9 - 1] [i_0 - 2] [i_0 - 2])));
                            arr_31 [i_9 + 4] [i_1] [i_8] [18] [i_0 + 3] [i_2] [i_2] = 171;
                            var_24 = (min(var_24, (((1 ? 3075967573829736391 : 10)))));
                        }
                    }
                    var_25 = (((52 ? 0 : -1)));
                }
            }
        }
    }

    for (int i_10 = 0; i_10 < 18;i_10 += 1)
    {
        arr_34 [i_10] = 8714287366364084275;
        arr_35 [i_10] = (max(((~(arr_24 [i_10] [i_10] [i_10] [i_10] [i_10]))), ((((min((arr_23 [i_10] [i_10] [17] [9]), (arr_16 [i_10] [i_10] [1] [i_10]))) >= var_16)))));
    }
    #pragma endscop
}

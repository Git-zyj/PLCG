/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45712
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_3;
    var_12 = (-9397 / var_3);
    var_13 = (max(var_13, (5802926396402183562 == var_1)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1 - 1] [i_1] = (((arr_2 [i_1] [15] [i_1]) ? (((arr_2 [i_1] [i_1 + 1] [i_1]) * (arr_2 [i_1] [i_1 - 1] [i_1]))) : -9391));
                var_14 = (((((523331408 % (arr_2 [i_0] [i_1 - 1] [i_1])))) ? (~4075620714) : (arr_2 [i_0] [i_1 - 1] [i_1])));
                var_15 = (min(165, ((max((arr_2 [i_0] [i_0] [i_1]), (arr_3 [i_0]))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_16 = (max(var_16, (((((219346581 | (~1))) ^ (arr_9 [i_1] [i_1] [i_1] [i_0]))))));

                            for (int i_4 = 0; i_4 < 25;i_4 += 1)
                            {
                                var_17 = (max(var_17, (~-15257)));
                                var_18 = (((((-((-(arr_7 [i_0] [i_0] [i_2] [i_2] [i_3] [i_1])))))) ? ((-219346582 ? -7477403800846044350 : (arr_7 [i_0] [i_0] [19] [i_0] [i_0] [i_1]))) : (((var_10 / (max(-1, -1085615413)))))));
                                var_19 = ((((((((min(var_2, (arr_5 [i_1] [i_1]))))) <= var_5))) * (arr_10 [i_0] [i_2] [i_2] [i_1])));
                            }
                            for (int i_5 = 1; i_5 < 21;i_5 += 1)
                            {
                                var_20 |= (((var_6 + 2147483647) >> ((((91 ? 1560359422530553111 : 20103)) - 1560359422530553084))));
                                arr_15 [i_0] [i_2] [14] [6] [14] [i_0] [i_0] |= ((~(min((arr_9 [i_0] [i_0] [i_0] [i_0]), (min(2796, 523331408))))));
                            }
                            for (int i_6 = 0; i_6 < 25;i_6 += 1)
                            {
                                arr_19 [i_1] = ((23852 ? 2794 : 58899));
                                var_21 = ((-((-(arr_8 [i_0] [i_1] [i_3 + 2] [i_3 + 2])))));
                            }
                            for (int i_7 = 0; i_7 < 25;i_7 += 1)
                            {
                                arr_22 [i_0] [i_0] [18] [i_2] [i_0] [i_7] &= (((((0 + (arr_8 [i_3 + 2] [i_3 + 2] [i_3 + 2] [i_7])))) ? ((min(27198, 9396))) : 19));
                                arr_23 [i_7] [i_1] [i_1] [i_1 - 2] [i_0] = 6241788059826498960;
                            }
                            arr_24 [i_1] = ((((arr_9 [i_1 - 2] [i_1 - 1] [i_1] [i_1]) ^ var_5)) & (((!(((2768 ? (arr_17 [i_3 + 2] [i_1] [i_1] [i_1] [i_1] [i_0]) : var_0)))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

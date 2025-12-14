/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236539
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            {
                var_20 = (i_0 % 2 == zero) ? ((min((arr_3 [i_0]), (((((max(-32284, (arr_5 [i_0] [i_0] [i_0])))) >> (((((arr_4 [i_0] [i_1]) | (arr_0 [i_0]))) - 1143496661)))))))) : ((min((arr_3 [i_0]), (((((max(-32284, (arr_5 [i_0] [i_0] [i_0])))) >> (((((((arr_4 [i_0] [i_1]) | (arr_0 [i_0]))) - 1143496661)) - 176539625))))))));
                var_21 = ((((((arr_3 [i_0]) > (arr_1 [i_0])))) * (arr_4 [i_1] [i_0])));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        arr_9 [i_2] = (((2633337797 - 1661629499) ? (((arr_6 [i_2]) ? (arr_4 [i_2] [i_2]) : (arr_2 [15] [i_2]))) : ((((arr_7 [i_2] [i_2]) % 32269)))));
        arr_10 [i_2] [i_2] = (arr_0 [i_2]);

        for (int i_3 = 2; i_3 < 22;i_3 += 1)
        {
            arr_13 [0] |= 32294;
            arr_14 [i_2] [i_2] = (arr_2 [i_3 - 2] [i_2]);
            arr_15 [i_3] [i_2] [i_2] = -3696911915;
            var_22 = (((arr_0 [i_2]) + ((((arr_8 [i_3]) ? 1 : (arr_5 [i_2] [i_2] [i_3]))))));
        }
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            var_23 = (arr_12 [i_2]);
            arr_20 [i_2] [i_2] [i_2] = (arr_8 [i_2]);
            arr_21 [i_2] [i_4] = ((((((arr_6 [i_2]) && (arr_5 [i_2] [0] [i_4])))) << (((arr_7 [i_2] [i_2]) / (arr_6 [i_4])))));
        }
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            var_24 = (arr_19 [i_5]);
            arr_25 [i_2] [i_2] = (((arr_3 [i_5]) | (arr_16 [i_2])));
            arr_26 [i_2] = (arr_11 [i_2]);
            arr_27 [i_2] [i_2] [i_2] = (arr_6 [i_5]);
        }
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 24;i_8 += 1)
                {
                    {
                        arr_34 [i_2] [i_2] [i_2] [i_2] = 24576;
                        var_25 ^= ((-(arr_0 [22])));
                        var_26 = 14175212478527087937;
                        arr_35 [i_2] [i_6] [i_2] = (arr_3 [i_6]);
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 25;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 25;i_10 += 1)
            {
                {
                    var_27 = (min(var_27, (arr_31 [i_2] [i_2] [i_2])));
                    /* LoopNest 2 */
                    for (int i_11 = 3; i_11 < 22;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 25;i_12 += 1)
                        {
                            {
                                arr_46 [i_2] [i_9] [i_10] [i_2] [i_9] = ((!(arr_42 [i_9] [i_11] [i_11 - 3] [i_11])));
                                var_28 = ((!((((arr_18 [i_2] [i_12]) ? (arr_19 [i_2]) : (arr_4 [i_9] [i_9]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

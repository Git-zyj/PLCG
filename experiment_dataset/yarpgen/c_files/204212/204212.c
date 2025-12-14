/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204212
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, (((13990 ? 780008589 : 1)))));
    var_11 &= var_0;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    var_12 = (max(((+(((arr_2 [i_2]) - var_7)))), ((~(-19 - var_6)))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
                    {
                        arr_13 [i_0] [2] = ((((arr_11 [i_2 + 1]) - var_7)));

                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            var_13 *= ((8192 ? (arr_10 [1] [i_0] [i_0 - 1] [i_0 - 1]) : (arr_10 [i_0 - 1] [9] [i_0 - 1] [i_0 - 1])));
                            var_14 = -var_7;
                            arr_16 [i_0] [15] [i_1] [i_1] [10] [i_3] [i_4] = (((~-481874179) ? (((var_6 ? (arr_5 [14] [0]) : 16))) : ((-281 ? var_6 : 1))));
                            var_15 = (min(var_15, 241));
                        }
                        arr_17 [i_0] [i_1] [i_2] [i_2] [i_2] [8] = 5840844392657333497;
                    }
                    for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
                    {
                        var_16 = ((((+(max((arr_8 [i_0] [i_1] [14] [18]), (arr_12 [i_0 - 1] [22] [18] [i_5]))))) >> ((((min((arr_0 [i_5] [7]), var_5)) < (arr_20 [8] [i_1] [i_2] [i_0 - 1] [i_0]))))));

                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            var_17 = (((var_9 & var_1) ? (((var_5 ? (arr_22 [i_0 - 1] [i_2 + 1]) : (arr_22 [i_0 - 1] [i_2 + 1])))) : ((-122 ? var_4 : 4294967294))));
                            var_18 -= ((((max((~126), (arr_15 [i_2 + 1] [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1])))) > ((-2973405183188751924 ? (arr_21 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]) : (!-8592)))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

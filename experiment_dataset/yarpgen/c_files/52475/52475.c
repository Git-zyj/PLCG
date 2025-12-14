/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52475
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_18 = (max((arr_0 [i_0]), 0));
        var_19 = ((((max(1, (((arr_1 [i_0]) & var_16))))) && (((38 ^ (((3813553136174261313 != (arr_1 [i_0])))))))));

        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            arr_6 [i_1 - 1] = ((-(((((-1 ? (arr_3 [9] [i_1]) : var_7))) ^ var_1))));
            arr_7 [i_0] [i_0] [i_0] = (((((~((-1 ? (arr_1 [2]) : -16))))) ? ((~(arr_1 [i_1 - 1]))) : (((!(var_1 || -4915194979351602868))))));
        }
        for (int i_2 = 1; i_2 < 10;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    {
                        arr_15 [i_2] [i_2] [i_4] = (min(((-((140 ? 58606 : (arr_13 [i_2] [i_2 + 2]))))), var_11));

                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            var_20 = (min(var_20, (arr_18 [i_3] [i_4] [i_3] [i_2] [3] [i_0] [i_0])));
                            var_21 = (-2147483647 - 1);
                            var_22 = (((arr_14 [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 - 1]) == ((~(arr_14 [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_2 + 1])))));
                        }
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            var_23 = (arr_12 [6] [i_2] [6] [6]);
                            var_24 = ((5716657797358019680 ? ((min(var_2, -509803133))) : (arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                        }
                        var_25 = (max(-16, (-112 && 509803132)));
                        var_26 = (58721 | 6922);
                    }
                }
            }
            arr_22 [i_0] [i_2] = (((((max((arr_21 [4] [4] [i_2] [i_2] [i_2] [i_2] [i_2]), 4058))) ? -509803133 : ((max(58606, var_4))))));
        }
        for (int i_7 = 0; i_7 < 12;i_7 += 1)
        {
            arr_25 [3] = 124;
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 8;i_9 += 1)
                {
                    {
                        arr_32 [i_7] [i_8] [i_8] = (!((max(-509803133, (!57846)))));
                        var_27 = arr_17 [i_9] [i_8] [i_8] [i_8] [i_7] [i_0];
                        var_28 = (min(var_28, ((61396 ? (arr_28 [i_9 + 1] [i_9 + 4] [i_9] [i_9 + 3]) : (((arr_28 [i_9] [i_9 + 3] [i_9 + 2] [i_9 + 2]) ? (-2147483647 - 1) : -6))))));
                    }
                }
            }

            /* vectorizable */
            for (int i_10 = 0; i_10 < 12;i_10 += 1)
            {
                var_29 = ((~((var_5 ? 1 : 2147483647))));
                var_30 = (!var_9);
                var_31 = ((!(arr_1 [i_0])));
                arr_36 [i_0] [i_0] [i_0] [i_0] = ((-7448229997621426948 ? 32767 : (arr_17 [1] [i_10] [i_10] [i_7] [i_10] [i_0])));
            }
        }
    }
    var_32 = var_14;
    /* LoopNest 3 */
    for (int i_11 = 1; i_11 < 23;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 25;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 24;i_13 += 1)
            {
                {
                    var_33 = ((6124833259196494244 & ((((!(arr_38 [i_11]))) ? ((127 ? 9410 : (arr_41 [i_11] [i_11] [i_11]))) : (~43)))));
                    var_34 = (min(((((min((arr_38 [i_11]), var_0))) ? 5597220329882077096 : 38)), ((((((min(var_14, (arr_41 [i_11] [i_12] [i_12]))))) & (((arr_41 [i_11] [i_12] [i_11]) ? (arr_39 [i_11 - 1] [17]) : var_1)))))));
                }
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212149
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_12 = 127;

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {

            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        {
                            var_13 = ((-127 ? (arr_4 [i_3] [i_2 + 1] [i_1]) : var_4));
                            var_14 = 127;
                            arr_12 [i_1] [i_4] [i_3] [i_2 - 2] [i_2] [i_1] [i_1] = (arr_9 [i_3] [i_2 - 1] [i_2 - 2] [i_3] [i_1] [i_3] [i_1]);
                        }
                    }
                }
                var_15 = ((var_1 - (((var_3 ? -50 : var_10)))));
            }
            arr_13 [i_0] [i_0] [i_1] = (((var_3 != (arr_5 [i_0]))));
            arr_14 [i_1] [i_1] [i_0] = -3203549172;
            arr_15 [i_1] = (335126358 & 1071210792);
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            arr_18 [5] [i_5] = 731210521;
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    {
                        arr_25 [i_0] [i_5] [i_6] = -var_4;
                        arr_26 [i_0] [i_5] [i_6] [i_7] = (((arr_5 [i_0]) / (arr_5 [i_0])));
                        arr_27 [14] [i_5] [i_6] [1] [i_6] [i_0] = 1071210792;

                        for (int i_8 = 0; i_8 < 15;i_8 += 1)
                        {
                            arr_31 [i_0] [1] [9] [i_8] [i_8] [i_6] [i_7] &= (((arr_5 [i_0]) ? (arr_6 [i_0] [i_6] [i_0] [3]) : (arr_17 [8])));
                            arr_32 [3] [i_5] [i_6] [i_6] [i_6] = (731210521 / (arr_3 [i_6] [i_5] [i_0]));
                        }
                    }
                }
            }
        }
    }
    var_16 = ((-3 ? ((max(1, 731210521)) : ((var_0 ? 9029270867776242015 : var_5)))));
    var_17 &= (((max((max(var_0, 32)), var_7))) ? (95 & 59) : 1);
    #pragma endscop
}

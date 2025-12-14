/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33141
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, (((((max(-112, 10113))) ? (10117 + 3827377210) : var_2)))));
    var_12 = (min((1056964608 | 3827377209), (((((max(var_9, var_10))) ? (var_8 != var_6) : var_4)))));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        var_13 = (-10114 - var_1);
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        var_14 = (60 && (((var_6 ? (arr_2 [i_2] [i_2]) : 1))));
                        var_15 = var_8;
                    }
                    for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
                    {
                        var_16 = (-963 | -1);
                        var_17 = (((arr_8 [i_0] [i_1 + 1]) / (((arr_4 [i_4]) / var_1))));
                    }
                    for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
                    {
                        var_18 = arr_9 [i_0] [i_0 + 3] [i_2];
                        var_19 = (((((arr_12 [i_0] [i_1] [i_2] [i_1]) < (arr_11 [i_0] [i_5] [i_5] [i_5] [i_2]))) ? (511 | 1) : 511));
                        var_20 = (arr_11 [i_0] [i_1 + 1] [i_2] [3] [i_5]);
                    }
                    for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
                    {
                        arr_19 [i_0] [i_1] [i_2] [18] = ((((var_0 && (arr_2 [i_1] [i_6])))));

                        for (int i_7 = 4; i_7 < 21;i_7 += 1)
                        {
                            var_21 = (arr_7 [i_0]);
                            var_22 = (((arr_17 [i_1] [i_1] [i_1 + 1] [i_7 - 4] [i_7 - 4]) ? var_4 : (arr_17 [i_1] [i_1] [i_1 + 3] [i_6] [i_1])));
                        }

                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            arr_26 [13] [i_8] [i_2] [i_6] [i_8] = ((~(arr_21 [i_0] [i_0] [i_0 - 2] [i_1 + 2] [i_1 + 3])));
                            var_23 = (min(var_23, ((((arr_21 [i_0 + 3] [i_0 + 3] [i_0 + 3] [i_6] [i_8]) + 24576)))));
                            var_24 = (min(var_24, (((var_4 / (arr_11 [i_0 + 2] [15] [i_2] [i_6] [i_8]))))));
                        }
                    }
                    var_25 += (arr_17 [i_0] [i_0] [i_1 + 3] [i_1] [i_1]);
                }
            }
        }
    }
    #pragma endscop
}

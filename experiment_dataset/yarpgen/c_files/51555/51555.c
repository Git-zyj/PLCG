/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51555
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((max(var_7, (((var_9 ? var_0 : var_6)))))) ? var_2 : ((max(var_3, var_4)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                var_11 = (((((arr_0 [i_1 + 1]) ? var_2 : (arr_1 [i_0] [i_1 - 3]))) / ((max((arr_3 [i_1 + 1] [i_0]), (arr_2 [i_1]))))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_12 -= var_7;
                    var_13 = ((88 ? 36 : 46));
                }
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                var_14 = (min(65454, (min((arr_2 [i_1]), var_8))));
                                var_15 = var_7;
                                var_16 = var_3;
                            }
                        }
                    }
                    var_17 = ((+(((arr_2 [i_1]) ? var_2 : (((min(65466, 1))))))));
                    var_18 = max(((~(min(-346207985, 1245929499)))), var_5);
                    arr_15 [i_1] [i_1 + 3] [4] = (((((-1046556552 ? ((var_6 ? 6727302885060412483 : -31)) : -553481394))) ? -30071 : 2473225014));
                }
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {

                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        var_19 = ((+(max((((arr_10 [i_0] [i_1] [i_6] [i_1] [11]) ? (arr_7 [i_7] [i_1 + 4] [i_6] [i_1]) : -35)), (arr_18 [i_1 - 1] [i_1 - 3] [i_1] [i_1 + 1] [i_1 + 4] [i_1 - 3])))));
                        var_20 = (arr_0 [i_1 + 3]);
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        var_21 = (arr_9 [2] [i_1] [i_6] [16] [i_8]);

                        for (int i_9 = 0; i_9 < 23;i_9 += 1)
                        {
                            arr_26 [i_1] [i_1] [i_6] [i_8] [i_9] = (~(arr_12 [i_1 - 2] [i_9]));
                            var_22 -= (arr_22 [22] [i_1] [5] [i_8]);
                            var_23 ^= (arr_20 [i_8] [i_8]);
                        }
                        for (int i_10 = 0; i_10 < 23;i_10 += 1)
                        {
                            var_24 = var_5;
                            var_25 = var_2;
                            arr_29 [1] [i_1] [10] [1] = ((var_1 ? (arr_7 [i_1] [i_6] [i_1 - 1] [i_1]) : (((var_1 ? (arr_14 [4] [i_1] [i_6] [i_8] [i_1] [i_10]) : (arr_16 [i_8] [22] [i_1]))))));
                        }
                    }
                    arr_30 [i_1] [i_6] [i_6] = (arr_28 [i_0] [i_1 - 1] [i_1] [i_1] [8]);
                }
                /* LoopNest 3 */
                for (int i_11 = 0; i_11 < 23;i_11 += 1)
                {
                    for (int i_12 = 3; i_12 < 21;i_12 += 1)
                    {
                        for (int i_13 = 2; i_13 < 22;i_13 += 1)
                        {
                            {
                                arr_38 [i_1] [i_1] = (((((((arr_12 [6] [i_1]) ? -1 : (arr_32 [i_1] [i_11] [i_1] [5])))) ? (((arr_7 [i_0] [i_0] [i_0] [i_1]) ? (arr_32 [i_13 + 1] [i_1] [i_1] [i_0]) : var_2)) : (max(12141784241184099066, 111)))));
                                var_26 = (min(var_26, var_6));
                                var_27 = min(((max(var_1, (arr_8 [1] [19] [i_11] [i_1] [i_13 - 1])))), (min(1084972880, (arr_32 [i_1 + 2] [i_1] [i_1] [i_13 + 1]))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

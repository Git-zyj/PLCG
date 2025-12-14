/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194103
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 0;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                var_13 = (~107);
                var_14 = 61;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_15 = var_1;
                            var_16 = ((126 ? 4194846951 : 4194846922));
                        }
                    }
                }
                var_17 = ((100120374 ? ((min((arr_2 [i_1 - 1]), var_4))) : (((arr_2 [i_1 + 2]) & (arr_2 [i_1 + 1])))));

                for (int i_4 = 1; i_4 < 23;i_4 += 1)
                {
                    arr_15 [11] [11] [11] [i_4] = ((+((((arr_3 [i_1]) <= -1)))));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 4; i_6 < 24;i_6 += 1)
                        {
                            {
                                arr_23 [i_5] [i_5] [19] [i_5] [i_5] [i_5] = (((arr_14 [i_6]) % (max(100120362, 100120373))));
                                var_18 = (4194846931 + 14);
                                var_19 = ((((8582 ? 5 : 45146)) << (((((18446744073709551601 == 0) ? ((-21249 ? 366670622 : (arr_0 [i_0]))) : var_7)) - 37))));
                            }
                        }
                    }
                }
                for (int i_7 = 4; i_7 < 24;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        for (int i_9 = 3; i_9 < 23;i_9 += 1)
                        {
                            {
                                arr_31 [i_7] [i_7] [i_7] [i_7] [i_7] = 8970;
                                var_20 = (!-2);
                                arr_32 [i_0] [i_0] [i_0] [i_1] [i_0] [i_1] [i_9] = (min((arr_2 [i_1 + 2]), (min(48786, 1055295900))));
                            }
                        }
                    }
                    var_21 = (max(var_21, 593448922));
                    arr_33 [i_0 + 1] = ((-(-16029173 * 1)));
                    var_22 -= (min(((0 ? -1373963087 : 100120364)), ((4294967295 ? (arr_13 [i_7 - 3] [i_0 + 1] [i_0 + 1]) : 25))));
                }
            }
        }
    }
    var_23 = (((((13 + (var_5 * var_10)))) ? (var_6 + 2066445996) : (min(22, var_11))));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246997
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= (85 ? 1941272739 : var_6);
    var_16 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_17 -= (max((!85), -32));

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    var_18 = max(4177920, (min(-56, (85 / 1001572031))));
                    var_19 = (((((arr_5 [i_1]) ? (arr_5 [i_0]) : (arr_0 [i_0] [i_0]))) / ((-87 ? (arr_0 [i_0] [i_0]) : (arr_7 [i_0] [6] [i_2])))));
                    arr_9 [i_0] [i_1] = (+((((arr_3 [13]) ? var_13 : (arr_2 [i_0])))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            {
                                arr_20 [i_5] [i_4] [i_3] [0] [i_0] = 64;
                                var_20 = -112;
                                var_21 -= 567183330;
                            }
                        }
                    }

                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        arr_24 [i_0] [i_0] [i_0] [i_1] [13] [i_6] = 20;
                        var_22 = 4177904;
                    }
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {

                        for (int i_8 = 0; i_8 < 21;i_8 += 1) /* same iter space */
                        {
                            var_23 = 1016710057;
                            var_24 -= ((243492115 ? (arr_14 [0] [i_1] [i_0] [i_7]) : 77));
                        }
                        for (int i_9 = 0; i_9 < 21;i_9 += 1) /* same iter space */
                        {
                            arr_34 [i_0] [i_1] [i_3] [i_7] [i_0] [i_0] [i_7] = ((((arr_13 [2]) / -77)) % ((33 ? 63 : (arr_7 [i_0] [8] [i_0]))));
                            arr_35 [i_1] [4] [i_9] [i_1] [11] [4] = (arr_16 [0] [12] [3] [3] [i_0] [i_0]);
                        }
                        var_25 = (((arr_19 [i_1] [6] [7] [i_1] [i_1] [i_1] [i_1]) == (arr_19 [3] [3] [17] [17] [15] [i_7] [17])));
                    }
                    for (int i_10 = 0; i_10 < 21;i_10 += 1)
                    {
                        arr_38 [15] [6] [7] = (arr_33 [i_0] [2] [i_3] [i_3] [i_3] [i_10] [i_0]);
                        var_26 |= (arr_23 [i_0] [i_1] [i_3] [i_3] [7] [i_10]);
                    }
                }
                /* vectorizable */
                for (int i_11 = 0; i_11 < 21;i_11 += 1)
                {
                    arr_41 [i_0] [i_1] [14] = 54;
                    arr_42 [6] [i_0] [i_11] [i_0] = (((arr_16 [i_0] [i_0] [i_1] [i_11] [7] [i_11]) ? (arr_36 [i_0]) : (arr_16 [i_0] [i_0] [10] [17] [i_11] [i_11])));
                }
            }
        }
    }
    #pragma endscop
}

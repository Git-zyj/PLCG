/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209631
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (var_15 / var_6);

    /* vectorizable */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        var_17 = arr_1 [i_0];
        arr_3 [i_0] = (((arr_1 [i_0]) ^ var_1));
        arr_4 [i_0] = (((arr_2 [i_0]) & (arr_2 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {

        for (int i_2 = 3; i_2 < 20;i_2 += 1)
        {
            arr_11 [i_2] [i_2] = (~var_12);
            var_18 = (((arr_5 [i_1]) - 1));
        }
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            arr_14 [i_1] = (arr_9 [i_3] [i_1] [i_1]);
            var_19 = (0 > 1);
        }
        for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
        {
            arr_17 [16] [i_4] [1] = 19178;
            arr_18 [i_1] [10] [1] = (!1138005586388453022);
            arr_19 [i_1] [i_1] = 214;
            var_20 = (!(arr_13 [i_1]));
        }
        for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
        {
            arr_23 [i_1] [i_1] [i_5] = (((arr_10 [i_1]) ^ (arr_9 [2] [i_5] [i_5])));
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        {
                            var_21 = 13195534032956928262;
                            arr_31 [i_1] [i_5] [i_7] [i_6] [i_5] = (((arr_20 [i_1] [i_1] [i_1]) <= (arr_20 [i_1] [i_5] [i_1])));
                        }
                    }
                }
            }
        }
        var_22 = var_7;
        arr_32 [i_1] [i_1] = ((arr_8 [i_1]) + (arr_8 [i_1]));
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 10;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            {
                var_23 = (((((arr_12 [i_10]) + 2147483647)) << (((arr_34 [i_10]) >> (((arr_34 [i_9]) - 23283))))));
                var_24 = (max((((arr_30 [i_9] [i_10] [i_9] [10] [i_10]) / 1022139608)), (52522 | 0)));

                /* vectorizable */
                for (int i_11 = 1; i_11 < 7;i_11 += 1)
                {
                    var_25 = (((arr_20 [i_11 + 1] [i_11 + 1] [i_11 + 3]) << (((arr_20 [i_11 + 1] [i_11 + 1] [i_11 + 3]) - 7290447956421491320))));
                    arr_39 [i_10] = (!65535);
                    /* LoopNest 2 */
                    for (int i_12 = 2; i_12 < 7;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 1;i_13 += 1)
                        {
                            {
                                arr_44 [i_10] [4] [i_10] [i_12] [i_13] = (arr_9 [i_9] [i_11 + 3] [i_12 - 1]);
                                arr_45 [i_10] [8] [i_11] [i_12] [i_13] [5] [i_13] = (((arr_30 [i_12 + 1] [i_11 + 3] [i_11 + 2] [i_11 + 3] [i_9]) ^ (arr_30 [i_12 - 2] [i_11] [i_11 + 2] [i_11 - 1] [i_9])));
                                var_26 = (23 - 4064);
                            }
                        }
                    }
                }
                for (int i_14 = 1; i_14 < 7;i_14 += 1) /* same iter space */
                {
                    var_27 = (arr_47 [i_9] [i_10]);
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 10;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 10;i_16 += 1)
                        {
                            {
                                var_28 = (arr_21 [i_10] [i_10]);
                                arr_53 [i_9] [1] [5] [i_15] [i_10] = (arr_25 [i_14 + 1] [i_14 + 2] [i_14 + 1]);
                            }
                        }
                    }
                }
                for (int i_17 = 1; i_17 < 7;i_17 += 1) /* same iter space */
                {
                    arr_56 [i_17 - 1] [i_9] [i_9] [i_9] |= ((!((max((arr_29 [i_9] [i_10] [i_9] [i_10] [i_17] [i_17 + 3]), (16382 + 16614737141056594919))))));
                    arr_57 [1] [1] [i_10] = (min((3485668194854001946 > 23), (max((arr_42 [1] [i_17 + 2] [i_17 + 2] [i_10] [i_17 + 3]), (arr_42 [i_10] [i_17 - 1] [i_17 + 3] [i_10] [i_17 + 3])))));
                }
            }
        }
    }
    #pragma endscop
}

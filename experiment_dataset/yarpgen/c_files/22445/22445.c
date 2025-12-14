/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22445
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_4;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = ((!(arr_1 [i_0] [i_0 - 1])));

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_15 = (!var_13);
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 11;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [i_1] [i_1] [i_2] [i_1] [i_1] = (!38);
                        var_16 = (!var_3);
                    }
                }
            }
        }
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            var_17 = ((!(arr_10 [i_0 - 2] [i_0] [i_0 - 2] [i_0 - 1])));
            var_18 = (min(var_18, (((!(arr_14 [i_0] [i_0 + 1]))))));
        }
        arr_15 [i_0] |= var_3;
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        var_19 ^= ((!(arr_10 [i_5] [i_5] [i_5] [i_5])));

        for (int i_6 = 3; i_6 < 9;i_6 += 1)
        {
            var_20 = ((65535 ? 15 : 145));
            var_21 = var_1;
            var_22 = 635597266;
        }
        for (int i_7 = 2; i_7 < 7;i_7 += 1)
        {
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 10;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 9;i_9 += 1)
                {
                    {

                        for (int i_10 = 1; i_10 < 8;i_10 += 1)
                        {
                            arr_33 [i_5] [i_5] [i_5] [i_9] = 0;
                            var_23 = ((!(arr_11 [i_5])));
                        }
                        for (int i_11 = 1; i_11 < 9;i_11 += 1)
                        {
                            arr_37 [i_9] = (65535 | (99 + 48));
                            arr_38 [i_11] [i_11] [i_9] [i_9] [i_11] = ((!((((arr_11 [7]) ? -635597285 : 214)))));
                            arr_39 [4] [i_5] [i_7] [i_8] [i_9] [i_9] [i_9] = 0;
                        }
                        for (int i_12 = 0; i_12 < 10;i_12 += 1)
                        {
                            var_24 = 232;
                            var_25 += ((~(!var_0)));
                        }
                        arr_42 [i_5] [i_5] [i_8] [i_9] [i_5] [i_9] = (0 > 8191);
                    }
                }
            }
            arr_43 [i_5] [i_5] [i_7] = var_0;
        }
        /* LoopNest 2 */
        for (int i_13 = 2; i_13 < 7;i_13 += 1)
        {
            for (int i_14 = 2; i_14 < 9;i_14 += 1)
            {
                {
                    var_26 = (max(var_26, (arr_22 [i_13 - 1] [i_13 - 2])));
                    arr_50 [i_5] [i_13] [i_5] = (((arr_5 [i_5] [0] [i_14 + 1]) << (56793 - 56773)));
                    var_27 = (arr_31 [i_5] [i_5] [i_14] [i_14] [i_14]);
                }
            }
        }
        var_28 = ((!(arr_22 [3] [i_5])));
        var_29 = (!-943722098);
    }
    var_30 = var_13;
    #pragma endscop
}

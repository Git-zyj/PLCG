/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51188
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] [i_0] [i_0 - 1] = 237;
                    var_16 = (max(((min(24, 24))), (arr_2 [i_0] [i_1] [i_2])));
                    var_17 ^= ((((((min(var_4, 8388480))) ? (arr_3 [i_0] [i_0 + 1] [i_0]) : 4026712393497794009)) << (((arr_1 [i_0 - 1] [i_0 - 1]) - 1215))));
                    var_18 -= (arr_4 [i_0] [i_1] [i_2]);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_19 = -9336;
                                arr_12 [i_0] [i_1] [i_1] [i_3] [i_4] = (arr_10 [i_3 - 1] [i_1 - 1] [i_0 + 1]);
                                arr_13 [i_0] [i_1 - 1] [i_4] [i_3] [i_1] [i_4] [i_4] = (-(min((arr_4 [i_4] [i_0 - 2] [i_1 + 1]), (arr_0 [i_0] [i_0 - 1]))));
                                arr_14 [i_1] [i_3 - 1] [i_4 + 1] = ((((((((arr_8 [i_2] [i_1]) * 27556))) > (arr_0 [i_1 - 1] [i_3 - 1]))) ? var_11 : ((~(arr_4 [i_0] [i_2] [i_3 - 1])))));
                                var_20 = (max((((arr_7 [i_4] [i_1] [i_1] [i_0 - 1]) >> (((((arr_9 [i_0 - 1] [i_1] [i_1 + 1] [i_2] [i_3 + 1] [i_3] [i_4]) ? (arr_9 [i_4] [i_4] [i_3] [i_2] [i_1] [i_1 + 1] [i_0 + 1]) : -1989167135332943254)) - 2870305078)))), (arr_8 [i_1 - 1] [i_1])));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_5 = 2; i_5 < 18;i_5 += 1) /* same iter space */
    {
        var_21 *= ((+(((arr_0 [i_5 + 2] [i_5 - 1]) ? 9336 : (arr_11 [22] [i_5 - 1])))));
        var_22 -= (((arr_11 [22] [i_5 + 2]) + -1926921361));
    }
    /* vectorizable */
    for (int i_6 = 2; i_6 < 18;i_6 += 1) /* same iter space */
    {
        arr_22 [i_6 - 2] = (arr_11 [8] [i_6 - 2]);
        var_23 -= ((9349 << (((arr_15 [i_6 + 2]) - 28071))));
        var_24 = (((arr_0 [i_6] [i_6 + 2]) ? 7968560008401263105 : (((4286578805 << (8388504 - 8388485))))));
    }
    /* vectorizable */
    for (int i_7 = 2; i_7 < 18;i_7 += 1) /* same iter space */
    {
        var_25 = (((arr_2 [i_7] [i_7 + 2] [i_7 - 1]) <= 9332));

        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {
            var_26 &= ((!(24 || 8388483)));
            var_27 = 4286578812;
            arr_29 [i_7 - 2] [i_8] [i_7] = -2;
            var_28 = -8933;
        }
        var_29 = -32765;
        /* LoopNest 2 */
        for (int i_9 = 2; i_9 < 17;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 17;i_10 += 1)
            {
                {
                    var_30 -= (((arr_9 [i_7 - 1] [i_9] [i_10 - 1] [i_9 + 3] [i_9] [i_7 + 1] [i_10 + 3]) >> (((arr_33 [i_10 - 1] [i_7 + 1] [i_10 + 3] [i_9]) - 6552107029335663987))));
                    var_31 = (-(-32767 - 1));
                }
            }
        }
        arr_36 [i_7] = (arr_15 [i_7 - 2]);
    }
    #pragma endscop
}

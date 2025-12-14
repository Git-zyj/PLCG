/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238945
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_14 += arr_0 [1];
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_0] [i_0] = (~var_10);
                            arr_12 [i_0] = (2048 <= 12);
                            var_15 *= 127;
                        }
                    }
                }

                /* vectorizable */
                for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                {
                    var_16 |= 17239727065466889795;
                    var_17 ^= ((~(arr_13 [i_0 - 2] [i_0 + 2] [4])));
                    var_18 *= ((-(arr_1 [i_0 - 2] [0])));
                    var_19 = (arr_6 [i_0] [i_1] [i_4]);
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_20 += ((-((~(arr_21 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_0])))));
                                var_21 = (arr_3 [i_0] [i_5] [i_0]);
                                var_22 = var_3;
                            }
                        }
                    }
                    arr_25 [i_0] [i_1] [i_1] [i_1] = (arr_5 [i_0] [i_0 + 3]);
                    var_23 = (min(var_23, (((~(arr_18 [i_5] [i_5] [i_5] [i_5] [i_5]))))));
                    arr_26 [i_0 - 1] [i_0 - 3] [i_0] = (arr_10 [i_0 + 3]);
                }
                var_24 = (max(var_24, (~var_7)));
            }
        }
    }

    /* vectorizable */
    for (int i_8 = 0; i_8 < 17;i_8 += 1)
    {
        var_25 |= (!var_1);
        var_26 -= (arr_27 [i_8] [i_8]);
    }
    for (int i_9 = 4; i_9 < 20;i_9 += 1)
    {
        var_27 ^= (~115);
        var_28 ^= (!var_12);
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 23;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 23;i_11 += 1)
            {
                {
                    var_29 = (max(var_12, (!53631)));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 23;i_12 += 1)
                    {
                        for (int i_13 = 2; i_13 < 20;i_13 += 1)
                        {
                            {
                                var_30 = (max(var_30, (arr_30 [i_9 - 1] [i_13 - 2])));
                                var_31 = (((!(arr_36 [i_11] [i_11]))));
                            }
                        }
                    }
                    var_32 = (min(-4433230883192832, ((~(arr_41 [i_9] [i_9 - 4] [i_11] [i_10] [i_11] [i_11])))));
                    var_33 = (max(var_33, ((((~(arr_42 [i_9 - 4] [i_9 + 1] [i_9] [i_9 - 2] [i_10] [i_11] [i_11])))))));
                }
            }
        }
    }
    var_34 += var_11;
    var_35 += ((~(!var_6)));
    #pragma endscop
}

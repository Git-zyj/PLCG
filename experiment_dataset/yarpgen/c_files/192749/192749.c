/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192749
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_9;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    var_16 = (arr_0 [i_0] [i_0]);
                    var_17 *= (arr_2 [i_1] [i_1] [i_0]);
                }
            }
        }
        var_18 = (min(var_18, (((~(arr_4 [i_0] [i_0]))))));

        for (int i_3 = 2; i_3 < 13;i_3 += 1) /* same iter space */
        {
            arr_11 [i_0] = (~(arr_0 [1] [i_0]));
            var_19 = (arr_9 [i_0] [i_3 - 1] [i_0]);
        }
        for (int i_4 = 2; i_4 < 13;i_4 += 1) /* same iter space */
        {
            var_20 ^= arr_5 [i_0] [i_4 - 1] [i_4];
            arr_15 [i_4] [i_4] = (arr_9 [i_0] [i_0] [i_4 - 2]);
            arr_16 [i_0] = ((~(arr_5 [i_0] [i_0] [i_0])));
            arr_17 [i_4] = (arr_0 [i_4] [i_4]);
            arr_18 [i_4] [i_4] = (arr_7 [i_0] [i_4] [i_0]);
        }
        for (int i_5 = 2; i_5 < 13;i_5 += 1) /* same iter space */
        {
            var_21 = arr_9 [i_5 - 2] [i_5 + 1] [i_5 - 2];
            var_22 = (~-71);
            var_23 = ((-(arr_7 [i_5 - 1] [i_5] [0])));
        }
        for (int i_6 = 2; i_6 < 13;i_6 += 1) /* same iter space */
        {
            var_24 = ((~(arr_10 [4] [i_0] [i_0])));

            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                arr_28 [i_0] [i_7] [12] [i_6] = (arr_6 [i_0] [i_0] [i_7]);
                arr_29 [i_0] [i_6] [i_7] [7] = (arr_27 [i_0] [i_6 + 1] [i_6 - 2]);
                arr_30 [i_0] [i_0] [i_7] [i_0] |= (!(arr_27 [i_6] [i_6 - 2] [i_6 + 1]));
                /* LoopNest 2 */
                for (int i_8 = 3; i_8 < 13;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {
                        {
                            var_25 = (arr_37 [6] [i_8] [6] [6] [i_0] [6]);
                            var_26 = (arr_27 [i_6 - 2] [i_6 + 1] [i_6 - 2]);
                        }
                    }
                }
                var_27 = (!850715);
            }
            for (int i_10 = 0; i_10 < 14;i_10 += 1)
            {
                var_28 = (max(var_28, ((((-(arr_7 [i_10] [i_6] [i_0])))))));
                arr_42 [i_10] = arr_23 [i_0] [i_0] [i_0];
            }

            for (int i_11 = 0; i_11 < 14;i_11 += 1)
            {
                arr_46 [i_0] [i_0] |= (!2631439460648443410);
                var_29 += (arr_34 [i_6 + 1] [i_6] [i_6] [i_6 + 1]);
            }
        }
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 14;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 14;i_13 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_14 = 2; i_14 < 12;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 14;i_15 += 1)
                        {
                            {
                                var_30 = (arr_38 [i_14 - 2] [i_15] [i_14 - 1] [i_14]);
                                var_31 = (arr_13 [i_0] [i_12] [i_15]);
                                arr_57 [i_12] [i_14] [i_14] [i_14] |= arr_26 [i_14 - 1] [i_14 + 1] [i_14 - 1] [i_14 - 1];
                                var_32 *= -660209215;
                            }
                        }
                    }
                    var_33 = (~(arr_49 [i_13] [i_12] [i_0]));
                }
            }
        }
        var_34 = (arr_10 [i_0] [i_0] [i_0]);
    }
    #pragma endscop
}

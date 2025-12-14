/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3176
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((2147483644 ? var_9 : var_3));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_14 = (arr_9 [i_0 - 2] [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 2]);
                                var_15 = (arr_3 [i_4]);
                            }
                        }
                    }
                    var_16 = -1;
                    var_17 = (arr_4 [17] [4]);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 16;i_6 += 1)
                        {
                            {
                                arr_18 [i_0] [13] [i_0] [13] = ((~(min(0, (arr_13 [i_0])))));
                                var_18 = ((var_5 || ((min(2147483645, ((1 ? (arr_6 [i_0]) : (arr_17 [i_0 - 3] [i_1] [7] [i_5] [0]))))))));
                                var_19 = arr_3 [i_0];
                            }
                        }
                    }
                    var_20 |= (arr_0 [i_2] [i_2]);
                }
            }
        }
    }
    var_21 = var_5;
    /* LoopNest 3 */
    for (int i_7 = 2; i_7 < 14;i_7 += 1)
    {
        for (int i_8 = 2; i_8 < 14;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 15;i_9 += 1)
            {
                {
                    var_22 = (arr_25 [8]);
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 14;i_10 += 1)
                    {
                        for (int i_11 = 2; i_11 < 14;i_11 += 1)
                        {
                            {
                                var_23 = -2147483644;
                                var_24 = ((-(arr_15 [1] [i_8 + 1] [1] [i_8 + 1])));
                                var_25 = var_0;
                                var_26 = ((!(-9223372036854775807 - 1)));
                                var_27 ^= (max((((arr_26 [i_7] [i_7] [i_7 - 2]) ? (arr_16 [i_8 - 1] [i_8 - 1]) : -var_5)), var_10));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 1; i_12 < 13;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 15;i_13 += 1)
                        {
                            {
                                var_28 += ((~((((0 <= (arr_8 [5]))) ? 1048064 : 2147483644))));
                                var_29 = (min(var_29, var_7));
                                var_30 = (arr_23 [i_7]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 15;i_14 += 1)
                    {
                        for (int i_15 = 1; i_15 < 12;i_15 += 1)
                        {
                            {
                                var_31 += min(var_2, (min((((arr_34 [i_7]) ? var_6 : var_5)), var_11)));
                                arr_44 [i_9] [i_8] [i_15 + 3] [i_9] [i_15 - 1] [i_9] [i_15 + 3] |= (max((((arr_2 [i_7 + 1] [i_15 + 2] [i_7 + 1]) % var_6)), 67108860));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_16 = 0; i_16 < 19;i_16 += 1)
    {
        for (int i_17 = 1; i_17 < 18;i_17 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 19;i_18 += 1)
                {
                    for (int i_19 = 3; i_19 < 18;i_19 += 1)
                    {
                        {
                            var_32 = (-((((min((arr_45 [i_16]), var_8))) ? ((var_5 ? var_4 : var_0)) : 65535)));
                            var_33 = 4611686018427387904;
                            var_34 = 31457280;
                            var_35 |= var_10;
                        }
                    }
                }
                var_36 = (((arr_49 [i_17] [i_17]) + ((+(((arr_54 [17] [i_16] [i_16]) | -2147483628))))));
                /* LoopNest 2 */
                for (int i_20 = 0; i_20 < 19;i_20 += 1)
                {
                    for (int i_21 = 3; i_21 < 15;i_21 += 1)
                    {
                        {
                            var_37 = (arr_47 [i_16] [i_20]);
                            var_38 = (-7 - 6);
                            var_39 |= (min(1, 6));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

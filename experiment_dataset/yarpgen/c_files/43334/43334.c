/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43334
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        arr_3 [i_0] [11] = (arr_0 [0] [8]);

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            arr_6 [i_1] = ((!(-120 ^ 11)));
            var_11 = var_6;
            var_12 &= (var_0 % ((-(arr_2 [i_0] [i_0]))));
            var_13 = (arr_0 [i_1] [i_0 + 1]);
        }
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                var_14 = 6;
                arr_12 [i_0] [i_0] = (arr_9 [i_0] [1]);
                arr_13 [i_0] [i_0] = (arr_4 [i_3]);

                for (int i_4 = 3; i_4 < 15;i_4 += 1) /* same iter space */
                {
                    var_15 -= (!13044);
                    arr_16 [i_4] = (((arr_9 [1] [1]) ? ((-108 ? 107 : 0)) : 1421725618));
                    arr_17 [14] [i_3] [14] [i_3] [14] |= var_5;
                    var_16 = (max(var_16, (3269574064 < 13044)));
                    var_17 ^= ((arr_7 [i_4 + 1]) ? 211 : var_8);
                }
                for (int i_5 = 3; i_5 < 15;i_5 += 1) /* same iter space */
                {
                    arr_22 [4] [9] [9] [0] [9] [4] = 2147483641;
                    var_18 = (max(var_18, (arr_5 [10] [i_2] [10])));
                    var_19 ^= var_10;
                    var_20 = (min(var_20, (arr_1 [9] [13])));
                }
            }
            arr_23 [i_0] [i_0] = ((+(((arr_21 [i_0] [i_0] [14] [i_0]) << 0))));
        }
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            var_21 = 3269574040;

            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                arr_28 [15] [15] = ((!(arr_0 [i_7] [i_7])));
                var_22 = (min(var_22, (((-((~(arr_25 [i_0]))))))));
            }
            for (int i_8 = 0; i_8 < 18;i_8 += 1)
            {
                var_23 = 13044;
                var_24 *= ((!(((1 ? var_8 : 2489416354)))));
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 18;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {
                        {
                            arr_37 [4] [4] [1] [1] [4] = -125;
                            arr_38 [i_0] [17] [1] = (var_10 || 4029595928);
                            var_25 = (((arr_36 [17] [17] [17] [10] [15]) ? -var_3 : (arr_8 [1])));
                            var_26 = (((arr_31 [14] [7] [1] [7] [7] [1]) ? ((((arr_29 [3] [4] [16]) ? (-32767 - 1) : var_10))) : var_8));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 18;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 18;i_12 += 1)
                    {
                        {
                            var_27 = 0;
                            arr_44 [i_0] [4] [1] [i_11] [4] [7] [i_0] = (((arr_36 [1] [i_0] [6] [i_0] [i_0]) << 20));
                            var_28 = 1;
                        }
                    }
                }
            }
            var_29 = (arr_42 [8] [8] [8] [16] [8] [14] [1]);
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 18;i_14 += 1)
                {
                    {
                        var_30 ^= (arr_24 [i_0] [8] [i_0 + 1]);
                        var_31 *= (-46389661 || 10);
                    }
                }
            }
        }
        for (int i_15 = 2; i_15 < 15;i_15 += 1)
        {
            var_32 *= (~-4031567034320259343);
            arr_55 [i_0] [i_0] = (arr_54 [i_0] [i_0] [1]);
            /* LoopNest 2 */
            for (int i_16 = 2; i_16 < 16;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 18;i_17 += 1)
                {
                    {
                        var_33 = var_7;
                        arr_63 [i_0] [0] [i_0] [9] [i_0] = (~59);
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_18 = 3; i_18 < 17;i_18 += 1)
        {
            for (int i_19 = 2; i_19 < 17;i_19 += 1)
            {
                {
                    arr_70 [2] [i_18] = 1033584840;
                    var_34 = ((!(arr_69 [i_0] [i_0])));
                    var_35 = (min(var_35, (arr_53 [i_0 + 1])));
                }
            }
        }
        arr_71 [17] [17] = (arr_47 [i_0]);
        arr_72 [i_0] [i_0] = (((arr_29 [11] [i_0 + 1] [i_0 + 1]) || var_6));
    }
    var_36 = ((max(var_9, (((-979028416 + 2147483647) << (var_1 - 41))))));
    /* LoopNest 2 */
    for (int i_20 = 0; i_20 < 17;i_20 += 1)
    {
        for (int i_21 = 0; i_21 < 0;i_21 += 1)
        {
            {
                var_37 = max((arr_39 [1] [0] [8] [i_21]), (((!((max((arr_18 [13] [13] [13] [13] [13] [13]), var_5)))))));
                arr_77 [3] [i_21] [10] = (arr_74 [i_20]);
            }
        }
    }
    var_38 = -var_3;
    var_39 = var_0;
    #pragma endscop
}

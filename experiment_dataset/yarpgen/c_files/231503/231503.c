/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231503
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((+(min((~66), ((min(28, 1)))))));
    var_21 = (((((max(1, var_18))) ? var_8 : (1 * var_12))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_22 ^= ((!(arr_0 [i_0])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_23 -= (arr_0 [i_0]);
                                arr_12 [i_4] [i_3] [i_3] [i_2] [i_1] [i_0] = (var_18 * var_19);
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] &= ((var_19 / (((arr_3 [i_3]) ? 51 : 214))));
                            }
                        }
                    }
                }
            }
        }
        var_24 = (((~42) | var_0));
    }
    for (int i_5 = 3; i_5 < 10;i_5 += 1)
    {
        arr_17 [i_5] = (min((arr_14 [i_5]), var_7));

        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            arr_20 [i_6] [i_5] [i_5 + 4] = (((((((arr_6 [i_5 + 1] [i_5] [i_5]) ? var_17 : (var_4 * var_4))) + 2147483647)) >> (-1 + 7)));
            var_25 = (max(var_25, var_2));
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 14;i_7 += 1) /* same iter space */
        {

            for (int i_8 = 2; i_8 < 11;i_8 += 1)
            {
                arr_27 [i_5] [i_7] [i_8 - 1] = ((-((-(arr_19 [i_5] [i_5])))));
                var_26 = (max(var_26, (-227 * 23184)));
                var_27 = (arr_1 [i_7]);
                arr_28 [1] [i_7] [1] = ((((-1057438481 ? 4294967295 : (arr_8 [i_5]))) * (!1)));
            }
            var_28 = ((var_10 ? (~var_2) : var_16));
            arr_29 [i_5] [i_7] [i_7] = 16718;
            arr_30 [i_5] [i_7] = var_11;
        }
        for (int i_9 = 0; i_9 < 14;i_9 += 1) /* same iter space */
        {

            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                arr_38 [i_10] [i_10] = (min(4418905042552208581, ((((1 || var_2) && (arr_31 [i_5]))))));
                var_29 = (arr_14 [i_5 + 4]);
                var_30 = 3;
            }
            var_31 = ((((~250) ? ((1 ? 7 : 14)) : (((min(8427, 60471)))))));
            var_32 = ((125 ? (min(15, ((var_2 ? 24660 : var_17)))) : (((min((arr_23 [i_5] [i_9]), 0)) / (var_3 - 1)))));
            var_33 = (max(var_33, (arr_3 [i_5 + 3])));
        }
        var_34 = (max(var_34, ((max((min((((arr_9 [i_5] [i_5] [i_5]) * (arr_31 [i_5]))), ((24654 ? 16722 : 3)))), -var_10)))));
    }
    for (int i_11 = 0; i_11 < 21;i_11 += 1)
    {
        arr_41 [i_11] = ((-(min(((min(var_11, -1))), 3))));
        var_35 -= (min(-6897171834260642516, ((1 ? 16724 : 6897171834260642536))));
    }
    for (int i_12 = 2; i_12 < 16;i_12 += 1)
    {
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 17;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 1;i_14 += 1)
            {
                {
                    var_36 = (max((arr_7 [i_14]), var_10));
                    arr_51 [i_12 - 2] [i_12 - 2] [i_13] = ((~(max((~var_1), (~2485)))));
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 17;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 17;i_16 += 1)
                        {
                            {
                                arr_57 [i_13] [i_14] = (((max((max((arr_46 [i_12]), var_6)), (arr_4 [i_12 - 1] [i_12 + 1] [i_12 - 1]))) < var_11));
                                var_37 ^= (((~28) - (((((var_17 + var_12) >= (((-24667 ? var_16 : 13703)))))))));
                                arr_58 [i_13] [i_15] [i_12] [i_13] [i_13] = ((!((min((((1 ? 53719 : -113))), var_17)))));
                                arr_59 [i_13] [i_14] [i_13] = ((!((min(var_18, var_13)))));
                            }
                        }
                    }
                }
            }
        }
        var_38 = 1;
        var_39 = var_9;
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197955
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((2 ^ 0) & (((~var_11) * 1))));

    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        var_19 = ((((min((((-(arr_0 [i_0])))), (max((arr_1 [i_0 - 1]), var_16))))) ? 1 : (((0 >= (!1))))));
        var_20 = var_6;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        var_21 = (((((-((1 << (var_8 - 1483598882)))))) ? (arr_0 [i_0]) : ((((min((-9223372036854775807 - 1), (arr_2 [i_0] [i_1] [i_0 + 1]))) < var_0)))));
                        var_22 = min(1, -9184991761930503101);
                        var_23 = ((((max((arr_4 [i_0 - 3] [i_0 + 1] [i_2]), (arr_4 [i_0 - 2] [i_1] [i_2])))) ? 1 : (arr_4 [i_0 - 3] [i_0 + 1] [i_2])));
                    }
                }
            }
        }
        arr_9 [i_0 - 3] [i_0] = var_9;
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 7;i_4 += 1)
    {
        var_24 = (((arr_5 [10]) < (arr_1 [i_4 + 1])));

        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 8;i_8 += 1)
                    {
                        {
                            var_25 ^= (((arr_22 [i_8 - 1] [i_8] [i_8 - 1] [i_4 + 2]) * (arr_3 [i_4])));
                            var_26 ^= (~((var_3 ? (arr_22 [i_8] [i_7] [i_6] [i_5]) : var_11)));
                            var_27 ^= (1 <= 1);
                        }
                    }
                }
            }
            var_28 = (arr_21 [i_4 + 3] [i_4 + 3] [i_4 - 2] [i_5] [i_5] [i_4]);
            var_29 = (var_10 ? var_7 : 4294967295);
            var_30 = (arr_14 [i_4]);
        }
        for (int i_9 = 0; i_9 < 10;i_9 += 1) /* same iter space */
        {
            arr_26 [i_9] [i_9] = ((~(arr_17 [i_4 - 2] [i_9] [i_9])));
            var_31 = ((-1 ? var_4 : (arr_18 [i_4 - 2] [i_4] [i_4] [i_4] [i_4] [i_4 - 2])));
        }
        for (int i_10 = 0; i_10 < 10;i_10 += 1) /* same iter space */
        {
            var_32 = (arr_20 [i_4 + 3] [i_10] [i_10] [i_4] [i_4] [i_4]);
            /* LoopNest 3 */
            for (int i_11 = 3; i_11 < 7;i_11 += 1)
            {
                for (int i_12 = 4; i_12 < 9;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 10;i_13 += 1)
                    {
                        {
                            var_33 = (((arr_37 [i_13]) ? (~var_12) : (arr_8 [i_4 - 2] [i_4] [i_4 - 2] [i_4 - 2])));
                            arr_38 [i_4] [i_10] [i_13] [i_11] [i_12] [i_13] = ((arr_4 [i_12 - 2] [i_12 - 4] [i_13]) << ((((var_14 ? var_14 : (arr_18 [i_4 + 1] [i_12] [i_4 + 1] [i_10] [i_4] [i_11]))) - 105)));
                            arr_39 [i_4] [i_4] [i_11] [i_13] [i_13] [i_13] = ((1 ? -7902726836086730488 : (-2147483647 - 1)));
                            var_34 = 15;
                        }
                    }
                }
            }
        }
    }
    for (int i_14 = 0; i_14 < 21;i_14 += 1)
    {
        var_35 = (min(var_35, 2382));
        var_36 = ((((max(((((arr_41 [i_14] [i_14]) ? 0 : -9184991761930503101))), (max(0, var_8))))) ? (((-14 && var_7) ? (arr_4 [i_14] [i_14] [1]) : (arr_1 [i_14]))) : (max(var_5, (arr_40 [i_14])))));
    }
    #pragma endscop
}

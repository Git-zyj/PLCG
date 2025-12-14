/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40387
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 120;
    var_19 = (~49969);

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        var_20 = ((~(max(var_8, (1 / var_17)))));
                        var_21 = ((1 ? ((~(arr_2 [i_3]))) : var_9));
                        var_22 = ((~(max(1, var_0))));
                        var_23 = 132;
                    }
                }
            }
        }
        var_24 = (((~(arr_4 [i_0]))));
        var_25 = (min(var_25, (arr_4 [i_0])));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            var_26 = (max(var_26, (((var_17 <= -69) ? (arr_7 [i_4]) : (-35 != 3633352967)))));
            var_27 = ((~(arr_15 [i_4] [i_5])));

            for (int i_6 = 1; i_6 < 1;i_6 += 1)
            {
                arr_19 [i_4] [i_6] [i_6] = ((-((-147318148 ? 1601182602 : 97))));
                arr_20 [i_6] = (arr_9 [i_4] [i_5] [i_6 - 1] [i_6 - 1]);
                var_28 = ((var_14 ? (-23482 ^ 132) : (((arr_14 [i_4] [i_4]) + var_4))));
            }
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                var_29 = ((~(((arr_15 [i_4] [i_4]) + var_7))));
                arr_24 [i_4] = var_10;
                var_30 = ((3633352967 ? (((arr_4 [i_4]) ? 86 : (arr_2 [i_4]))) : var_16));
                arr_25 [5] [i_5] [5] [5] = (arr_14 [i_4] [i_4]);
                var_31 = (min(var_31, (arr_22 [i_7] [i_5] [i_5])));
            }
        }
        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            var_32 = (max(var_32, ((((arr_5 [i_4] [i_8] [i_8]) ^ (arr_27 [12]))))));
            arr_28 [i_8] = (((1448644384 ? var_3 : 606851664)));
            var_33 = (18446744073709551606 ? (~var_0) : (~4294967295));
            var_34 += (arr_27 [i_4]);
            var_35 ^= (~15943819217473670961);
        }
        for (int i_9 = 0; i_9 < 17;i_9 += 1)
        {
            var_36 = (max(var_36, var_5));
            arr_32 [i_4] [11] [i_4] = (1 ? 0 : 1156384164);
            var_37 += ((124 | (((arr_27 [i_9]) % 255))));
            var_38 += (((arr_4 [i_4]) ? 12517 : (arr_3 [i_4] [i_4] [i_4])));
        }
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 17;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 16;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 17;i_12 += 1)
                {
                    {
                        var_39 -= (((arr_40 [4] [i_10] [i_11] [i_12]) <= var_7));
                        arr_44 [i_4] [i_10] [i_10] [i_10] = ((~(arr_13 [i_4])));
                    }
                }
            }
        }

        for (int i_13 = 3; i_13 < 16;i_13 += 1)
        {
            var_40 -= var_15;
            arr_48 [8] &= var_8;
        }
    }
    #pragma endscop
}

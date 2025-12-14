/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4042
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= (min(16, (16 % 1)));
    var_12 &= var_2;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_13 = (max(var_13, (arr_1 [i_0])));
        var_14 = ((((((((arr_1 [i_0]) >> (((arr_0 [i_0] [i_0]) - 133)))) != 1))) > (((min(1, 1))))));
        var_15 ^= ((((((var_0 ? (arr_1 [i_0]) : (arr_1 [i_0]))))) ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_16 = (min(var_16, (arr_4 [i_2])));
                    var_17 = (max(var_17, (arr_1 [i_0])));
                }
            }
        }

        for (int i_3 = 1; i_3 < 19;i_3 += 1)
        {
            var_18 = (min(var_18, (((1 ? 1 : 1)))));
            var_19 = (min(((((((arr_7 [i_0] [5] [2]) & var_7)) ^ (~1)))), ((1 ^ (arr_8 [i_3 + 1] [i_3 - 1])))));
            var_20 &= (((arr_3 [3]) >> (var_0 - 4978878442689779978)));
        }
        /* vectorizable */
        for (int i_4 = 3; i_4 < 19;i_4 += 1)
        {
            var_21 = (min(var_21, (1 / 1)));
            var_22 = (((~1) % ((var_7 ? var_4 : (arr_2 [i_0] [i_0] [i_0])))));
        }
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            var_23 = (max(var_23, ((((((~((var_9 ? var_3 : var_8))))) || var_8)))));

            for (int i_6 = 2; i_6 < 18;i_6 += 1)
            {
                var_24 += ((((1 > 1) && (arr_1 [i_0]))));
                arr_17 [i_0] [i_5] = ((((((1 ? 1 : 1)))) ? 1 : ((max(1, 1)))));
            }
            /* vectorizable */
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                var_25 = (min(var_25, var_6));

                for (int i_8 = 2; i_8 < 16;i_8 += 1)
                {
                    var_26 = (((arr_1 [i_7]) ? var_10 : (arr_14 [i_0])));
                    var_27 = (arr_20 [i_8] [i_8 + 2] [i_8 + 2] [i_8 - 1] [i_8 + 2] [i_5]);
                    var_28 *= ((~(arr_14 [i_0])));
                    var_29 = (arr_2 [i_8 + 3] [3] [i_0]);
                }
                for (int i_9 = 1; i_9 < 17;i_9 += 1)
                {

                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        var_30 = ((1 ^ (((arr_4 [i_5]) ^ (arr_27 [i_0] [i_0] [i_0] [i_0] [i_0])))));
                        var_31 = ((~(((arr_20 [i_0] [i_0] [i_0] [i_0] [1] [i_0]) | var_5))));
                        var_32 &= ((var_9 > ((~(arr_7 [i_0] [i_9] [i_10])))));
                    }
                    for (int i_11 = 1; i_11 < 19;i_11 += 1)
                    {
                        var_33 = (min(var_33, (~1)));
                        var_34 += (arr_4 [i_9 + 2]);
                    }
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        var_35 *= 1;
                        var_36 &= (((~var_6) & (((arr_8 [i_0] [i_5]) ? (arr_2 [i_12] [i_7] [i_7]) : var_1))));
                        var_37 += (((arr_22 [i_9 + 2] [i_9 + 3] [i_9 + 2] [i_9 + 1]) ? var_0 : (arr_22 [i_9 - 1] [i_9 + 1] [i_9 - 1] [i_9 + 1])));
                        arr_33 [i_0] [i_5] [i_7] [i_9] [i_0] = var_3;
                    }
                    var_38 = (~var_5);
                }
                for (int i_13 = 2; i_13 < 19;i_13 += 1)
                {
                    arr_37 [i_0] [i_0] [i_0] = (((var_0 < var_9) << 1));
                    var_39 += ((1 >> (((~1) + 4))));
                    arr_38 [1] [1] [16] [i_0] [1] [i_0] = 1;
                }
                for (int i_14 = 1; i_14 < 1;i_14 += 1)
                {
                    var_40 &= ((((~(arr_4 [i_5]))) - ((((arr_10 [i_0] [i_0]) || var_0)))));
                    arr_43 [i_7] [4] [i_7] [i_5] [i_7] |= (((arr_25 [i_0] [i_5] [10] [i_0] [0] [i_7]) != (arr_21 [i_0] [i_5] [i_5] [i_14 - 1])));
                    var_41 = (arr_15 [i_0] [1] [i_0] [i_0]);
                }
            }
        }
        /* vectorizable */
        for (int i_15 = 1; i_15 < 19;i_15 += 1)
        {
            var_42 = ((+((1 ? (arr_44 [i_15]) : 1))));
            var_43 = var_1;

            for (int i_16 = 0; i_16 < 20;i_16 += 1)
            {
                var_44 = (~1);

                for (int i_17 = 2; i_17 < 16;i_17 += 1)
                {
                    arr_52 [1] [i_16] [i_0] [i_0] = 1;
                    var_45 += 1;
                }
                var_46 += 1;
                var_47 += (arr_51 [12] [6]);
            }
            for (int i_18 = 0; i_18 < 1;i_18 += 1)
            {
                var_48 = (var_3 ? ((~(arr_11 [i_0] [i_15] [i_0]))) : (((arr_27 [18] [i_15] [i_15] [18] [i_18]) ? (arr_10 [i_0] [i_0]) : (arr_2 [i_0] [i_0] [i_0]))));

                for (int i_19 = 1; i_19 < 19;i_19 += 1)
                {
                    var_49 = (((1 ^ var_4) || (arr_5 [i_0] [i_15 + 1] [i_18] [i_18])));
                    var_50 = (min(var_50, (~var_1)));
                    var_51 = 1;
                    var_52 += (((((var_1 + 2147483647) << (1 - 1))) & 1));
                }
            }
        }
    }
    for (int i_20 = 0; i_20 < 20;i_20 += 1)
    {
        var_53 = (arr_18 [i_20]);
        arr_61 [i_20] = (max(((((~var_10) && (1 >> 1)))), (arr_54 [i_20] [i_20] [i_20])));
    }
    /* LoopNest 3 */
    for (int i_21 = 0; i_21 < 15;i_21 += 1)
    {
        for (int i_22 = 0; i_22 < 15;i_22 += 1)
        {
            for (int i_23 = 1; i_23 < 12;i_23 += 1)
            {
                {
                    var_54 = (((((((((arr_20 [i_21] [16] [17] [i_21] [i_21] [i_21]) | var_5))) ? var_10 : (~var_5)))) ? 1 : (~var_5)));
                    /* LoopNest 2 */
                    for (int i_24 = 1; i_24 < 13;i_24 += 1)
                    {
                        for (int i_25 = 3; i_25 < 14;i_25 += 1)
                        {
                            {
                                arr_76 [i_21] [i_24] = (i_24 % 2 == 0) ? ((max(((((1 ? var_7 : (arr_66 [7] [7] [i_23]))) >> ((((~(arr_12 [i_24] [i_24 + 2] [i_24 + 2]))) - 81)))), ((((((arr_18 [i_21]) >> 1))) ? (~1) : (arr_7 [i_22] [i_23 + 1] [i_25 - 2])))))) : ((max(((((1 ? var_7 : (arr_66 [7] [7] [i_23]))) >> ((((((~(arr_12 [i_24] [i_24 + 2] [i_24 + 2]))) - 81)) + 161)))), ((((((arr_18 [i_21]) >> 1))) ? (~1) : (arr_7 [i_22] [i_23 + 1] [i_25 - 2]))))));
                                arr_77 [i_23] [i_23] [i_22] &= (min((min(((1 ? 1 : 1)), (1 || 1))), (arr_3 [i_23 + 2])));
                            }
                        }
                    }
                    var_55 = 1;
                }
            }
        }
    }
    #pragma endscop
}

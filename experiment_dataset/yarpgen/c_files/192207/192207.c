/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192207
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, (((0 ? 1 : 1)))));
    var_13 = var_4;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 = (((arr_1 [1]) ? (arr_1 [i_0]) : (((~var_5) ? ((max(1, 1))) : ((var_8 ? var_6 : 1))))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_4 [i_0] [i_0] = (((1 != 1) ? (((arr_3 [i_1] [1]) >> (((arr_3 [i_1] [i_0]) ? (arr_2 [i_1]) : 1)))) : ((((((arr_2 [i_1]) % 1))) ? 1 : (((arr_2 [1]) ^ 1))))));
            var_15 = (max(var_15, (~1)));
        }
        var_16 = (min(var_16, (min((min(1, (min((arr_0 [0]), var_7)))), (var_1 != 1)))));
    }
    for (int i_2 = 0; i_2 < 0;i_2 += 1)
    {
        arr_7 [i_2] &= (!(arr_5 [i_2 + 1] [i_2 + 1]));
        var_17 *= (((min((arr_5 [i_2 + 1] [i_2 + 1]), ((0 ? var_6 : (arr_5 [i_2 + 1] [i_2 + 1])))))) && ((max((((arr_6 [i_2 + 1]) ? 1 : 1)), var_3))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_18 = (min(var_18, (arr_9 [i_3])));
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    var_19 = 1;

                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_20 = 1;
                        var_21 &= (((arr_15 [i_4] [i_4 - 1] [i_4 - 1] [i_4 - 1]) * var_1));
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        var_22 = (min(var_22, (arr_15 [i_3] [i_3] [i_3] [i_4])));
                        arr_20 [i_3] [i_3] [i_5] [i_3] [i_4 - 1] [i_3] = arr_5 [i_3] [i_4];
                        var_23 = (min(var_23, (arr_19 [i_4 - 1] [i_4] [i_4 - 1] [i_4] [1] [1])));
                        var_24 -= ((((arr_8 [i_5]) ? var_3 : (arr_18 [i_3] [i_3] [1] [1] [i_3] [1]))) > (~var_11));
                    }
                    var_25 &= (((arr_1 [i_4 - 1]) ? var_3 : 1));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            {
                                var_26 *= arr_13 [i_3];
                                arr_27 [i_9] [i_9] [i_9] [i_8] [1] [i_4] [i_3] = 1;
                                var_27 = (min(var_27, ((((arr_15 [1] [i_5] [i_8] [i_9]) ? var_6 : (arr_3 [i_4 - 1] [i_8]))))));
                            }
                        }
                    }
                }
            }
        }
        arr_28 [i_3] = ((~(arr_13 [i_3])));

        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            var_28 = ((((1 ? var_8 : 1)) | ((1 ? 1 : (arr_26 [1] [i_3] [1])))));
            var_29 = 1;
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    {
                        var_30 ^= arr_17 [i_3];
                        arr_39 [i_12] [i_11] [i_10] [i_11] [i_3] = 1;
                        var_31 &= ((1 ? (arr_5 [i_3] [i_11]) : 0));
                        var_32 -= ((var_0 ? 1 : 1));
                    }
                }
            }
            arr_40 [i_3] [i_10] = 1;
        }
        for (int i_13 = 0; i_13 < 1;i_13 += 1)
        {
            arr_43 [i_13] [i_13] = (((arr_10 [i_3] [i_13]) ? (arr_29 [i_3] [i_13]) : (arr_30 [i_3])));
            var_33 = (min(var_33, ((((~0) ? (((arr_6 [i_3]) ? 1 : (arr_41 [i_13] [i_13] [i_3]))) : (~1))))));
        }
        for (int i_14 = 0; i_14 < 0;i_14 += 1)
        {
            arr_48 [i_14] = ((1 * (arr_16 [i_3])));
            var_34 = ((1 % (~1)));
            var_35 = (arr_17 [i_14]);
        }
        for (int i_15 = 0; i_15 < 1;i_15 += 1)
        {
            var_36 = (max(var_36, (((~(arr_26 [i_15] [i_3] [i_3]))))));
            var_37 *= ((1 ? (arr_30 [i_15]) : (((arr_22 [i_3] [i_15] [i_15]) ? (arr_23 [i_3] [i_15] [i_15] [i_15] [i_3]) : (arr_23 [i_3] [i_15] [i_15] [i_3] [i_15])))));
            arr_52 [i_3] [i_15] = ((((((arr_14 [i_3] [i_15] [i_3] [i_3]) ? (arr_2 [i_3]) : 1))) ? (arr_6 [i_3]) : 1));
        }
    }
    #pragma endscop
}

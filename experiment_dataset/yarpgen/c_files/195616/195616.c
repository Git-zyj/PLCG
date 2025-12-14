/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195616
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    var_11 = 1;
                    var_12 = (max(var_12, ((min((!252), (arr_1 [1] [i_2]))))));
                }
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    arr_11 [i_0] [i_1] [i_3] = ((((((((arr_2 [i_1]) % var_10)) / (arr_2 [i_0])))) ? (((1 || 1) >> (arr_8 [i_3] [i_1] [i_1] [i_3]))) : (((arr_10 [i_0] [i_1] [i_3] [i_3]) ? var_1 : ((var_0 | (arr_5 [i_0] [i_0] [i_0])))))));
                    var_13 = (min(var_13, 0));

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                    {
                        var_14 = (min(var_14, (((var_8 ? 1 : (arr_3 [i_1 + 1]))))));
                        arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] = 187;
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                    {

                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            arr_23 [i_0] [i_1 - 2] [i_1 - 2] [i_3] [i_1 - 2] [i_6] = (arr_14 [i_0]);
                            var_15 ^= (~1);
                        }
                        var_16 ^= ((0 ? 255 : 113));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                    {
                        var_17 = ((91 + (arr_8 [i_7] [1] [i_3] [i_7])));
                        var_18 ^= (((255 >= 31) | (((var_5 == (arr_16 [i_0] [i_0] [i_0] [i_0]))))));
                        var_19 |= arr_24 [i_0] [1];
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                    {
                        var_20 = (!(arr_19 [i_1 + 1] [i_1 + 2] [16] [i_1 - 2] [i_1 + 1]));
                        arr_30 [i_0] [i_1 - 4] [i_3] [i_3] [1] = (arr_1 [i_1 - 3] [i_1 - 4]);
                        var_21 ^= (var_6 > (arr_9 [i_1 + 1] [i_1 - 4] [i_1 + 1]));
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            {
                                arr_37 [22] = ((~(((~var_4) | (((arr_4 [i_0] [i_3]) ? (arr_24 [i_10] [i_9]) : var_8))))));
                                var_22 = (max((min((arr_22 [i_1]), (arr_6 [i_0] [i_1] [i_9] [i_10]))), (arr_20 [i_10] [i_1] [i_3] [1] [i_1 - 4])));
                                arr_38 [i_0] [1] [i_3] [1] [i_10] = ((37 < (((((max(69, var_8))) == (arr_12 [i_1 - 4] [i_1 - 3] [i_1 - 3]))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 24;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        {
                            var_23 = (((((+(((arr_34 [i_0] [i_0] [11] [i_0] [i_0]) ? var_2 : (arr_8 [i_11] [i_1 + 1] [i_11] [1])))))) ? (((arr_21 [i_1 + 2] [i_1 - 1] [i_1 + 2] [i_1] [i_1 + 1]) ? (arr_21 [i_1 + 1] [i_1 - 1] [i_1 - 3] [i_1] [i_1 + 2]) : (arr_21 [i_1 - 2] [i_1 - 1] [i_1 - 2] [i_1] [i_1 - 3]))) : (arr_10 [14] [i_1] [i_11] [i_12])));
                            arr_46 [i_0] [i_1 - 2] [i_1 - 2] [i_11] [i_11] [11] = ((-(arr_24 [i_1 - 3] [i_1])));
                        }
                    }
                }
                var_24 ^= (((((min(var_1, var_5)) ? 166 : ((max((arr_6 [i_1 - 3] [i_1] [i_1] [i_0]), var_5))))) & (((((arr_14 [i_1 + 1]) ? (arr_17 [i_0] [i_0] [i_0] [i_0] [i_0]) : 0)) | (((arr_21 [i_0] [i_0] [i_0] [i_1] [i_1]) ? 115 : (arr_40 [i_0] [i_0] [1])))))));
            }
        }
    }

    for (int i_13 = 0; i_13 < 1;i_13 += 1)
    {
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 1;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 1;i_15 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_16 = 3; i_16 < 9;i_16 += 1)
                    {
                        for (int i_17 = 1; i_17 < 11;i_17 += 1)
                        {
                            {
                                var_25 = (min(var_25, ((((~1) % (((arr_56 [i_17 - 1] [i_17 - 1] [i_17] [1] [i_17] [4]) ? (arr_56 [i_17 - 1] [i_14] [12] [1] [i_16 + 2] [i_14]) : (arr_56 [i_17 - 1] [i_14] [i_14] [10] [i_17 - 1] [i_17 - 1]))))))));
                                var_26 = (min(var_26, ((((((min(0, (arr_39 [1] [i_15] [1] [i_15]))))) / (1 * 94))))));
                            }
                        }
                    }
                    var_27 = min((arr_48 [i_13]), (max((arr_48 [i_13]), 187)));
                    var_28 = ((((((arr_50 [i_14] [i_15]) ? (arr_50 [i_14] [i_15]) : (arr_40 [i_14] [i_14] [i_15])))) ? ((min(var_5, (arr_50 [i_13] [i_14])))) : ((min((arr_40 [i_13] [i_14] [i_15]), (arr_50 [i_13] [i_13]))))));
                }
            }
        }
        arr_59 [i_13] = ((((!((((arr_39 [18] [4] [i_13] [i_13]) ? 1 : 128))))) ? (((arr_58 [10] [i_13] [i_13] [i_13]) ? ((max(1, (arr_48 [1])))) : ((((arr_16 [i_13] [i_13] [i_13] [i_13]) && (arr_4 [22] [i_13])))))) : ((((var_7 ? (arr_58 [1] [i_13] [i_13] [i_13]) : (arr_9 [i_13] [1] [i_13])))))));
    }
    for (int i_18 = 0; i_18 < 1;i_18 += 1)
    {
        var_29 = (max(((var_7 ? var_7 : (arr_18 [i_18] [i_18] [i_18]))), ((81 ? 201 : 236))));
        var_30 = (min(var_30, var_2));
    }
    #pragma endscop
}

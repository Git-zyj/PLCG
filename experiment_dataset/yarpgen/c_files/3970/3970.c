/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3970
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        var_10 = var_0;
                        var_11 = (max((min(-33, (arr_2 [i_3]))), (((((arr_2 [i_0]) + 2147483647)) << (var_4 - 3803581548082465742)))));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            {
                                var_12 = (min(var_12, ((max(-16, var_7)))));
                                var_13 = (7936 > 7916);
                                var_14 |= (var_5 & var_6);
                                var_15 = ((+(((arr_9 [1] [i_1] [i_2] [6] [i_5]) ? ((-(arr_6 [i_5] [i_2] [i_1]))) : (((var_0 ? var_0 : (arr_4 [i_4]))))))));
                            }
                        }
                    }
                    var_16 = (max(var_16, ((((arr_2 [5]) ? var_2 : -var_8)))));

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        var_17 = var_4;
                        var_18 = ((((2012467398 ? 1 : var_1)) << (((arr_12 [i_0] [i_1] [i_0]) + 8624513222681172351))));
                    }
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            {
                                var_19 = ((((((arr_9 [i_0] [1] [1] [i_8] [i_9]) ? 56 : (arr_14 [i_0] [i_1])))) ? (3356442112 % var_3) : var_4));
                                var_20 = -23685;
                                var_21 = arr_17 [i_0] [i_0] [i_7] [i_8] [1] [i_0];
                                var_22 -= 11655;
                            }
                        }
                    }
                    var_23 = ((1 ? var_8 : 255));
                }
                /* vectorizable */
                for (int i_10 = 0; i_10 < 10;i_10 += 1) /* same iter space */
                {
                    var_24 = (max(var_24, (arr_21 [i_0] [i_1] [i_10])));
                    var_25 = (arr_22 [4] [i_1] [i_10]);
                }
                /* vectorizable */
                for (int i_11 = 0; i_11 < 10;i_11 += 1) /* same iter space */
                {
                    var_26 = (!(arr_0 [i_0]));
                    var_27 -= 32768;
                    /* LoopNest 2 */
                    for (int i_12 = 1; i_12 < 9;i_12 += 1)
                    {
                        for (int i_13 = 1; i_13 < 9;i_13 += 1)
                        {
                            {
                                var_28 += (~var_1);
                                var_29 -= (((arr_16 [i_0] [i_0] [i_0]) >= (arr_6 [i_11] [i_11] [i_0])));
                                var_30 = (arr_20 [i_13 + 1] [i_13 - 1] [i_13 - 1] [i_12 - 1] [i_1]);
                                var_31 = 1;
                            }
                        }
                    }
                }
                var_32 = (max(var_32, ((((~(min((arr_13 [i_1] [2] [i_0] [i_0] [i_0]), var_9)))) != ((~((1 ? 26 : -758231329821931965))))))));
                var_33 = ((~((((11861737352669980192 >> (((arr_15 [2] [6] [i_0]) - 4346)))) << ((((var_2 ? (arr_15 [i_1] [i_0] [8]) : (arr_4 [i_1]))) + 1422681780))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_14 = 0; i_14 < 1;i_14 += 1)
    {
        for (int i_15 = 4; i_15 < 24;i_15 += 1)
        {
            for (int i_16 = 3; i_16 < 21;i_16 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 25;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 25;i_18 += 1)
                        {
                            {
                                var_34 -= (max((arr_35 [i_18] [i_18] [i_18]), (arr_38 [i_18] [i_18])));
                                var_35 = ((((((arr_33 [i_14]) & (arr_33 [i_14])))) ? (max((arr_33 [i_14]), (arr_33 [i_14]))) : (arr_33 [i_14])));
                                var_36 = (arr_34 [i_14] [i_14]);
                            }
                        }
                    }
                    var_37 = (max((max((arr_38 [i_14] [i_15]), var_7)), ((((max((arr_35 [i_15] [i_15] [i_15]), (arr_37 [i_16] [i_14] [22] [i_15] [i_14] [i_14])))) ? var_5 : ((max(var_3, var_9)))))));
                    var_38 = (((max((var_5 - var_5), (arr_40 [i_14] [i_14] [i_16 + 2] [i_14] [i_14] [i_16 + 4])))) ? (arr_35 [i_16 - 1] [i_15] [i_14]) : ((((arr_38 [i_14] [i_14]) < (arr_32 [i_15] [i_16 - 2])))));
                    /* LoopNest 2 */
                    for (int i_19 = 2; i_19 < 24;i_19 += 1)
                    {
                        for (int i_20 = 0; i_20 < 25;i_20 += 1)
                        {
                            {
                                var_39 = (max((arr_39 [i_14] [i_14]), 1));
                                var_40 = (max((arr_31 [i_14]), ((((var_1 ^ 57610) && (arr_33 [i_14]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_41 = (min(var_41, (((~(~var_3))))));
    var_42 = var_5;
    #pragma endscop
}

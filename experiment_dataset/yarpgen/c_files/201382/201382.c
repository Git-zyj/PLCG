/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201382
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                var_13 = var_8;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_14 = (min(var_14, (((255 ? var_11 : (0 < 0))))));
                            arr_10 [i_0] [i_0] [i_0] [i_0] = (min((arr_8 [i_0]), (min(1, 1697684149))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 13;i_5 += 1)
                    {
                        {
                            var_15 = (max(var_15, ((min(106, (~1))))));
                            arr_18 [i_0] [i_1 - 2] [i_0] [i_1 - 2] [i_5] = (!1);
                            var_16 = (min(((max(var_11, (arr_8 [i_0])))), (max(1, ((var_10 ? (arr_1 [i_0] [i_1 - 1]) : 0))))));
                            var_17 &= (((((129 ? ((var_3 << (var_12 - 983806883))) : (((32654 ? var_6 : var_8)))))) ? (arr_17 [2]) : ((max(1, ((488692426 ? (arr_15 [i_0] [i_1]) : var_11)))))));
                        }
                    }
                }

                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 14;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 16;i_8 += 1)
                        {
                            {
                                var_18 |= (max(-82, (min(1, (arr_5 [i_0 + 2] [i_6] [i_7 + 3] [i_7 + 3])))));
                                var_19 = 1;
                            }
                        }
                    }
                    var_20 = 1;
                }
            }
        }
    }
    var_21 = (~var_8);
    /* LoopNest 3 */
    for (int i_9 = 3; i_9 < 20;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 21;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 19;i_11 += 1)
            {
                {
                    var_22 += (((((27490 ^ (arr_30 [i_10] [i_11 + 2] [i_10])))) ? ((((min(var_10, (arr_34 [i_11 - 1] [i_11] [i_11] [i_10])))) ? 1 : var_6)) : ((((!(arr_34 [i_9 - 3] [14] [14] [i_10])))))));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 21;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 21;i_13 += 1)
                        {
                            {
                                arr_42 [i_9 - 3] [i_11] [i_11] [i_12] [i_13] = ((1 ? -32638 : 0));
                                var_23 = (arr_29 [i_9 - 2]);
                                arr_43 [i_9] [i_10] [15] [i_11] [i_10] = ((max((arr_30 [i_9 + 1] [i_11 + 2] [i_13]), (arr_30 [i_9 + 1] [i_11 + 2] [i_13]))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 21;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 1;i_15 += 1)
                        {
                            {
                                var_24 = var_5;
                                arr_51 [i_9] [i_9] [i_11] [i_14] [i_15] [i_14] = 1;
                                arr_52 [i_9] [i_10] [i_10] [i_14] [i_11] = (min((-2147483647 - 1), ((((arr_34 [i_9] [i_9 - 2] [i_9 + 1] [i_11]) < -17650)))));
                                var_25 = ((((min(var_3, var_9))) ? (arr_40 [i_10] [i_10] [12] [i_9 - 2] [i_15] [i_11] [i_11 - 1]) : (arr_40 [i_10] [i_10] [i_14] [i_14] [i_15] [i_15] [i_11 + 1])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_26 = (min(var_11, var_2));
    #pragma endscop
}

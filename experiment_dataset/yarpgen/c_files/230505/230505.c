/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230505
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_10 = (((arr_1 [i_0]) ? ((((arr_1 [i_0]) ^ var_4))) : (min((481283834535851664 + var_7), (arr_1 [i_0])))));
        arr_2 [i_0] = var_8;
        var_11 ^= ((~(~8041041416790843582)));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            {
                var_12 = (min(var_12, (~2147483646)));
                var_13 = 89;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            {
                var_14 = (min(var_14, (((~(min((min(8246337208320, 14014102630122282281)), -96)))))));
                /* LoopNest 3 */
                for (int i_5 = 1; i_5 < 18;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            {
                                arr_24 [i_3] [i_4] [i_4] [i_5] [i_6] [i_7] = ((min(((~(arr_11 [i_4] [i_7])), -9))));
                                var_15 = (min(var_15, 6984564087560128774));
                            }
                        }
                    }
                }

                /* vectorizable */
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    var_16 = (((var_3 ? (arr_6 [i_3]) : (arr_13 [i_3] [i_3] [i_3]))));

                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        var_17 = var_0;
                        var_18 = var_6;
                        arr_29 [i_3] [i_4] [i_8] [i_3] = var_3;
                    }
                }
                /* vectorizable */
                for (int i_10 = 0; i_10 < 21;i_10 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 21;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 21;i_12 += 1)
                        {
                            {
                                arr_38 [i_4] [i_4] [i_10] [i_4] [i_12] [12] [i_4] = 18147674855855263024;
                                arr_39 [i_3] [i_3] [i_4] [20] [1] [20] = 463694485;
                                var_19 = (arr_34 [i_4] [i_4] [i_10] [i_10] [i_10]);
                            }
                        }
                    }

                    for (int i_13 = 0; i_13 < 21;i_13 += 1) /* same iter space */
                    {
                        var_20 ^= var_2;
                        arr_43 [i_3] [i_4] [i_13] [i_13] = (((var_9 ? var_4 : var_1)));
                        var_21 = (min(var_21, -8041041416790843597));
                    }
                    for (int i_14 = 0; i_14 < 21;i_14 += 1) /* same iter space */
                    {
                        arr_47 [i_3] [i_3] [i_4] [i_3] = var_0;
                        var_22 = (min(var_22, (((var_0 ^ (arr_3 [i_3]))))));
                    }
                }
                for (int i_15 = 0; i_15 < 21;i_15 += 1) /* same iter space */
                {
                    var_23 = (min(var_23, 144115050636902400));
                    var_24 &= (((~17) ? var_7 : (((var_5 ? var_8 : (arr_30 [i_3] [i_3] [i_3] [i_3]))))));
                }
            }
        }
    }

    for (int i_16 = 0; i_16 < 25;i_16 += 1)
    {
        var_25 ^= (arr_5 [i_16] [i_16]);
        arr_56 [i_16] = ((!(((-96 + 0) <= 1))));
    }
    /* vectorizable */
    for (int i_17 = 0; i_17 < 21;i_17 += 1)
    {
        var_26 = (((~var_9) || (arr_51 [i_17] [i_17] [i_17] [i_17])));
        arr_59 [4] [i_17] = (arr_1 [i_17]);
        arr_60 [i_17] = (arr_21 [i_17] [i_17] [i_17] [i_17] [i_17]);
    }
    var_27 = var_6;
    #pragma endscop
}

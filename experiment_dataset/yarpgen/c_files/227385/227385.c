/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227385
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    var_13 += max((-534954684 + var_3), (65 == 32460));
                    var_14 = ((-((min(var_10, (arr_4 [i_0] [7] [i_2]))))));
                }
            }
        }
        var_15 *= (arr_3 [i_0]);
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 9;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_16 = ((((max((((arr_13 [i_0] [i_0] [i_0] [i_0]) ? var_8 : (arr_16 [i_3] [i_3] [i_3] [i_3] [i_3]))), (arr_3 [i_4])))) ? (((arr_16 [i_4 + 1] [i_4 + 1] [i_6 + 1] [0] [1]) | (arr_6 [i_4 - 1] [10] [i_6 - 3] [10]))) : ((var_12 ? (((arr_12 [i_6] [10] [i_0] [i_3] [i_0]) ? var_1 : 2147450880)) : var_4))));
                                var_17 = (min(var_17, ((min(-4, ((-13395 ? (((max(5, 34)))) : ((2994496566 ? var_3 : -11)))))))));
                                var_18 = (arr_0 [8]);
                                var_19 = (min(var_19, 2032689337));
                                var_20 = (min(var_20, 4773940003405845065));
                            }
                        }
                    }
                    var_21 ^= (((((-2147450868 ? -75 : 2032689337))) ? ((((max(-4485642445751152000, var_2))) ? var_2 : -var_12)) : (arr_15 [4] [4] [i_4] [i_3] [7])));
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
    {
        arr_19 [i_7] [i_7] = ((((((arr_2 [i_7]) ^ (arr_6 [i_7] [i_7] [i_7] [i_7])))) ? (1 >= -2032689352) : (((arr_7 [i_7] [i_7]) << (((arr_7 [i_7] [i_7]) - 64))))));
        var_22 = (min(var_22, (((1804832797 >> ((((((2032689342 && (arr_18 [i_7]))) ? (arr_18 [i_7]) : var_8)) + 16891)))))));
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 9;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 10;i_9 += 1)
            {
                {
                    arr_26 [1] [i_8] [1] = (max(-29, (2147450887 ^ 10)));
                    var_23 = (arr_12 [i_9] [i_9] [i_8] [i_7] [4]);
                    var_24 &= ((var_5 <= (min(var_12, (64613 || 28748)))));
                    var_25 = ((-2032689357 ? (((min(var_8, (arr_6 [5] [i_8] [i_9] [i_9]))))) : (min(var_0, var_7))));

                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        var_26 &= ((+(min((arr_14 [i_7] [i_7]), (arr_17 [i_9 + 1])))));
                        var_27 = (arr_16 [i_7] [i_8 + 1] [i_9] [i_9] [i_10]);
                        var_28 -= (((((~326119289) != ((57847 ? -2147450861 : 4349004687599928754)))) ? var_1 : ((((var_11 ? var_3 : (arr_20 [i_7]))) | var_11))));
                    }
                }
            }
        }
        var_29 += (var_8 && var_11);
    }

    /* vectorizable */
    for (int i_11 = 0; i_11 < 11;i_11 += 1)
    {
        /* LoopNest 2 */
        for (int i_12 = 4; i_12 < 10;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 8;i_13 += 1)
            {
                {
                    var_30 = (((var_2 + -1) ? (((var_5 != (arr_23 [i_11] [i_12] [3])))) : (arr_0 [4])));
                    var_31 = (max(var_31, ((((arr_4 [i_12] [i_12 - 4] [i_12 - 2]) ? (((var_9 + 2147483647) >> var_2)) : (var_10 && var_5))))));
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 11;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 11;i_15 += 1)
                        {
                            {
                                var_32 = (min(var_32, (((+((var_11 ? (arr_7 [i_14] [i_13]) : var_8)))))));
                                arr_43 [i_15] = (!var_9);
                                var_33 = (arr_42 [i_11] [i_12 - 4] [i_12] [7] [i_14] [8]);
                                var_34 = (arr_20 [i_15]);
                            }
                        }
                    }
                }
            }
        }

        for (int i_16 = 0; i_16 < 11;i_16 += 1)
        {
            var_35 = var_1;
            arr_47 [1] [i_16] = (arr_15 [3] [2] [i_16] [i_16] [i_16]);
        }
    }
    #pragma endscop
}

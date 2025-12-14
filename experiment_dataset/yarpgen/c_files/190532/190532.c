/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190532
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_9 ? var_5 : (((var_10 | ((-25906 ? 0 : var_0)))))));

    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 7;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        var_13 = (arr_6 [i_0]);
                        var_14 = (max((arr_1 [i_3] [i_2 + 1]), (!var_9)));

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            var_15 += -25914;
                            var_16 = ((((((arr_1 [i_2] [i_3]) >= var_3))) >> (((~-25906) - 25903))));
                        }
                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            var_17 = var_7;
                            var_18 = (arr_9 [i_0 + 1] [i_0 - 1] [i_0 + 2] [i_0 + 1]);
                        }
                        arr_12 [i_3] [i_0] [i_3] [i_3] = ((((!(((var_11 ? var_10 : -110))))) ? -var_8 : ((~(-25909 && 8621412809850770741)))));
                        var_19 = (min((((!(arr_1 [i_0] [i_2 - 3])))), (-4 / var_9)));
                    }
                }
            }
        }
        var_20 *= (~var_8);
        var_21 += (~-25906);
        var_22 ^= (((arr_5 [i_0] [i_0]) * ((((381418094 ? -4 : 1197508059165502140)) & (var_7 > var_2)))));
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 10;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 9;i_9 += 1)
                        {
                            {
                                var_23 = var_0;
                                arr_23 [i_0 + 4] [i_6] [i_0] [i_8] [i_9] = -5558131798543836614;
                                var_24 -= ((max(-2458342878534951185, 9825331263858780854)) / 123);
                                arr_24 [i_9 + 2] [i_6] [i_0] [i_8] [i_9] [i_8] [i_7] = var_3;
                            }
                        }
                    }
                    var_25 = (arr_20 [i_6] [i_0] [i_6] [i_6] [i_6] [i_6]);
                    arr_25 [i_0] [i_0] [6] |= 11;
                }
            }
        }
    }
    for (int i_10 = 1; i_10 < 17;i_10 += 1)
    {
        var_26 = -76;
        var_27 = var_3;

        for (int i_11 = 2; i_11 < 18;i_11 += 1)
        {
            var_28 = (max(var_28, ((((max(445943452, (arr_27 [i_10 + 2]))) - ((-25906 ? 109 : 83)))))));
            var_29 = (((arr_28 [i_11 + 1]) ? (arr_27 [1]) : var_11));
            /* LoopNest 3 */
            for (int i_12 = 2; i_12 < 18;i_12 += 1)
            {
                for (int i_13 = 1; i_13 < 18;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 19;i_14 += 1)
                    {
                        {
                            arr_39 [i_10] [i_12] [i_10] = (arr_33 [i_10] [i_10] [2] [i_10]);
                            var_30 = ((~(arr_29 [i_11 + 1] [i_10 - 1] [i_10])));
                        }
                    }
                }
            }
        }
        for (int i_15 = 0; i_15 < 19;i_15 += 1)
        {
            var_31 = ((-((((arr_32 [i_10] [i_10] [i_10 + 2]) && var_1)))));
            var_32 = ((127 >> (((~1) + 8))));
            var_33 = (~-26076);
        }
        var_34 = (((max((var_2 ^ var_5), (arr_29 [i_10 + 1] [i_10 - 1] [i_10]))) | var_9));
    }
    for (int i_16 = 3; i_16 < 20;i_16 += 1)
    {
        var_35 = var_8;
        arr_44 [i_16] = var_6;
        var_36 = ((var_7 >> (((arr_43 [i_16]) - 2298851446))));
    }
    var_37 = (max((((0 ? var_2 : var_1))), var_9));
    #pragma endscop
}

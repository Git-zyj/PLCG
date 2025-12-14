/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44812
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        var_11 -= 25377;
        arr_3 [i_0 + 3] = (arr_1 [i_0]);
    }
    for (int i_1 = 2; i_1 < 19;i_1 += 1)
    {
        var_12 = var_8;

        /* vectorizable */
        for (int i_2 = 2; i_2 < 20;i_2 += 1)
        {
            arr_8 [i_1] = var_4;
            var_13 = ((var_10 ? (arr_4 [i_2 + 1] [i_2 + 1]) : (arr_4 [i_2 + 3] [i_2 + 2])));
            arr_9 [1] [i_2] = var_8;
        }
        arr_10 [i_1 + 2] = (max((max((arr_7 [i_1 + 3]), 25377)), (arr_4 [i_1 - 1] [i_1])));
        var_14 = (min(var_14, (arr_5 [i_1 + 2])));
        arr_11 [i_1 + 1] = var_5;
    }

    /* vectorizable */
    for (int i_3 = 4; i_3 < 21;i_3 += 1)
    {
        arr_15 [15] = (arr_12 [i_3 + 2] [i_3 - 3]);
        arr_16 [i_3] = ((((var_8 ? var_1 : (-32767 - 1))) <= (arr_14 [i_3 - 2])));
    }
    for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
    {
        arr_20 [i_4] [i_4] = -1143597497;
        arr_21 [i_4] = (--25361);
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 4; i_7 < 20;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            {
                                var_15 ^= var_10;
                                var_16 = ((~(arr_12 [i_7] [i_7 + 1])));
                                var_17 = (max(var_17, ((min(((~(arr_33 [i_7 - 3] [i_7 - 4] [i_7 - 4] [i_7 - 2] [4]))), (!-11964))))));
                            }
                        }
                    }

                    for (int i_9 = 0; i_9 < 24;i_9 += 1)
                    {
                        var_18 -= (((((1654 ? -25377 : 41193))) ? (((((arr_13 [i_5]) && 25377)))) : ((var_9 ? 1099511627264 : (arr_32 [i_4] [i_5] [i_6] [1] [i_6])))));
                        arr_37 [i_6] [i_4] = (((+-1654) || ((((!-21043) ? (min(90, 9223372036854775807)) : (((arr_13 [i_4]) ? var_2 : (arr_26 [i_4] [i_5] [i_5] [1]))))))));
                        var_19 = (((((arr_23 [0] [i_4] [i_6]) ? 74 : (arr_24 [i_4] [21] [i_6])))) || (!9223372036854775807));
                        arr_38 [i_4] [i_4] [i_6] [i_9] = ((11 ? ((((((arr_30 [i_5] [i_5]) ? (arr_34 [i_9] [i_9] [i_9] [i_9]) : (arr_19 [i_6])))) ? var_3 : ((-1997598430570018013 ? 9223372036854775807 : 17)))) : (arr_36 [i_5] [i_9])));
                    }
                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        var_20 = (((-32767 - 1) ? 1 : 4355));
                        arr_42 [i_4] [i_5] [i_6] [i_10] = var_0;
                    }
                    arr_43 [i_6] = ((((((~10270823217927864991) ^ ((min((arr_19 [i_5]), var_7)))))) ? (arr_12 [i_4] [i_5]) : var_7));
                }
            }
        }
        arr_44 [i_4] = (arr_12 [i_4] [i_4]);
        var_21 = (min(var_2, (arr_28 [i_4] [i_4] [i_4])));
    }
    for (int i_11 = 0; i_11 < 24;i_11 += 1) /* same iter space */
    {
        var_22 ^= (((((58796 ? (arr_33 [6] [6] [6] [i_11] [i_11]) : (arr_19 [i_11])))) ? ((1 ? var_10 : (arr_19 [i_11]))) : (((var_10 ? (arr_40 [i_11] [i_11] [i_11] [i_11]) : (arr_33 [i_11] [i_11] [i_11] [i_11] [i_11]))))));
        arr_47 [i_11] [3] = ((-(((arr_46 [i_11] [i_11]) / var_6))));
    }
    #pragma endscop
}

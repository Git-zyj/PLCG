/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42312
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        var_14 = var_11;
        var_15 ^= ((~(arr_1 [i_0 - 3])));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 12;i_1 += 1)
    {
        arr_7 [i_1] &= ((~(arr_3 [i_1 - 2])));
        var_16 = (((arr_5 [i_1 - 2]) - -var_4));

        for (int i_2 = 2; i_2 < 13;i_2 += 1)
        {
            var_17 = (((((var_0 ? (arr_8 [i_1] [i_2 - 1] [1]) : (arr_6 [8])))) ? var_12 : var_8));
            var_18 |= ((65531 != (arr_2 [i_1])));
        }
        for (int i_3 = 1; i_3 < 10;i_3 += 1)
        {
            /* LoopNest 3 */
            for (int i_4 = 2; i_4 < 13;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    for (int i_6 = 4; i_6 < 13;i_6 += 1)
                    {
                        {
                            arr_20 [i_6] [i_6] [i_3] |= (arr_3 [i_1]);
                            var_19 *= ((-(arr_11 [8] [i_4 + 1] [i_4 - 1])));
                            var_20 ^= (arr_4 [i_3 + 3]);
                            var_21 ^= (~var_9);
                        }
                    }
                }
            }
            var_22 = (arr_0 [13]);
            arr_21 [i_3] [i_3] = var_4;
            var_23 *= (((arr_19 [i_1] [9] [9]) % (arr_19 [i_1 + 1] [i_1 - 1] [i_1 + 1])));
            arr_22 [i_3] = ((var_2 % ((var_4 % (arr_2 [i_3])))));
        }
    }
    /* vectorizable */
    for (int i_7 = 1; i_7 < 23;i_7 += 1)
    {

        for (int i_8 = 2; i_8 < 21;i_8 += 1)
        {
            arr_27 [i_7] = ((var_6 ? ((((arr_24 [1] [i_8]) ? 1 : (arr_23 [i_8])))) : (((arr_23 [i_7]) - var_8))));
            arr_28 [i_7] = (arr_24 [i_7 - 1] [i_7 + 1]);
            var_24 = (~0);
            var_25 ^= (((arr_26 [i_8] [i_8 + 1]) % (((~(arr_23 [i_7 - 1]))))));
        }
        for (int i_9 = 0; i_9 < 24;i_9 += 1) /* same iter space */
        {
            arr_32 [i_7] = arr_30 [i_7];
            arr_33 [i_7] [i_9] = (((arr_26 [i_7] [i_7]) != (arr_29 [i_7])));
            var_26 = 68;
        }
        for (int i_10 = 0; i_10 < 24;i_10 += 1) /* same iter space */
        {
            var_27 -= (arr_35 [i_7] [i_7 + 1] [i_7]);
            arr_37 [i_10] &= ((0 ? (arr_30 [i_10]) : 1));
            var_28 *= (((arr_24 [i_7 - 1] [i_10]) ? (arr_30 [i_10]) : -68));
            var_29 = (((-(arr_29 [i_10]))));
        }
        arr_38 [i_7] [i_7] = ((arr_25 [i_7 - 1] [i_7 + 1] [i_7 - 1]) ? var_6 : 1);
    }
    var_30 *= min((((((10 ? var_5 : var_3))) ? var_9 : (max(1, var_10)))), var_6);
    var_31 ^= var_11;
    var_32 = var_5;
    #pragma endscop
}

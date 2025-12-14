/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206650
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            arr_5 [9] = ((-(((((arr_0 [i_0]) + 2147483647)) << (var_19 - 56278135459047953)))));
            arr_6 [i_0] = (arr_4 [i_0]);
            arr_7 [i_0 - 2] [i_1] [i_1] = 3304721924079080463;
        }
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            var_20 += ((var_19 ? (arr_9 [i_0 + 1] [i_0 + 1] [i_0]) : (((arr_10 [1] [1]) >> (((arr_3 [9]) - 8781))))));

            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        {
                            arr_18 [i_2] [i_2] [i_3] [i_0] [i_0] [i_3] [i_0] = (arr_14 [i_0] [i_2] [i_0] [2] [i_5]);
                            var_21 = (((arr_0 [i_0 - 2]) <= (arr_14 [i_0 + 3] [i_0 + 3] [i_0 + 3] [7] [i_5])));
                            var_22 ^= ((-(arr_3 [i_0 + 3])));
                            var_23 = (min(var_23, ((((arr_11 [i_2] [i_2]) ? -1 : (arr_14 [i_0] [i_2] [i_0] [i_4] [i_5]))))));
                        }
                    }
                }
                arr_19 [i_2] [i_2] [i_3] = ((~(arr_10 [i_0] [i_2])));
            }
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                var_24 -= (((arr_17 [12] [i_6] [12] [i_2] [i_2] [i_2] [i_6]) >> (((((arr_8 [i_0]) ? var_5 : (arr_1 [i_0]))) - 3583290235))));

                for (int i_7 = 2; i_7 < 21;i_7 += 1)
                {
                    arr_25 [i_6] = ((((var_14 ? (arr_4 [21]) : (arr_17 [2] [i_2] [i_6] [1] [i_7] [i_6] [i_6]))) << ((((var_12 ? (arr_1 [i_0]) : 4194048)) - 229))));
                    arr_26 [i_2] [i_6] [i_2] [i_7 + 3] = (((arr_13 [i_7 + 2] [i_2] [i_7 + 2] [i_7 + 2]) ? var_19 : (arr_13 [i_7 + 2] [i_6] [i_6] [i_6])));
                }
                arr_27 [i_0] [i_6] [i_6] = (((arr_12 [i_0] [i_0 - 2] [i_6] [i_2]) | (arr_12 [8] [i_0 - 2] [i_6] [i_6])));
            }
            var_25 &= (((arr_13 [i_0] [24] [i_2] [i_0 - 1]) * -11));
            var_26 ^= (((arr_15 [i_2] [i_2] [i_2] [21] [1] [i_2]) | (arr_15 [i_0] [i_2] [i_2] [i_0 + 2] [i_2] [23])));
        }
        for (int i_8 = 0; i_8 < 25;i_8 += 1)
        {
            var_27 ^= (((arr_29 [i_0 + 3] [i_0 + 3] [i_8]) ? (arr_29 [i_0 + 2] [i_8] [i_8]) : (arr_29 [i_0 - 2] [i_8] [i_8])));
            arr_32 [i_0] [i_8] [i_8] = (arr_14 [i_0] [i_0] [i_0] [i_0 + 2] [i_0]);
            var_28 = (max(var_28, (((((((arr_14 [i_0] [i_8] [9] [9] [i_0]) ? var_7 : -366))) ? ((((arr_3 [i_8]) || 109))) : var_7)))));
            var_29 += var_17;
            arr_33 [i_0 + 3] [i_8] = ((1 ? (((arr_22 [i_8] [i_8]) ? (arr_21 [i_0 - 1] [i_8]) : 32762)) : var_17));
        }
        var_30 *= ((((((arr_31 [i_0 + 2] [1] [i_0]) ? (arr_8 [i_0]) : 65535))) ? ((27088 ? 1 : (arr_2 [i_0] [i_0]))) : (arr_3 [i_0])));
        arr_34 [4] = -var_4;
        var_31 = -69;
    }
    var_32 = (var_12 / var_14);
    var_33 = (((((-var_17 ? ((min(var_14, var_1))) : var_17))) ^ ((var_18 ? ((var_12 ? var_9 : var_2)) : var_8))));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52607
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, 1));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_14 = ((((1 ? var_2 : var_3)) / (arr_1 [i_0] [i_0])));
        arr_4 [2] [i_0] |= ((8 ? ((0 & (arr_3 [i_0]))) : (((arr_2 [0]) ? var_2 : var_3))));
        var_15 -= ((~183) >= 55);
        var_16 = (min(var_16, ((((-32767 - 1) / 235)))));

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_17 -= ((-9412 ? 1 : 16384));
            var_18 ^= ((-((1 ? (arr_6 [i_1] [i_1] [i_0]) : (arr_0 [i_1])))));
            arr_8 [i_0] [i_1] = (((!-32752) >> (5500 - 5481)));
        }
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        var_19 -= (max(((~(arr_7 [i_2] [i_2] [i_2]))), (((((arr_10 [i_2]) / var_8)) / 32767))));
        arr_12 [i_2] = (((((0 ? ((-26730 ? var_9 : -3170)) : -26624))) ? ((min(102, -3159))) : ((((~32762) == ((1 ? (arr_2 [20]) : (arr_1 [1] [8]))))))));
    }
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 1; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                for (int i_6 = 3; i_6 < 18;i_6 += 1)
                {
                    {
                        arr_21 [i_3] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1] = max(1, (max(var_5, var_3)));
                        var_20 -= (min((32767 + -1), (min(((-19362 ? (arr_15 [i_5] [4]) : -8137)), var_0))));
                        arr_22 [i_4 - 1] [i_5] [i_3] = ((((((~(arr_15 [i_3] [i_3]))) + 2147483647)) >> (((((~134) ? -18227 : var_8)) + 18254))));

                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            arr_27 [i_3] [i_4] [i_4] [i_5] [i_5] [i_7] &= (max((((arr_24 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [i_4 + 2]) >> (((arr_24 [i_4] [i_4] [i_4] [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 - 1]) - 54)))), (-16385 >= -15793)));
                            var_21 = (((((arr_23 [i_3] [i_3]) << 1)) >> (9411 - 9402)));
                        }
                        for (int i_8 = 0; i_8 < 19;i_8 += 1)
                        {
                            var_22 += (1 >= -26740);
                            var_23 = (max(var_23, (((((min(1, 2))))))));
                        }

                        for (int i_9 = 0; i_9 < 19;i_9 += 1)
                        {
                            var_24 = (min(-2960, (((((~(-32767 - 1)))) ? ((var_0 ? -32745 : 168)) : var_5))));
                            var_25 = arr_1 [i_3] [i_3];
                            arr_32 [i_3] [i_3] [i_3] [i_3] [i_3] [1] = 107;
                        }
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 19;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 19;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_13 = 0; i_13 < 19;i_13 += 1)
                        {
                            var_26 = (!(arr_7 [i_3] [i_10] [i_10]));
                            var_27 ^= (1 << 1);
                        }
                        var_28 ^= 1;
                    }
                }
            }
        }
        var_29 = var_9;
    }
    var_30 = ((var_2 ? ((((108 ? 19357 : var_7)) ^ ((min(32764, var_0))))) : -23687));
    #pragma endscop
}

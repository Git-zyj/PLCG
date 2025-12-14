/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219218
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((!var_10) && (var_1 && 0))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_21 = (-(max(((((arr_4 [i_0] [1] [i_1]) != var_19))), (1 ^ var_18))));
            arr_5 [i_0] = (((((((1 >> 1) ^ ((~(arr_3 [i_0] [i_1] [i_0]))))) + 2147483647)) >> (var_4 + 2080136024199958333)));
            var_22 = (((((max(var_13, var_16)) + (max((arr_1 [i_0]), 18446744073709551615)))) | (!1)));
        }
        for (int i_2 = 3; i_2 < 8;i_2 += 1)
        {
            var_23 = ((((((1 << (111 - 98))) & ((var_0 ? var_10 : (arr_8 [i_0] [i_2 - 2]))))) & (((((max(var_4, 1))) && (!1))))));
            var_24 = ((((((max((arr_6 [i_2]), var_2))) ? (min(var_13, (arr_6 [11]))) : ((min(1, (arr_2 [1])))))) < ((((min(var_9, var_9)) ? ((((arr_4 [i_0] [i_0] [5]) == 1))) : ((127 ? (arr_3 [0] [0] [5]) : 214)))))));
            var_25 = ((-((((min((arr_2 [i_0]), 9223372036854775807)) != ((var_19 % (arr_1 [i_0]))))))));
        }
        var_26 = (min(var_26, (((((max(((var_19 / (arr_2 [i_0]))), ((((arr_8 [i_0] [i_0]) / (arr_8 [7] [i_0]))))))) ? (((-(7 % var_6)))) : ((1 * (109 / var_4))))))));
        var_27 = (max(1, 6400649788280292880));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        arr_13 [0] |= (~(~var_6));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 0;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                {
                    var_28 = ((((max((arr_16 [i_5] [i_4 + 1] [21] [i_4 + 1]), (((~(arr_14 [i_3] [i_3] [i_5]))))))) && ((max(((min(var_7, 147))), (((arr_16 [i_3] [i_5] [i_3] [i_3]) - var_4)))))));

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_29 = ((58 % ((~(arr_10 [i_3])))));
                        var_30 *= (((arr_10 [i_4 + 1]) - (var_12 & var_15)));
                    }
                }
            }
        }
        var_31 = (min(var_31, (((var_11 / var_17) & ((min(((127 | (arr_15 [i_3]))), var_8)))))));
        var_32 = (-218 / 198);
        var_33 ^= ((((((~var_10) ? (min(var_17, (arr_15 [i_3]))) : (((min(var_8, 1))))))) && ((max(var_2, 1)))));
    }
    for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
    {

        for (int i_8 = 3; i_8 < 23;i_8 += 1)
        {
            var_34 ^= ((((((max(var_1, 1))) ? ((var_10 ? 1 : var_11)) : -255)) >= (((((49 & (arr_27 [i_7] [i_8]))) - (var_8 >= var_5))))));
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 24;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 21;i_10 += 1)
                {
                    {
                        var_35 ^= (((((~(arr_32 [23] [19] [19] [i_10] [i_10])))) ? ((var_14 % (arr_26 [i_10]))) : (max(var_9, var_5))));
                        arr_33 [4] [20] [i_9] [4] [4] = (1 <= 18446744073709551615);
                        var_36 = (max(((max(206, (var_3 * 2047)))), (((max(var_10, -3693549518263863236)) ^ (arr_30 [i_7])))));
                    }
                }
            }
        }
        arr_34 [i_7] = (((((((max(1, var_13))) ? (~1) : (~122)))) ? (((~(var_12 - 206)))) : (((((max((arr_30 [i_7]), (arr_27 [i_7] [i_7]))))) / -var_4))));
    }
    for (int i_11 = 0; i_11 < 24;i_11 += 1) /* same iter space */
    {
        arr_39 [i_11] [i_11] = (((((((16 >= 799841954) != ((0 >> (((arr_36 [i_11]) + 4603)))))))) != (((((max((arr_21 [i_11] [i_11]), var_8)))) ^ ((var_14 | (arr_37 [i_11])))))));
        var_37 = ((max(var_18, ((min(21298, (arr_30 [22])))))));
        var_38 = (max(var_11, (((!(arr_37 [i_11]))))));
    }
    #pragma endscop
}

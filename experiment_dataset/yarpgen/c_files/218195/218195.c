/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218195
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_9;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [0] |= (~(((var_1 ? 28672 : var_5))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_19 ^= ((arr_1 [i_0]) ? ((((!(arr_1 [i_0]))))) : ((60 ? (arr_2 [i_1] [i_0]) : var_3)));

            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                arr_9 [i_0] [i_0] [i_0] = (((arr_1 [i_1]) ? 3066598823 : (arr_8 [i_0] [i_1] [i_2] [i_0])));
                arr_10 [i_0] [i_1] [i_2] [i_2] = (((arr_1 [i_1]) == (arr_1 [i_1])));
            }
            for (int i_3 = 3; i_3 < 20;i_3 += 1)
            {
                arr_14 [i_0] [i_1] [i_3] = (((arr_12 [i_0] [i_1]) ? (arr_12 [15] [i_3]) : (arr_6 [i_0] [i_0] [i_0])));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        {
                            var_20 = 2050711713;
                            arr_20 [8] [i_1] [i_3] [i_4] [i_3] = (((arr_19 [i_0] [i_1]) ? ((0 ? 60 : 1307051002808556165)) : (((var_10 ? 13369 : 2314577658)))));
                        }
                    }
                }
                var_21 -= (arr_8 [i_0] [i_0] [i_3 - 2] [i_0]);
            }
        }
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            arr_25 [i_6] [i_6] [i_6] = ((((max((arr_19 [i_6] [i_0]), (~-11227)))) ? -3443817991 : (min((((-276698071 ? 1980389637 : 4294967272))), (~8973707874962852480)))));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    {
                        arr_32 [i_0] [2] [i_0] [i_8] = (((((arr_13 [i_0] [i_6] [i_0] [21]) ? (arr_13 [i_6] [i_6] [i_7] [i_7]) : 52151)) ^ (-2147483647 - 1)));
                        arr_33 [i_6] [i_6] [i_8] [i_8] = (((((0 ? (arr_4 [i_6] [i_6]) : 11226))) == (((((51452 ? (arr_6 [i_0] [i_7] [i_8]) : 2583199660806656196))) ? (arr_15 [i_8] [i_7] [i_6] [i_0]) : (!-1108188273)))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 11;i_9 += 1)
    {
        arr_36 [i_9] [i_9] = (arr_16 [i_9] [10] [i_9] [i_9]);
        var_22 = (((((!(-2147483647 - 1)))) >> (-var_8 + 16)));
        var_23 = ((((((arr_5 [i_9] [i_9]) ? var_4 : (arr_34 [i_9])))) * (arr_15 [i_9] [i_9] [i_9] [i_9])));
        arr_37 [i_9] [i_9] = ((18 != (!0)));
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 15;i_10 += 1)
    {
        arr_42 [i_10] &= ((2090846819253149929 ? (arr_26 [i_10] [i_10] [i_10]) : (arr_26 [i_10] [i_10] [i_10])));
        arr_43 [8] [i_10] = ((16384 ? 72958138 : ((~(arr_12 [i_10] [i_10])))));
        var_24 += ((-(arr_26 [i_10] [i_10] [i_10])));
        arr_44 [i_10] [i_10] = (((arr_0 [i_10] [i_10]) ? ((((!(arr_5 [i_10] [i_10]))))) : -var_1));
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 15;i_11 += 1)
        {
            for (int i_12 = 2; i_12 < 13;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 15;i_13 += 1)
                {
                    {
                        var_25 = (min(var_25, (((27644593 ? (arr_19 [i_10] [i_11]) : (arr_19 [6] [i_11]))))));
                        var_26 = (arr_6 [14] [14] [i_12]);
                    }
                }
            }
        }
    }
    #pragma endscop
}

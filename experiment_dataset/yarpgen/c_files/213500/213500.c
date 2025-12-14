/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213500
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_10 = 0;
        var_11 |= (!var_3);
        var_12 = (~3099695410);
    }
    var_13 *= var_3;

    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_14 |= var_8;
            arr_8 [i_1] [i_1] [i_2] = ((((arr_4 [i_1] [i_2]) ? 3099695388 : (arr_4 [i_1] [i_2]))));
        }
        for (int i_3 = 1; i_3 < 12;i_3 += 1)
        {
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        {
                            arr_19 [i_6] [i_5] [9] [i_1] = var_8;
                            var_15 = var_1;
                        }
                    }
                }
            }
            var_16 = (((1841188652 == (arr_3 [1]))));
            arr_20 [i_1] [i_1] = (((~117) * ((((((arr_17 [8] [i_1] [9] [i_3] [i_3] [i_3] [i_3]) ? var_3 : (arr_14 [i_1] [i_1] [i_1] [i_1] [9] [i_3]))))))));
        }
        arr_21 [8] = ((((-((18446744073709551615 * (arr_13 [i_1] [i_1] [i_1] [i_1] [i_1]))))) >= ((((!(arr_13 [i_1] [i_1] [i_1] [i_1] [i_1])))))));
        arr_22 [i_1] [i_1] = ((!((min((arr_2 [i_1]), -6251758675793805855)))));
    }
    for (int i_7 = 0; i_7 < 19;i_7 += 1)
    {
        var_17 = 2921785802;
        var_18 = -118;
        var_19 = (max(-1, 123));
    }
    for (int i_8 = 0; i_8 < 13;i_8 += 1)
    {
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 13;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 13;i_10 += 1)
            {
                {
                    var_20 ^= (~((~(arr_24 [i_8]))));
                    var_21 = ((var_7 / ((-var_7 * (arr_10 [12])))));
                }
            }
        }
        var_22 = (min((arr_28 [i_8] [i_8]), ((var_9 ? (arr_28 [i_8] [i_8]) : (arr_28 [i_8] [i_8])))));
    }
    for (int i_11 = 0; i_11 < 21;i_11 += 1)
    {
        var_23 = 20350;
        var_24 = var_8;
    }
    #pragma endscop
}

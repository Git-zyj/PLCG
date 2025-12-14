/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28280
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= min((((~((var_15 ? -1165684559 : var_15))))), (min((var_4 ^ var_4), var_5)));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = var_3;
        arr_5 [i_0] = ((1 - (var_3 == 1)));

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_17 -= (var_3 ^ (arr_6 [i_0 + 2] [i_1]));
            arr_8 [i_0] = (((((((arr_3 [i_0]) + 2147483647)) >> (var_7 - 50919))) - var_3));

            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                var_18 -= var_4;
                arr_13 [i_0] = ((((-1905302531 ? (arr_9 [i_2]) : 32767)) < (var_10 > var_7)));
            }
            var_19 -= (var_11 || 3334182993);
        }
    }
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {

        /* vectorizable */
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            var_20 = (min(var_20, ((((arr_15 [i_3] [i_4]) * 1955714146303345406)))));
            var_21 ^= ((var_11 >> ((((~(arr_3 [i_4]))) - 38))));
            arr_19 [i_3] = var_13;
            var_22 = (min(var_22, ((((((var_6 ? var_4 : var_0))) ? (((arr_9 [i_3]) >> (var_9 + 64))) : 1)))));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_23 -= ((32767 ? var_12 : (-31557 * 32)));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {
                        arr_26 [8] [i_3] [i_6] [i_7] = ((147 / ((9979 ? (arr_6 [i_5] [i_3]) : 2060862624))));

                        for (int i_8 = 0; i_8 < 21;i_8 += 1)
                        {
                            var_24 = (min(var_24, 302315007));
                            var_25 ^= (var_3 > var_7);
                        }
                    }
                }
            }
        }
        var_26 = (arr_21 [i_3] [i_3] [i_3]);

        /* vectorizable */
        for (int i_9 = 0; i_9 < 21;i_9 += 1)
        {
            var_27 = (max(var_27, (((var_6 ? var_1 : var_9)))));
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 21;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 21;i_12 += 1)
                    {
                        {
                            arr_43 [6] [i_10] [i_12] [i_12] [1] [i_3] &= (((var_6 || 32767) | var_0));
                            arr_44 [1] [20] [1] [i_10] [i_3] [1] = (!var_4);
                        }
                    }
                }
            }
        }
        var_28 ^= (((var_6 && -var_2) > (var_10 & var_10)));
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 15;i_13 += 1)
    {
        var_29 &= 48;
        var_30 = ((~(arr_36 [12] [i_13] [i_13] [i_13])));
    }
    var_31 = var_7;
    #pragma endscop
}

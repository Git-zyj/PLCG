/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226177
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_14 = (((arr_2 [7] [i_0]) ? (arr_0 [i_0]) : (((((-9223372036854775807 - 1) < 1335053395086166702))))));
        var_15 = (((arr_2 [i_0] [i_0]) ? (arr_1 [i_0]) : 4294967295));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_16 = 23;
        var_17 = (max(255, (((!(((var_7 << (((-1870436032 + 1870436082) - 47))))))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                {
                    var_18 = var_7;
                    var_19 = (max(var_19, ((((min(var_13, (arr_3 [10] [i_2]))) ^ (225 - 588739253))))));
                }
            }
        }
        var_20 |= (var_5 >> ((((((~(arr_8 [i_1] [i_1] [i_1] [i_1])))) || ((((arr_3 [i_1] [i_1]) * var_2)))))));
    }
    for (int i_4 = 1; i_4 < 18;i_4 += 1)
    {
        var_21 = ((1870436031 ? (((arr_10 [i_4 + 1]) ? 4294967291 : (arr_10 [i_4 - 1]))) : var_12));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 19;i_6 += 1)
            {
                {
                    var_22 = ((~(arr_13 [i_4 - 1] [i_5])));

                    /* vectorizable */
                    for (int i_7 = 1; i_7 < 1;i_7 += 1) /* same iter space */
                    {
                        var_23 = (var_10 - var_11);
                        var_24 = var_2;
                    }
                    for (int i_8 = 1; i_8 < 1;i_8 += 1) /* same iter space */
                    {
                        var_25 = (~-1870436019);
                        var_26 = ((1 ? (((max(120, (arr_9 [i_4]))))) : (min((arr_9 [i_8]), 0))));
                    }
                    var_27 = (max(var_27, var_11));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_9 = 3; i_9 < 8;i_9 += 1)
    {
        var_28 = ((arr_19 [i_9]) > var_3);
        var_29 = (arr_4 [i_9]);
    }
    var_30 = var_6;
    var_31 = var_9;
    var_32 = var_4;
    #pragma endscop
}

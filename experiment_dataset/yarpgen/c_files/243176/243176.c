/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243176
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_2;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] &= ((min((arr_2 [i_0] [i_0]), (arr_1 [i_0] [i_0]))));

        for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
        {
            arr_6 [i_0] [i_1] |= 1480001590;

            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                arr_9 [i_0] [i_0] [i_0] = -97;
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        {
                            var_11 |= (((((max(var_5, var_5))) ? (arr_14 [i_0] [i_1] [i_2] [i_1] [12]) : (max(var_5, var_9)))));
                            var_12 = 96;
                            arr_17 [7] [i_1] [1] [3] [i_4] &= 1689275319854914074;
                        }
                    }
                }
                var_13 = (min(var_13, (arr_14 [i_0] [i_0] [i_0] [i_1] [i_2])));
            }
            /* vectorizable */
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                arr_21 [i_0] [i_5] = (arr_2 [i_5] [0]);
                var_14 = ((1689275319854914074 ^ (arr_20 [i_0] [i_1] [i_5] [i_1])));
                var_15 = (((arr_18 [i_0] [i_1]) ? (arr_2 [i_1] [i_5]) : (arr_18 [i_0] [i_1])));
            }
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
        {
            arr_25 [10] [i_6] [10] = (((arr_0 [i_0] [i_6]) ? (arr_22 [i_0] [i_6]) : (arr_0 [i_0] [i_6])));
            arr_26 [i_0] [i_0] [i_6] = (((var_1 >> (((arr_24 [i_0] [i_0]) - 112)))));
            arr_27 [i_0] [i_6] = (arr_5 [i_0] [i_6]);
        }
        var_16 ^= (((arr_11 [i_0] [i_0] [i_0]) << ((((~((var_9 ? var_4 : var_7)))) + 4084427562495681253))));
        arr_28 [i_0] = ((((min(var_5, 421382931)) >= var_8)));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 17;i_7 += 1)
    {
        arr_32 [3] &= (((arr_31 [i_7]) ? (arr_31 [i_7]) : (arr_29 [i_7])));
        arr_33 [i_7] = (((arr_30 [i_7]) ? (arr_29 [i_7]) : (arr_29 [i_7])));
        var_17 |= (arr_29 [i_7]);
    }
    var_18 = var_3;
    var_19 |= var_3;
    #pragma endscop
}

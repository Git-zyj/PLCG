/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205989
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = (((min(((min(var_12, (arr_2 [i_0])))), (arr_1 [i_0]))) - (((((arr_2 [i_0]) != (arr_2 [i_0])))))));
        var_14 ^= var_11;

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_15 = ((+((min((arr_4 [i_0]), (arr_4 [i_0]))))));
            var_16 = (min(var_16, ((((18446744073709551589 ? ((max((arr_5 [i_1] [i_0] [i_0]), -32756))) : ((var_11 ? var_7 : var_6))))))));
        }
        for (int i_2 = 1; i_2 < 18;i_2 += 1)
        {
            arr_10 [3] [i_2] [i_2 - 1] |= (min((max(1, (arr_0 [i_2 - 1] [i_2 - 1]))), (max((arr_0 [i_2 + 1] [i_2 - 1]), 28672))));
            var_17 = 0;
            var_18 = (max((((arr_8 [i_2 + 1]) - (arr_8 [i_2 + 2]))), 29056));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    {
                        arr_15 [i_4] [i_3] [i_4] [i_4] [13] [20] = ((((((var_0 ? var_5 : -9156555517977982712)) ? (!var_10) : ((var_7 ? (arr_12 [i_0] [i_2 + 3] [i_2] [i_4]) : var_13))))));
                        var_19 = (arr_7 [i_4]);
                        var_20 |= ((((var_13 | (!var_6))) / ((max(var_12, (arr_5 [i_2] [i_2] [i_2 + 1]))))));
                        var_21 = ((+((max((arr_0 [i_2] [i_2]), var_0)))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 1;i_5 += 1) /* same iter space */
    {
        var_22 = 17;
        var_23 = (min(var_23, ((((arr_1 [i_5]) << (var_11 - 11092908988045234953))))));
    }
    for (int i_6 = 1; i_6 < 1;i_6 += 1) /* same iter space */
    {
        arr_23 [i_6 - 1] = (min((arr_16 [i_6 - 1] [0]), (!2147483647)));

        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            arr_26 [i_7] = (((var_8 + 9223372036854775807) << (((((max((arr_1 [13]), (arr_24 [i_6 - 1]))) << (arr_2 [i_6 - 1]))) - 3573873768802716193))));
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 15;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    {
                        arr_34 [i_6 - 1] [5] [i_9] = (!64476);
                        var_24 = (max(var_24, ((min((((arr_11 [i_6 - 1]) ? (arr_11 [i_6 - 1]) : 0)), var_4)))));
                        arr_35 [i_6] [i_8] &= ((((max((max(var_10, var_8)), (((var_7 * (arr_18 [i_6]))))))) ? (arr_1 [i_6 - 1]) : (((min((arr_9 [i_9] [i_6 - 1] [i_8]), var_9))))));
                        var_25 = (max(((max((arr_0 [i_6 - 1] [i_6 - 1]), (arr_0 [i_6 - 1] [i_6 - 1])))), (max((((arr_30 [i_9] [i_8] [i_9] [i_7] [i_6]) ? var_0 : (arr_1 [i_6]))), ((max(-1011727595, (arr_19 [i_6]))))))));
                        var_26 = (max(var_26, ((((((1 * (arr_12 [i_6 - 1] [i_6] [13] [i_6 - 1])))) ? ((((((arr_4 [i_9]) << (var_10 - 11813)))) & var_11)) : var_13)))));
                    }
                }
            }
            arr_36 [i_6 - 1] [i_6 - 1] [i_6] = (((max((max(var_4, var_12), 1)))));
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 15;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 15;i_11 += 1)
                {
                    {
                        arr_44 [i_11] [0] [i_6 - 1] = (min((25300377 - var_3), var_8));
                        arr_45 [1] [i_10] [i_7] [10] = (arr_12 [i_6 - 1] [i_6 - 1] [2] [19]);
                    }
                }
            }
            var_27 = ((max((min(var_8, var_10)), (!294167754))) - ((((arr_5 [i_6 - 1] [12] [i_6 - 1]) ? (arr_21 [i_6 - 1]) : 32751))));
        }
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 15;i_12 += 1)
        {
            for (int i_13 = 3; i_13 < 14;i_13 += 1)
            {
                {
                    arr_50 [i_12] [i_12] [i_13] = (max(((((arr_12 [i_13 - 3] [i_6 - 1] [i_6 - 1] [i_6 - 1]) ? (arr_30 [i_13 - 3] [i_13 - 3] [i_13] [i_6 - 1] [i_6 - 1]) : 247))), (13882972644693187471 + var_1)));
                    arr_51 [i_6] [i_6] [i_13] [10] = ((((((max((arr_4 [i_6]), (arr_24 [i_12])))) << (arr_41 [i_13] [i_13 - 3] [i_6 - 1] [i_6 - 1]))) >> ((((((min(var_1, var_4))) * (max(var_3, var_5)))) - 566472594))));
                    arr_52 [i_13] = ((((((var_6 ? var_2 : 0))) ? (arr_22 [i_6]) : 4353931191134081293)));
                }
            }
        }
    }
    var_28 = (max(var_28, ((min(var_0, (((var_9 >> (var_4 - 7227)))))))));
    var_29 |= ((var_12 ? (((min(1, var_12)))) : (max((~var_3), var_10))));
    var_30 = var_10;
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208778
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((1 ? ((var_3 | (max(-3995236018815008676, 1)))) : var_1));
    var_13 = (max(-4, var_4));
    var_14 |= (((((var_5 + (24370 + var_2)))) ? var_10 : var_4));

    for (int i_0 = 1; i_0 < 9;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = (max((min(146, (min((arr_0 [i_0]), 94)))), var_11));
        arr_5 [i_0] = (((24 ? (arr_0 [i_0]) : ((var_7 ? -269068129 : 124)))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    arr_11 [i_1] [i_1] = (arr_7 [i_0]);
                    var_15 = (max(var_15, (arr_3 [i_0])));
                }
            }
        }
        var_16 = (arr_2 [i_0 + 1]);
        var_17 ^= (max((arr_0 [i_0]), (+-1)));
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 9;i_3 += 1) /* same iter space */
    {
        var_18 = var_4;
        var_19 = 171669363694680654;
    }
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        var_20 = (((((59264 ? (arr_10 [2] [i_4] [i_4] [4]) : 1))) ? (((!1) * (arr_10 [i_4] [i_4] [8] [i_4]))) : (arr_1 [8] [1])));
        var_21 = ((((((arr_6 [8] [i_4]) * -29968))) || (arr_6 [i_4] [8])));
        arr_17 [i_4] [i_4] = var_5;
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        arr_20 [i_5] [i_5] = var_10;
        var_22 = 1;

        for (int i_6 = 2; i_6 < 11;i_6 += 1)
        {
            var_23 = (-32767 - 1);
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 10;i_8 += 1)
                {
                    {
                        arr_27 [i_7] [i_7] [9] = (arr_24 [i_7] [i_7] [i_6 - 1]);
                        var_24 = ((+(((arr_19 [i_5] [i_5]) ? (arr_24 [i_7] [2] [i_7]) : -11))));
                    }
                }
            }
        }
        for (int i_9 = 1; i_9 < 11;i_9 += 1)
        {
            var_25 = (((((~4) + 2147483647)) >> (arr_19 [i_5] [i_9])));
            arr_31 [i_5] |= (-10 / -1);
            var_26 = ((~(!var_4)));
            var_27 = ((var_3 <= (arr_22 [i_9 + 1] [i_9] [i_9])));
            var_28 = 11245681830865972337;
        }
        for (int i_10 = 1; i_10 < 11;i_10 += 1)
        {
            arr_36 [i_5] [i_10] [i_10] &= (((arr_21 [i_5]) / (arr_30 [i_10 + 1] [i_10 + 1] [i_10])));
            arr_37 [i_5] = (((arr_24 [4] [8] [i_10 + 1]) ^ ((var_2 ? 255 : var_7))));

            for (int i_11 = 2; i_11 < 8;i_11 += 1)
            {
                arr_40 [10] [0] [i_10] [i_11] = (((arr_23 [i_10 + 1] [i_10 + 1] [i_10 + 1] [i_10 + 1]) / 33012));
                arr_41 [i_5] [i_10] = 100;
                var_29 = ((var_6 <= (63 - 33007)));
            }
            arr_42 [i_5] [8] [i_5] &= (arr_24 [8] [6] [i_5]);
            var_30 = ((!(arr_30 [i_10 - 1] [i_10] [i_10 - 1])));
        }
    }
    #pragma endscop
}

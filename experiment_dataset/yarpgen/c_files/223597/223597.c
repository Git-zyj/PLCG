/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223597
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = -var_0;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_11 ^= ((2047 ? (!-202) : 54));

        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            var_12 *= (+((15520 ? (arr_3 [i_0] [i_1 + 2] [i_1 - 3]) : (arr_4 [i_0] [i_1 + 3] [i_1 - 2]))));
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 11;i_4 += 1)
                    {
                        {
                            arr_12 [i_4] [8] [i_2] [8] [i_0] &= ((-(((arr_11 [i_0] [i_0] [i_1 - 2] [i_2 + 2] [i_4 - 1] [i_4 - 1]) + (arr_11 [i_1 - 1] [i_1] [i_1 + 2] [i_2 - 1] [i_4 - 1] [4])))));
                            var_13 = (((((42 >> (987960008 - 987959994)))) << ((((194 << (206 - 195))) - 397291))));
                        }
                    }
                }
            }
            var_14 = (var_4 <= var_6);
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
        {
            var_15 = var_6;
            arr_15 [i_0] [i_5] = ((-(((arr_14 [i_0]) ? var_9 : (arr_6 [i_0] [i_5] [i_5])))));
            arr_16 [8] [i_5] &= var_9;
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
        {
            arr_19 [i_0] [i_0] = ((184 ? 22801 : 1));
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 10;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        {
                            var_16 = (min(var_16, (!195)));
                            var_17 = (min(var_17, -var_9));
                        }
                    }
                }
            }
            var_18 = -2048;
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 12;i_10 += 1) /* same iter space */
        {
            arr_32 [i_0] = ((-(arr_31 [i_0] [i_0] [i_0])));
            arr_33 [i_0] = -683513541;
            var_19 = ((53667 > (!var_9)));
            var_20 = (((arr_10 [i_0] [i_10] [i_0] [i_0] [i_0]) | (arr_10 [i_10] [i_10] [i_0] [3] [i_0])));
        }
        arr_34 [i_0] [i_0] = ((((((((arr_25 [i_0] [i_0] [i_0] [i_0]) ? var_1 : (arr_30 [i_0])))) ? -77 : (min(76, 683513542)))) >> ((min(1, 1)))));
    }
    for (int i_11 = 2; i_11 < 15;i_11 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_12 = 1; i_12 < 17;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                {
                    arr_46 [i_11 - 2] [13] [i_12] [i_11 - 2] = (((arr_41 [i_11 - 2] [i_11 + 3]) ? (((arr_43 [i_11 - 1] [i_12 - 1] [i_12] [i_13]) ? (!1483457183) : -980698302)) : var_2));
                    arr_47 [i_12] [i_12] [i_13] = (arr_40 [i_11]);
                }
            }
        }
        arr_48 [i_11] = ((var_8 ^ (arr_45 [i_11 + 3] [i_11] [i_11])));
    }
    for (int i_14 = 2; i_14 < 15;i_14 += 1) /* same iter space */
    {
        var_21 += (((((arr_40 [i_14]) ? (77 / var_5) : (62 / 176))) ^ ((((((var_4 ? var_4 : (arr_37 [i_14] [i_14]))) != (arr_43 [i_14 - 1] [i_14 - 1] [i_14 + 2] [i_14 + 1])))))));
        /* LoopNest 2 */
        for (int i_15 = 1; i_15 < 15;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 1;i_16 += 1)
            {
                {
                    var_22 = (min(var_22, (((-(((arr_43 [i_15] [i_15] [i_16] [i_16]) ? 18446744073709551615 : var_6)))))));
                    var_23 = (min(var_23, 1));
                }
            }
        }
    }
    for (int i_17 = 0; i_17 < 10;i_17 += 1)
    {
        arr_60 [i_17] = (arr_49 [i_17] [i_17]);
        var_24 = (min(var_24, 50609));
        arr_61 [i_17] [i_17] = (((((arr_43 [i_17] [i_17] [i_17] [i_17]) > ((min(206, 1))))) ? ((min(var_4, 53528))) : (arr_26 [i_17] [i_17] [i_17] [1] [i_17])));
    }
    var_25 = var_5;
    #pragma endscop
}

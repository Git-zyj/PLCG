/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243174
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(((((15322170070017083170 ? 40809 : var_4)) != ((var_9 ? -3552957114694589721 : var_9)))), 8));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_13 = -65527;
        arr_2 [i_0 - 1] = -1;

        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            arr_5 [i_1] = var_1;
            arr_6 [9] [i_1] [i_0 + 1] = ((4294036420 | 27) ? (-3552957114694589715 ^ 4294036420) : ((((var_10 >= (arr_4 [i_0 + 1] [i_0]))))));
            var_14 += (((arr_4 [i_1] [i_1 - 1]) || (arr_4 [i_1 + 2] [i_1 - 2])));
            arr_7 [i_1] &= (-3552957114694589750 || 930875);
        }
        arr_8 [10] = ((var_7 ? (arr_3 [i_0 - 1] [i_0 - 1]) : (arr_3 [i_0] [i_0 - 1])));
    }
    var_15 = (var_9 & 34689);
    var_16 = (max(var_16, ((((17058 ^ var_2) == var_2)))));

    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        arr_12 [i_2] = (((5083 ^ (min(var_9, var_3)))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 9;i_4 += 1)
            {
                {
                    arr_19 [i_2] [i_4] = (((--0) >> ((((arr_11 [i_2]) <= var_2)))));
                    arr_20 [i_2] [i_3] [i_4] = var_8;
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        var_17 = (max(var_17, (((var_9 % (min(var_0, 930856)))))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 0;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                {

                    for (int i_8 = 0; i_8 < 24;i_8 += 1) /* same iter space */
                    {
                        var_18 = (min(var_18, ((((((~(arr_28 [14] [i_6 + 1] [i_6 + 1])))) ? (min(var_8, var_4)) : (min(var_1, (((var_11 ? var_6 : (arr_30 [11] [i_7] [i_6] [i_8] [i_6] [i_6])))))))))));
                        arr_31 [i_5] [i_6 + 1] [i_5] [i_8] [i_5] [i_7] = ((~((-(var_9 * var_8)))));
                    }
                    for (int i_9 = 0; i_9 < 24;i_9 += 1) /* same iter space */
                    {
                        arr_34 [i_9] [i_9] [i_5] [i_5] [5] [5] = ((((((arr_29 [i_5] [i_7] [i_5] [i_5] [i_5]) ? 3552957114694589727 : 19615))) || (((min(-1, -1))))));
                        var_19 = (min((49156 < -13), (~1)));
                        arr_35 [i_5] [i_7] [i_5] = (min((8260 && var_7), (max((min(5091, 18446744073709551615)), (arr_23 [i_6 + 1] [7] [i_6 + 1])))));
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 0;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 23;i_11 += 1)
                        {
                            {
                                var_20 = ((max(((min(var_6, (arr_26 [i_7] [i_7] [i_5] [i_10]))), (min(var_0, var_2))))));
                                var_21 = 2218171917929453211;
                                var_22 = ((15672180651454127871 ? var_2 : (((max(65533, 14686))))));
                                var_23 = ((+(((arr_27 [18] [i_6] [i_6]) / (arr_27 [i_5] [i_6 + 1] [i_6 + 1])))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

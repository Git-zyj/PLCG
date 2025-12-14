/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241240
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 = var_7;
        var_20 = (min(var_20, ((-(((arr_0 [1]) + (arr_0 [0])))))));
        arr_2 [i_0] [i_0] = -30343;
        var_21 = (max(var_21, (((((((!var_17) && (((1 ? (arr_1 [i_0]) : 0)))))) | ((max(var_6, (!var_12)))))))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_5 [i_1] = (((((arr_4 [14] [9]) ? (~var_16) : (var_8 % var_6))) != (((-((~(arr_3 [i_1] [i_1]))))))));
        var_22 = ((~(arr_3 [i_1] [i_1])));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        var_23 = var_9;
        arr_10 [i_2] = (((arr_7 [i_2] [i_2]) - (arr_7 [i_2] [i_2])));
    }
    var_24 = (!var_11);
    var_25 = (max(var_25, var_15));

    /* vectorizable */
    for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
    {
        var_26 ^= ((!1) & ((var_0 ? var_4 : var_15)));
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 9;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                {
                    arr_17 [i_3] [i_3] [i_3] [i_3] |= ((var_3 % (~var_18)));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            {
                                arr_22 [i_3] [1] [i_5] [i_6] [i_3] = var_14;
                                arr_23 [i_3] [i_4] [i_5] [i_3] [i_7] = (var_4 - 30343);
                                arr_24 [i_3] [i_4 + 1] [i_5] [i_6] [i_6] = (((((arr_14 [i_4 + 1] [i_4 - 1] [i_4 - 1]) + 2147483647)) >> (((arr_7 [i_4 + 1] [i_4 + 1]) - 61))));
                                arr_25 [4] [0] [i_5] [i_6] [6] [i_6] = ((var_0 != (arr_3 [i_6] [i_7])));
                            }
                        }
                    }
                    var_27 = (max(var_27, ((((arr_6 [i_4 + 1] [i_4 - 1]) ? (((var_4 << (7004724002537504355 - 7004724002537504340)))) : (((arr_6 [2] [i_4]) % (arr_20 [i_5] [7] [i_3]))))))));
                }
            }
        }
        arr_26 [i_3] = ((var_7 ? (var_12 != 1) : -1268793552));
    }
    for (int i_8 = 0; i_8 < 10;i_8 += 1) /* same iter space */
    {
        var_28 -= (arr_16 [i_8]);
        var_29 = (max(var_29, (arr_28 [i_8] [i_8])));
    }
    for (int i_9 = 3; i_9 < 14;i_9 += 1)
    {

        /* vectorizable */
        for (int i_10 = 3; i_10 < 12;i_10 += 1)
        {
            var_30 += (var_7 % var_9);
            arr_34 [i_9] [i_9] [i_9 - 2] = 7004724002537504355;

            for (int i_11 = 2; i_11 < 12;i_11 += 1)
            {
                var_31 *= var_1;
                arr_37 [i_9] [i_10 + 1] [i_11] = (i_9 % 2 == zero) ? (((((var_18 ? var_6 : 7004724002537504340)) << (((arr_32 [i_9] [1] [i_9]) - 9955))))) : (((((var_18 ? var_6 : 7004724002537504340)) << (((((arr_32 [i_9] [1] [i_9]) - 9955)) - 8535)))));
            }
            arr_38 [i_9] [i_9] = 7004724002537504340;
        }
        arr_39 [i_9] [i_9] = (min((((var_6 << (((arr_7 [i_9] [i_9]) - 75))))), (max(var_1, (arr_4 [i_9] [i_9 - 1])))));
        arr_40 [i_9] [i_9] = (((max((arr_33 [i_9 - 2]), (arr_33 [i_9 - 1]))) + (arr_9 [i_9 - 1])));
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 0;i_12 += 1)
    {
        var_32 = (~var_16);
        var_33 = (min(var_33, (((!(arr_41 [i_12 + 1] [i_12 + 1]))))));
    }
    #pragma endscop
}

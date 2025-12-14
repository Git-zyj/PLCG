/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41037
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_4 [16] = var_10;
        var_11 += 1;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_12 -= ((((arr_0 [i_1]) ^ (arr_0 [i_1]))) == (arr_0 [i_1]));
        var_13 = arr_1 [i_1] [i_1];
        arr_7 [i_1] [i_1] = (!var_2);
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {

        /* vectorizable */
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            arr_14 [i_3] = ((-(arr_9 [i_2] [i_3])));

            for (int i_4 = 2; i_4 < 9;i_4 += 1)
            {
                var_14 |= ((7491 >> (var_10 + 6367110781408854836)));
                arr_17 [i_3] = (((arr_16 [i_2] [i_3] [6] [i_3]) ? ((1 ? 1 : 17043854947149945624)) : (arr_10 [i_4 - 2] [i_4 + 2])));
                arr_18 [i_2] [i_3] [i_4 - 2] = var_4;
            }
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 1;i_7 += 1)
                    {
                        {
                            arr_27 [i_6] &= ((4127099420671182664 ? (arr_22 [i_2]) : (arr_9 [i_7 - 1] [i_7 - 1])));
                            arr_28 [i_7 - 1] [i_3] [i_6] [1] [i_3] [1] = var_0;
                            var_15 ^= (arr_26 [i_7 - 1] [i_6] [i_5] [i_6] [i_7] [i_3] [i_3]);
                        }
                    }
                }
                var_16 += (arr_3 [i_3]);
            }
            arr_29 [i_3] [i_3] [i_3] = var_0;
            arr_30 [i_2] [i_2] [i_3] = (arr_11 [i_2] [i_3]);
        }
        /* vectorizable */
        for (int i_8 = 2; i_8 < 8;i_8 += 1)
        {
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 11;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 9;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 11;i_11 += 1)
                    {
                        {
                            arr_42 [i_11] [i_10] [i_9] [i_2] [i_2] = (arr_35 [i_8 + 3] [i_8 + 3] [i_10 - 1] [i_10]);
                            var_17 ^= 58045;
                            arr_43 [0] [i_11] [1] [i_10] [i_9] [5] [5] = var_0;
                            var_18 -= ((-(arr_35 [i_8 + 2] [i_8 + 2] [i_10 + 2] [i_9])));
                        }
                    }
                }
            }
            var_19 = (5277414591322799387 - 0);
        }
        var_20 = (min((((!(max(1, var_5))))), ((1 ? 1 : 1))));
    }
    var_21 = min(1, 7491);
    var_22 = min(((((var_10 ? 13345191759366810032 : var_0)))), var_6);
    var_23 = ((var_7 ? var_10 : (((min(10405114214523602980, -1759625347217696663)) * ((var_5 ? 17592186044415 : var_6))))));
    #pragma endscop
}

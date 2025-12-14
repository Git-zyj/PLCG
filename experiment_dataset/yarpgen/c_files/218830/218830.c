/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218830
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_18 = -81;
                    var_19 = (-32767 - 1);
                }
            }
        }
    }
    var_20 ^= var_3;
    var_21 &= ((var_6 ? ((59 ? -363633625 : (-32767 - 1))) : var_5));

    /* vectorizable */
    for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
    {
        arr_9 [i_3] = -32766;
        arr_10 [i_3] = var_6;
    }
    for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
    {
        var_22 = (arr_0 [i_4]);
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                {
                    arr_18 [i_5] [i_6] [13] [i_5] = var_4;
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            {
                                var_23 = (min((arr_5 [i_4] [i_5] [i_6] [i_8]), (arr_0 [i_5])));
                                var_24 = (~var_4);
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 14;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 14;i_10 += 1)
            {
                {
                    var_25 = -67;

                    for (int i_11 = 0; i_11 < 14;i_11 += 1)
                    {
                        var_26 = (max((min((arr_31 [i_9] [i_10] [i_11]), var_13)), (--32767)));
                        var_27 = (!var_9);
                        var_28 = 65523;
                        var_29 = (arr_32 [i_4] [i_9] [i_10]);
                    }
                    var_30 = var_12;

                    for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
                    {
                        arr_39 [i_9] = ((max(32763, -1)));
                        var_31 = 14628;
                    }
                    for (int i_13 = 0; i_13 < 1;i_13 += 1) /* same iter space */
                    {
                        var_32 = ((-var_4 ? (arr_13 [i_9] [i_13]) : 126));
                        var_33 = var_11;
                        var_34 = 351792763753136201;
                    }
                }
            }
        }
    }
    for (int i_14 = 0; i_14 < 14;i_14 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_15 = 0; i_15 < 14;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 14;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 14;i_17 += 1)
                {
                    {

                        for (int i_18 = 0; i_18 < 14;i_18 += 1)
                        {
                            var_35 = (min((arr_41 [i_15] [i_16] [i_18]), (arr_41 [i_15] [i_15] [i_17])));
                            var_36 |= ((-32765 ? ((-(arr_2 [i_15] [i_17]))) : 14356));
                        }
                        var_37 = var_9;
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_19 = 0; i_19 < 1;i_19 += 1)
        {
            for (int i_20 = 0; i_20 < 14;i_20 += 1)
            {
                for (int i_21 = 0; i_21 < 14;i_21 += 1)
                {
                    {
                        var_38 = 8849;
                        var_39 = 31687;
                        arr_64 [i_19] [i_19] [i_19] [i_19] = 0;
                        var_40 = 1;
                        var_41 = (max(var_41, ((min(13, (arr_60 [3] [i_19] [i_20]))))));
                    }
                }
            }
        }
        var_42 = -12812;
        var_43 = 351792763753136189;
    }
    #pragma endscop
}

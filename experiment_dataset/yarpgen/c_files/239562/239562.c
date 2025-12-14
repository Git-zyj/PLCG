/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239562
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] = -536870908;
        var_19 = (max(var_19, (((-(arr_2 [12]))))));
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {
        arr_7 [i_1] = (min(var_11, 0));
        arr_8 [i_1 - 1] [i_1] = 18446744073172680728;
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 7;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 9;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                var_20 = ((-(1 && 35184372088831)));
                                var_21 = (min(222, 8356885743912959125));
                                var_22 = var_0;
                                var_23 = ((-(3 && 18446744073172680725)));
                                var_24 &= var_6;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 10;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            {
                                var_25 = ((33 << (((~18446744073172680707) - 536870904))));
                                arr_24 [i_6 - 1] [i_3 - 1] [i_1] = ((!(((!(arr_21 [i_1] [i_2 - 2] [i_3] [i_6 - 1] [i_1] [i_1]))))));
                                arr_25 [i_1] = ((((5 ? 1 : 536870892)) - 1));
                                var_26 = ((min((!10089858329796592491), 536870891)));
                                arr_26 [i_1] [i_2 + 3] [i_3] [i_6 + 1] [i_7] = ((10089858329796592490 * (((((((arr_6 [i_1]) ? 18446744073172680714 : var_4))) ? (arr_22 [i_6] [i_2] [i_3 - 1] [i_6] [i_7]) : -var_16)))));
                            }
                        }
                    }
                    var_27 = var_8;
                    arr_27 [i_1 - 1] [i_2 + 3] = var_5;
                }
            }
        }
    }
    for (int i_8 = 1; i_8 < 12;i_8 += 1)
    {
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 12;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 13;i_10 += 1)
            {
                {
                    arr_38 [i_10] [i_8] [i_10] = ((3 + ((max(var_5, (arr_1 [i_8]))))));
                    /* LoopNest 2 */
                    for (int i_11 = 4; i_11 < 11;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            {
                                arr_46 [i_8] [i_8 - 1] [i_8] [i_8] [1] [i_8] = (max(((59985 ? 536870908 : 8356885743912959125)), (((17955811626946856073 ? 59985 : var_15)))));
                                var_28 = var_2;
                            }
                        }
                    }
                    arr_47 [i_8] [i_8] [i_10] = 116;
                    var_29 = 8356885743912959126;
                }
            }
        }
        var_30 ^= (min((max(((-(arr_37 [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8]))), (arr_0 [12]))), -29981));
        var_31 = ((-(((arr_39 [i_8 + 1] [i_8] [i_8 - 1]) ? (arr_39 [i_8 + 1] [i_8 - 1] [i_8 - 1]) : (arr_29 [i_8 - 1])))));
        var_32 = (((((1 / 41454) ? -6062557353969467293 : 15)) * ((59985 ? (arr_31 [i_8]) : (arr_40 [i_8] [i_8])))));
    }
    var_33 = (!var_11);
    var_34 = ((((max((max(0, 3959885115)), (~var_9)))) ^ (((((18446744073172680682 ? 88 : (-9223372036854775807 - 1)))) ? (((max(-29964, -29981)))) : var_5))));
    var_35 = 0;
    var_36 = var_15;
    #pragma endscop
}

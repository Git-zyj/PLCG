/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41105
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= ((((((max(var_9, var_5))) ? 1845146833086154448 : ((-1845146833086154461 ? var_6 : 377898441))))) ? ((max(((-377898419 ? var_15 : var_13)), (max(377898459, 232))))) : -6418954511887560051);

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_17 ^= ((-92 ? var_6 : ((-78 ? ((var_3 ? 148 : -1)) : (((max(var_9, 225))))))));
        arr_4 [i_0] [i_0] = ((~(arr_0 [i_0])));
        var_18 ^= (-(((((arr_2 [1]) > 40)))));
        var_19 = var_5;
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 0;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    {
                        var_20 *= ((-(max(((-12 ? 1 : 40056)), (~-15)))));
                        var_21 = (((((((max(-44, -7784297564923030802))) ? (40065 & -1845146833086154443) : (arr_5 [i_2] [13])))) ? 1 : (max((arr_7 [5] [i_2] [13]), (59 - 377898452)))));

                        for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
                        {
                            var_22 ^= (((58570 ? (arr_14 [9] [i_4] [0]) : (arr_14 [1] [i_4] [i_1]))));
                            var_23 = (min(var_23, 1));
                            arr_16 [i_4] [i_5] [i_4] [i_3] [4] [i_1] [i_4] = -53;
                            var_24 = ((-((((max(1423240137, -9223372036854775805))) ? (!var_4) : 6418954511887560071))));
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
                        {
                            arr_19 [i_1] [i_6] [i_4] [i_3 - 2] [i_4] [i_2] [i_1] = var_13;
                            arr_20 [1] [i_2] |= (((-2147483647 - 1) ? -677866655 : 65535));
                        }
                        for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
                        {
                            var_25 *= (max((arr_23 [i_1] [i_2 + 1] [i_3] [1] [i_7]), var_13));
                            var_26 ^= ((!((max((!var_7), (((arr_7 [i_1] [i_2 + 1] [i_3]) ? var_14 : 1)))))));
                            var_27 = (((((+((((arr_1 [i_4]) <= var_5)))))) ? (((!(((var_11 ? var_11 : var_0)))))) : ((((arr_10 [i_3 - 1] [i_2 + 1]) && (arr_10 [i_3 - 1] [i_2 + 1]))))));
                        }
                        for (int i_8 = 0; i_8 < 15;i_8 += 1) /* same iter space */
                        {
                            var_28 = (max(((((1 | var_10) + (arr_15 [i_4] [i_1] [i_3])))), (max(var_6, 25472))));
                            arr_27 [i_1] [i_1] [i_4] = (arr_25 [8] [i_4] [i_3 - 2] [i_2] [i_2] [i_1]);
                            arr_28 [i_4] = -1;
                        }
                    }
                }
            }
        }
        arr_29 [13] [i_1] = ((-((65535 ? ((max((arr_2 [1]), var_7))) : (((-2147483647 - 1) ? 7784297564923030805 : var_2))))));
        var_29 = (~2147483640);
    }
    for (int i_9 = 0; i_9 < 15;i_9 += 1) /* same iter space */
    {
        var_30 = ((12 == (max((-2147483647 - 1), 18))));
        arr_32 [i_9] = ((~(!-2032575348)));
    }
    for (int i_10 = 0; i_10 < 15;i_10 += 1)
    {
        var_31 = (((!(arr_5 [i_10] [i_10]))));
        var_32 = ((((var_9 / 120) <= (~243))));
        var_33 = (min(var_33, (~var_0)));
        arr_35 [i_10] = 1;
    }
    #pragma endscop
}

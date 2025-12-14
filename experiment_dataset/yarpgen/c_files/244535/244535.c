/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244535
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((-(((var_2 != 18446744073709551615) ? var_2 : ((min(var_6, var_14)))))));
    var_18 += (min((min((!var_13), ((var_12 ? 0 : var_6)))), 150));
    var_19 = (((-(!var_1))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_20 = ((var_6 ? (((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [10]) : 1295272877)) : var_14));
        var_21 = ((144 / (arr_1 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_22 = var_13;
        var_23 *= (((max((arr_3 [i_1]), 42107))));

        for (int i_2 = 1; i_2 < 9;i_2 += 1)
        {
            var_24 -= (min((((-127 - 1) ? (arr_4 [i_1] [4] [i_1]) : (-127 - 1))), ((min(6, (arr_2 [i_1]))))));
            arr_7 [8] [1] = var_14;

            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                var_25 = (max(var_25, (((arr_4 [i_2 + 1] [i_2 + 2] [i_2 + 1]) ^ ((var_14 ? (-127 - 1) : (arr_9 [i_2 + 2] [i_2 + 1])))))));
                var_26 = (min(var_26, (((((132 < ((min(1, 16384))))) ? (max(((max((arr_2 [i_1]), 6))), (((-127 - 1) / 112)))) : ((((max((-127 - 1), 3180607654493144353))) ? ((max(var_12, 105))) : 1)))))));
            }
            var_27 = var_6;
            var_28 = var_6;
        }
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            arr_12 [i_1] = ((((-((((arr_11 [5]) || 1))))) % ((min(20925, -104)))));
            var_29 -= ((max((arr_3 [i_1]), (((arr_9 [i_1] [i_1]) % (arr_11 [i_4]))))));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            arr_20 [1] [i_4] [i_5] [i_6] [1] = (((arr_16 [i_7] [i_6] [4] [i_1] [i_1]) ? 536870911 : (arr_16 [i_1] [i_1] [i_1] [i_1] [i_1])));
                            var_30 = (!var_9);
                        }
                        var_31 = var_14;
                        var_32 -= (((((15872 - (arr_6 [i_1])))) && (arr_14 [i_1] [i_1] [i_6])));
                    }
                }
            }
            var_33 = ((-((103 ? ((-36 ? 45 : -5379759748916678043)) : (((max(28672, var_4))))))));
            var_34 = (var_4 / ((((arr_15 [i_1]) && (arr_5 [10] [0])))));
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            var_35 = (max(var_35, var_10));
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 12;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 12;i_10 += 1)
                {
                    {
                        arr_29 [i_10] [i_9] [i_9] [10] = ((119 ? (((arr_14 [i_10] [i_9] [i_8]) ? var_8 : 143)) : ((((-127 - 1) < (arr_22 [i_8]))))));
                        var_36 -= 21255;
                        var_37 *= var_2;
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 12;i_11 += 1)
        {
            for (int i_12 = 1; i_12 < 11;i_12 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 12;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 12;i_14 += 1)
                        {
                            {
                                arr_41 [11] [i_12] [i_1] = ((var_1 ? (-127 - 1) : ((min(26325, (min(1, var_0)))))));
                                arr_42 [i_1] [9] [i_1] [9] [9] = var_9;
                                var_38 = (((((-127 - 1) ^ (148 ^ 1525644522)))) ? (((min(-20926, 8)))) : (((((max((arr_36 [i_14] [i_12 - 1] [i_12 - 1] [i_1]), var_8)))) / -20939)));
                                arr_43 [i_1] [i_1] [i_1] [i_1] = ((20939 ? 28678 : -126));
                                arr_44 [i_14] [i_1] [i_11] [i_1] = -250;
                            }
                        }
                    }
                    var_39 = 150;
                }
            }
        }
    }
    #pragma endscop
}

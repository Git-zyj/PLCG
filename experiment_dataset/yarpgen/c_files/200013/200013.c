/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200013
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_7;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_11 |= max(var_9, 1814822540264272879);
        var_12 = var_3;

        for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
        {
            var_13 = (((~var_0) ? ((1 ? (arr_1 [i_0]) : (arr_0 [i_0]))) : (var_1 > -64)));

            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {

                /* vectorizable */
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {

                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        var_14 = (arr_0 [i_0]);
                        var_15 += 148;
                        var_16 = 931022824;
                        var_17 = (127 <= var_7);
                    }
                    var_18 *= (var_1 + 488206144485304983);
                }
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    arr_14 [i_0] [i_0] [i_0] [i_0] = var_2;

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        var_19 = ((var_9 ? (-127 - 1) : 32767));
                        arr_18 [16] [i_1] [i_2] [i_5] [i_5] [i_0] = (((arr_10 [7] [i_0] [i_2] [1] [i_2] [i_2]) / (arr_15 [i_6] [i_5] [i_0] [15] [i_0])));
                        var_20 = ((var_1 ? ((((var_1 > (arr_6 [i_0] [i_1] [11] [i_1]))))) : (((arr_2 [i_5] [i_0] [i_0]) + var_3))));
                    }
                    var_21 = (min((27882 <= var_4), (((((arr_9 [i_0] [i_0] [i_0] [i_0] [6]) ? var_0 : 50161)) >> (((arr_6 [i_0] [i_0] [7] [i_1]) - 98243511))))));
                }
                arr_19 [i_0] [i_0] [i_0] [i_0] = (min((103 != var_4), ((((arr_2 [i_0] [i_1] [i_2]) ? 2110 : 27882)))));
                var_22 = var_3;
                arr_20 [i_0] [i_0] [i_2] = (((227 > var_1) ? var_5 : ((-((-(arr_3 [i_0] [i_0])))))));
            }
            var_23 = (((((min(var_2, (arr_2 [i_1] [1] [i_1]))))) <= (((arr_7 [i_0] [i_0] [i_1] [5]) ? (arr_1 [i_0]) : var_8))));
            var_24 = (max(1053155924, 4542));
        }
        for (int i_7 = 0; i_7 < 17;i_7 += 1) /* same iter space */
        {
            arr_24 [i_0] [i_0] [i_7] = (max((arr_2 [i_0] [0] [i_7]), (-2147483647 - 1)));
            var_25 = 18190;
            var_26 |= ((+(min((arr_23 [i_0] [4] [i_7]), var_6))));
        }
        for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
        {
            var_27 = var_5;
            var_28 = (min(var_28, 63));
            var_29 += (((((arr_25 [i_8] [i_8] [1]) ? 127 : (arr_25 [i_0] [i_0] [i_0]))) ^ (((arr_25 [9] [4] [i_0]) ? (arr_25 [i_8] [i_0] [i_0]) : var_7))));
        }
        var_30 = (max(((((arr_17 [i_0] [i_0] [0] [i_0] [14] [i_0]) ? var_1 : var_7))), (((arr_12 [i_0] [i_0] [i_0] [i_0]) ? (((arr_0 [i_0]) ^ var_0)) : ((((0 < (arr_13 [i_0] [i_0])))))))));
        arr_27 [i_0] = (min(((148 ? (~var_9) : ((7137 ? 3395138118 : 4294967295)))), ((max(18, (arr_26 [i_0] [i_0]))))));
    }
    var_31 = (((min(((1 ? var_0 : var_5)), (min(var_6, var_1)))) <= ((min((((4270316025 ? -2110 : -10314))), ((-10302 ? 4294967295 : var_4)))))));
    var_32 &= ((-10302 ? 1008 : 780170259));
    #pragma endscop
}

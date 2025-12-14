/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241908
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_5;
    var_21 = ((!(((((((var_15 ? var_17 : var_19)) + 2147483647)) << (((var_18 + var_13) - 59052)))))));

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        var_22 = (min(var_22, (((var_19 ? (arr_0 [i_0]) : var_11)))));
        arr_4 [i_0] [i_0 + 1] = (((((arr_1 [i_0]) <= (arr_2 [i_0]))) ? ((((967 ? 64583 : (arr_1 [i_0]))) >> (((~var_15) + 112)))) : (arr_0 [i_0 + 3])));
    }
    for (int i_1 = 3; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_23 = (min(var_23, (-var_6 | 15253)));
        arr_7 [i_1] = (((arr_6 [i_1]) << (((-77 + 102) - 11))));
    }
    for (int i_2 = 3; i_2 < 22;i_2 += 1) /* same iter space */
    {
        arr_12 [i_2] = 64568;
        var_24 = (min(var_24, var_16));
        arr_13 [i_2] = (((((min((arr_8 [i_2 - 2]), 64568)))) ? ((-((var_5 ^ (arr_11 [i_2]))))) : ((-(arr_9 [i_2 - 2])))));
    }
    for (int i_3 = 3; i_3 < 22;i_3 += 1) /* same iter space */
    {
        var_25 *= arr_15 [2];

        for (int i_4 = 3; i_4 < 19;i_4 += 1)
        {
            var_26 += 113;
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 22;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 22;i_7 += 1)
                    {
                        {
                            var_27 = (((arr_6 [i_4]) ? (((((-118 ? (arr_23 [12] [3] [i_4] [9]) : 58))) ? ((115 ? 65513 : 65501)) : -var_18)) : ((+((14 ? (arr_17 [i_3]) : var_8))))));
                            var_28 = (min(var_28, (((((122 ? 18613 : 14)) - ((((((arr_5 [i_5]) ? 3 : var_9))) ? (arr_9 [i_4 + 1]) : (arr_26 [i_7 - 3] [22] [i_5] [i_4] [i_3]))))))));
                            arr_27 [i_3] [i_4] [i_4] [i_4] [i_5] = (min(((((arr_11 [i_3]) && -61))), 13442));
                            arr_28 [i_4] [i_4] [i_5] [i_4] [i_4] = ((((~(arr_18 [i_3 - 3]))) < (min((((arr_26 [i_3] [i_4 + 4] [i_5] [i_5] [i_7]) << (var_10 - 51883))), (((arr_18 [17]) % var_5))))));
                            var_29 = (min(((((65533 / (arr_22 [i_7 + 1] [i_6] [i_5] [i_4]))) / (arr_25 [i_4] [i_4] [i_5] [i_5] [i_6] [i_7]))), (min(((22 ? (arr_5 [i_4]) : (arr_5 [i_4]))), ((min(var_3, (arr_23 [i_4] [20] [i_6] [i_7 - 2]))))))));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 23;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 23;i_9 += 1)
                {
                    {
                        var_30 = 31041;
                        var_31 *= var_18;

                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 23;i_10 += 1)
                        {
                            arr_36 [i_3] [i_3] [i_3] [i_3] [i_4] [i_3] = (((arr_16 [i_4 - 2]) ? (arr_31 [i_3 - 3] [i_3] [i_3] [i_3]) : (arr_16 [i_4 + 2])));
                            var_32 = (max(var_32, (((-53 ? 65533 : 67)))));
                            var_33 = ((!(arr_23 [i_3 - 2] [i_3] [i_3 - 2] [i_3])));
                        }
                        for (int i_11 = 1; i_11 < 22;i_11 += 1)
                        {
                            var_34 = (max(var_34, ((((arr_39 [i_11] [i_11] [i_4] [i_8] [21] [i_4] [i_3]) ? (((arr_6 [i_8]) ? (39255 - var_17) : (((var_1 > (arr_16 [i_3 + 1])))))) : -8)))));
                            var_35 = (((((65510 ? ((max(var_14, 65514))) : var_5))) || ((((25 - var_14) ? (~var_6) : 56)))));
                            var_36 = ((((((min((arr_26 [i_8] [i_4] [i_8] [i_9] [i_11]), var_16))) / (((arr_39 [i_11 - 1] [i_11] [17] [19] [i_8] [i_4] [i_3 + 1]) ^ 26)))) % ((max(var_4, (arr_26 [i_3] [0] [8] [i_11 + 1] [i_11]))))));
                            var_37 = arr_18 [i_3];
                        }
                        arr_40 [i_4] = (((arr_10 [i_3 - 3]) << (((~var_13) - 57))));
                        arr_41 [i_3] [i_3] [i_3 + 1] [i_4] [i_3 + 1] = ((!(arr_24 [i_4] [i_4 - 3])));
                    }
                }
            }
        }
        for (int i_12 = 0; i_12 < 23;i_12 += 1)
        {
            arr_45 [20] [i_12] = var_12;
            var_38 *= -65535;
        }
        var_39 -= ((-var_3 | (arr_22 [i_3] [i_3 - 1] [i_3 + 1] [i_3])));
    }
    var_40 = var_6;
    var_41 *= 82;
    #pragma endscop
}

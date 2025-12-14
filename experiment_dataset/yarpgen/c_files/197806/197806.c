/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197806
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= (min(((37 ? var_11 : var_5), ((max(var_4, 218))))));

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {
                        var_19 = (((((16352 ? 4294967295 : (arr_9 [i_0 + 1] [i_1])))) ? 49183 : (((max(1003507498, var_16))))));
                        var_20 ^= (arr_2 [i_0 - 3]);
                        var_21 = (min(((var_10 - (max((arr_1 [8]), (arr_4 [i_2]))))), (max(13426499910727521649, 1965115444))));
                        var_22 = 58;
                    }
                }
            }
        }
        arr_11 [i_0] [i_0] = var_13;
        var_23 = (~-49184);
    }
    for (int i_4 = 1; i_4 < 10;i_4 += 1)
    {
        arr_15 [i_4 + 2] = ((((var_0 ? (min(-1003507506, var_6)) : var_15)) + (arr_10 [i_4] [i_4 + 3] [i_4] [i_4])));
        arr_16 [i_4] = -71;
        arr_17 [7] [i_4] = 0;
        var_24 &= ((-(arr_0 [i_4] [i_4 + 2])));
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                {
                    var_25 = 1899144769;
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 12;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            {
                                var_26 += (min((arr_0 [i_4 + 3] [i_5 - 1]), (arr_0 [i_4 + 3] [i_5 - 1])));
                                var_27 = (min(16378, ((((min(-15, -89))) - -1321167045))));
                                var_28 = (-((-(arr_19 [i_5]))));
                                arr_28 [9] [i_5] [i_5 - 2] [i_5 - 2] = 16352;
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_9 = 1; i_9 < 12;i_9 += 1)
                    {
                        var_29 = 4294967289;
                        arr_31 [i_4] [i_5] [3] = (!27);
                        arr_32 [i_9] [i_5] [i_6] [i_9 - 1] = ((27 ? var_12 : 5632619599502624480));
                    }
                    /* vectorizable */
                    for (int i_10 = 1; i_10 < 11;i_10 += 1)
                    {
                        arr_36 [i_10] [i_4] [i_4] [i_4] |= ((-((2080768 ? (arr_25 [i_10] [i_10] [12] [12]) : var_3))));
                        arr_37 [i_4 + 2] [2] [i_4 + 2] = 0;
                        var_30 = ((var_4 ? (arr_10 [i_4] [10] [10] [10]) : (((arr_13 [i_10]) | (arr_1 [i_4])))));
                        var_31 += ((-(arr_10 [i_5 + 2] [i_5] [i_6] [i_10 + 1])));
                    }
                }
            }
        }
    }
    for (int i_11 = 1; i_11 < 17;i_11 += 1)
    {

        for (int i_12 = 0; i_12 < 20;i_12 += 1)
        {
            var_32 = max((((max(var_10, (arr_39 [i_11] [i_11]))) & ((~(arr_43 [i_12]))))), (((arr_38 [i_11 + 1]) % (arr_38 [i_11 - 1]))));
            arr_44 [i_12] [i_12] = (((((-((87 ? 33538048 : var_5))))) ? ((((!((max((arr_43 [i_11]), 2842458078893448132))))))) : (min((-27 % var_13), 32767))));
        }
        for (int i_13 = 0; i_13 < 20;i_13 += 1)
        {
            var_33 -= var_2;
            arr_48 [i_11] [i_13] [i_11] = (var_17 % -21063);
            var_34 = (max((arr_46 [i_13] [i_11]), (!12010873908761443678)));
        }
        for (int i_14 = 3; i_14 < 19;i_14 += 1)
        {
            var_35 = (min(var_35, (((((((((((arr_40 [i_11] [i_11]) + 2147483647)) << (var_10 - 2001656212))) | (arr_47 [i_11 + 1] [i_11 - 1] [i_11 + 2])))) ? -9 : (-5632619599502624481 - 37834))))));
            var_36 = (min(var_36, ((((((arr_49 [i_11] [i_11] [i_11 + 3]) | (arr_49 [i_11] [i_11] [i_11 + 3]))) + ((-33538049 ? (arr_49 [i_11 + 1] [i_14] [i_11 + 2]) : -16)))))));
            var_37 = (((arr_41 [i_11 + 1]) >> (((-713 + var_7) - 8577769799501826471))));
        }
        arr_52 [i_11] &= (max((arr_41 [i_11 + 2]), -5632619599502624473));
        arr_53 [i_11] = (min(65535, (min(var_13, var_8))));
        var_38 += (min(((min((arr_47 [i_11] [i_11 - 1] [i_11 + 1]), (arr_40 [i_11 + 2] [i_11 + 2])))), ((((((arr_42 [4]) ^ (arr_39 [i_11 + 1] [i_11])))) ? 0 : (~0)))));
    }
    var_39 = ((((((var_3 & var_12) | (~var_14)))) ? var_8 : (~var_0)));
    #pragma endscop
}

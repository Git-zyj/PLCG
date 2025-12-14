/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233077
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= var_7;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        arr_12 [0] [i_0] = 0;
                        arr_13 [i_0] [i_1] [i_0] [i_0] = ((min((arr_9 [i_0] [i_1] [i_2] [i_2 + 2] [i_3]), var_5)) != (((min(var_1, 255)))));

                        for (int i_4 = 3; i_4 < 13;i_4 += 1)
                        {
                            var_13 = var_9;
                            var_14 = var_1;
                            var_15 = (arr_10 [i_4] [1] [i_4] [i_0]);
                        }
                        for (int i_5 = 3; i_5 < 13;i_5 += 1)
                        {
                            var_16 = ((var_2 ? (min(var_3, 26)) : var_3));
                            var_17 = (max(var_17, (arr_1 [6])));
                            var_18 *= (3304330702 || var_8);
                            arr_18 [12] [i_5] [6] [4] [i_1] [i_1 - 1] [12] &= var_1;
                        }
                        for (int i_6 = 3; i_6 < 10;i_6 += 1)
                        {
                            var_19 = (var_8 != (((-67 ? 10 : 32))));
                            var_20 += ((-((var_8 ? -106 : (arr_5 [i_0] [0] [0])))));
                            var_21 ^= 2550757896;
                        }
                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            arr_25 [i_7] [i_3] [i_0] [i_0] [6] [i_0] = -69;
                            arr_26 [i_0] [i_1] [i_0] [i_3] [i_7] = ((-69 > ((((min(990636593, 243))) / (arr_9 [i_0] [i_1 + 1] [1] [i_3] [i_7])))));
                        }
                        var_22 = (min(var_22, ((((min(44100, var_2)))))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 14;i_9 += 1)
            {
                {
                    var_23 |= var_4;

                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 14;i_10 += 1)
                    {
                        var_24 &= (-26204 ? (var_9 == 9223372036854775791) : (arr_11 [i_9] [i_0] [i_8] [i_9]));
                        var_25 = var_10;
                        var_26 = var_5;
                        arr_33 [i_0] [i_0] [i_0] [i_0] = (var_8 << var_9);
                        var_27 = ((66 ? 3042000710 : var_6));
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 14;i_11 += 1)
                    {
                        arr_36 [i_8] [i_0] = 255;

                        for (int i_12 = 2; i_12 < 13;i_12 += 1)
                        {
                            arr_39 [i_0] [i_11] [13] [9] [i_9] [0] [i_0] = ((-89 ? var_3 : (arr_16 [i_11] [i_12] [i_12 - 2] [2] [i_12])));
                            arr_40 [i_0] [i_0] [5] = 43;
                        }
                        for (int i_13 = 1; i_13 < 11;i_13 += 1)
                        {
                            var_28 -= 0;
                            arr_44 [i_0] [i_8] [i_8] [i_8] [i_8] [i_0] = 1;
                            arr_45 [i_0] [i_0] [i_8] [i_9] [i_11] [i_0] = (arr_29 [i_13 + 3]);
                            arr_46 [i_0] [i_8] [8] [i_0] [0] = ((-1 > ((var_3 ? var_9 : var_7))));
                        }
                        for (int i_14 = 0; i_14 < 14;i_14 += 1)
                        {
                            var_29 = (arr_24 [i_0] [2] [i_9] [13] [6]);
                            var_30 = (min(var_30, 7911058874449511165));
                            arr_49 [i_14] [i_0] [12] = 3852300048;
                            var_31 = (arr_23 [i_0] [13] [i_9] [i_11] [i_14] [4]);
                            var_32 ^= (arr_42 [i_0]);
                        }

                        for (int i_15 = 0; i_15 < 1;i_15 += 1)
                        {
                            var_33 ^= (((arr_14 [i_0] [i_8] [i_9] [i_11] [i_15]) < 31));
                            arr_52 [8] [i_8] [i_9] [i_0] = 255;
                        }
                        for (int i_16 = 1; i_16 < 1;i_16 += 1)
                        {
                            arr_55 [i_0] [i_0] [i_0] [i_9] [i_11] [7] = 1;
                            var_34 &= var_0;
                            var_35 *= var_8;
                            var_36 = var_10;
                        }
                    }
                    var_37 = (max(var_37, var_1));
                    arr_56 [i_0] [i_0] [i_0] = (min((((2444237176 ? -2992 : 23))), (min(1850730111, 2447759865))));
                }
            }
        }
        var_38 = (min(var_38, 588965757));
        var_39 |= (-127 - 1);
    }
    #pragma endscop
}

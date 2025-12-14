/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53273
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_19 = (!-14);
                            arr_13 [3] [i_2] [5] [i_3] [i_2] [i_3] = ((((min(((min(47120, 245))), ((var_6 ? var_9 : var_13))))) >= ((((max(var_1, 9))) ? ((var_4 ? 115 : var_17)) : (((var_17 ? 255 : 83)))))));
                        }
                    }
                }
                var_20 = (((((min(-1868428767, 255)))) ? (((!(~9223372036854775796)))) : var_9));
            }
        }
    }
    var_21 = ((var_6 ? ((((0 ? 8576951613876679473 : 8576951613876679473)) / (((12 ? 256 : -18))))) : ((((var_17 / 8576951613876679466) ? var_10 : ((var_17 ? 65526 : 8)))))));
    var_22 = (min((((((var_14 ? var_5 : 8576951613876679458))) ? ((1868428779 ? 8589934591 : 6411718578468804585)) : -0)), 18446744073709551607));
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            {
                var_23 = (min(18446744073709551615, ((((((var_11 ? 12848558675635988927 : var_0))) ? (arr_15 [i_4] [i_5]) : var_12)))));

                for (int i_6 = 1; i_6 < 10;i_6 += 1)
                {
                    arr_23 [i_6] [i_6] [i_5] [i_4] = (arr_21 [9] [i_5] [0] [i_6]);
                    var_24 = (max(var_24, (arr_14 [i_6 + 1])));
                }
                for (int i_7 = 2; i_7 < 10;i_7 += 1)
                {
                    var_25 = (max(var_25, (((65526 ? var_15 : var_17)))));
                    arr_27 [i_4] [10] [i_4] = ((((!((max((arr_14 [i_5]), var_1))))) ? var_5 : (arr_22 [i_7] [i_7 + 1] [i_7 + 1])));
                    var_26 &= var_1;

                    for (int i_8 = 4; i_8 < 8;i_8 += 1)
                    {
                        var_27 = var_12;
                        var_28 |= (min((!var_0), ((65280 ? 51 : 7))));
                        var_29 = (((!(((var_3 ? var_7 : var_14))))));

                        for (int i_9 = 0; i_9 < 11;i_9 += 1)
                        {
                            var_30 -= (arr_15 [i_7] [i_8]);
                            var_31 = -1;
                            var_32 *= 119;
                            var_33 |= 126;
                        }
                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 11;i_10 += 1)
                        {
                            var_34 += var_9;
                            var_35 = (max(var_35, 65519));
                            var_36 &= (((((var_0 ? 134 : var_1))) ? 35932 : ((var_12 ? 65535 : var_9))));
                            arr_36 [i_8] [i_8] = var_12;
                            arr_37 [i_4] [i_7] |= 249;
                        }
                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 11;i_11 += 1)
                        {
                            arr_40 [i_8] = var_4;
                            arr_41 [i_8] [2] [i_5] [i_5] [i_8] = 8576951613876679439;
                            arr_42 [i_11] [4] [i_4] [4] [0] [i_8] = (((((var_10 ? 2032 : 2506495293788424655))) ? var_5 : ((var_12 ? var_15 : var_8))));
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 4; i_12 < 10;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 11;i_13 += 1)
                        {
                            {
                                arr_47 [i_13] [i_13] [i_12] [i_12] = ((((max(((29683 ? var_11 : var_17)), 2))) ? 65257 : ((((((arr_28 [i_4]) ? var_17 : var_9))) ? ((max(64, var_7))) : 205))));
                                arr_48 [i_7] [i_7 - 1] [i_7] [1] [i_13] = (((((-1 ? 14725033011749599355 : 59097))) ? ((((65529 * var_10) ? ((var_5 ? 2088960 : var_5)) : ((2798649254 ? var_5 : 120))))) : ((((249 ? 18446744073709551615 : 65279)) ^ (((max(var_15, 120))))))));
                                arr_49 [i_4] [i_4] [i_5] [i_7] [i_12] [i_13] = (min(var_8, var_7));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

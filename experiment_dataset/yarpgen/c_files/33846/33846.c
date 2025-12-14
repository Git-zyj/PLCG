/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33846
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [10] [i_0] = (((((arr_1 [i_0]) ? ((var_1 ? -6316365508405071774 : (arr_1 [i_0]))) : -32755)) & var_5));
        var_13 = (var_3 ^ ((var_4 ? (arr_0 [i_0]) : ((min(var_4, var_9))))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            {
                                var_14 ^= ((25987 ? 4294967295 : 0));
                                var_15 = (((((-25988 == var_5) ? ((2767498865 ? 31549 : 18446744073709551615)) : (((((arr_7 [i_1] [4] [i_5]) <= var_6))))))) ? (min(var_12, ((((arr_4 [i_4] [i_3]) - 1561178591))))) : -27290);
                                arr_15 [i_3] [i_2] [5] [i_2] [i_2] = (((((arr_7 [i_1] [i_1] [i_3]) ? (arr_1 [i_1]) : var_2))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            {
                                arr_21 [9] [i_3] [i_3] [i_3] [3] = 18446744073709551615;
                                var_16 = ((-((0 ? (min(var_6, 4294967282)) : (((min((arr_11 [8] [6] [i_6] [i_7]), (arr_2 [i_6] [i_7])))))))));
                                arr_22 [i_1] [8] [i_6] [8] [8] [i_7] |= (((var_0 / var_4) ? ((-(arr_20 [i_6] [i_6] [i_1] [i_1] [i_6]))) : -1));
                            }
                        }
                    }
                    var_17 = (arr_11 [i_1] [i_1] [9] [i_1]);
                }
            }
        }
        var_18 -= -32765;
        var_19 *= (((~4294967282) <= ((((var_1 / -26002) ? var_9 : ((0 * (arr_12 [i_1] [i_1] [i_1] [i_1] [i_1]))))))));
        arr_23 [i_1] = ((((max(4294967293, var_12))) ? 1 : 36955));
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 7;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 6;i_9 += 1)
            {
                {
                    arr_29 [i_8] [i_1] [i_8] [i_1] = (min(((var_1 ? (3 - -26099) : 920391095)), (arr_14 [i_8] [i_8] [i_9] [i_9])));
                    var_20 = (min(((max(26010, -32755))), 8926956515323776427));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 10;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 10;i_11 += 1)
                        {
                            {
                                var_21 += min((4294967276 & 511220434), ((((arr_18 [i_8] [i_9 + 4] [i_10] [i_11]) ? var_8 : -25987))));
                                var_22 = min((((((var_6 ? var_1 : 376339942)) / (arr_25 [i_8] [i_8])))), (min(4294967290, ((54 + (arr_35 [i_8] [2] [i_8] [i_8]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 13;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 13;i_13 += 1)
        {
            {
                var_23 = (min((((~279219479) ? -25988 : (~4294967274))), -26098));

                for (int i_14 = 3; i_14 < 10;i_14 += 1)
                {
                    var_24 ^= (1830606116 <= var_9);
                    var_25 = var_11;
                }
                /* vectorizable */
                for (int i_15 = 0; i_15 < 13;i_15 += 1)
                {
                    var_26 = (arr_1 [i_15]);
                    var_27 *= ((var_2 ? 1 : (arr_47 [i_13] [i_13] [0] [i_13])));
                    arr_50 [i_15] [i_15] [i_15] [i_13] = (~var_5);
                    arr_51 [i_12] [i_12] [i_12] = ((+((var_11 ? (arr_42 [i_12] [i_12]) : (arr_47 [i_15] [i_15] [i_15] [i_15])))));
                    var_28 ^= (((arr_43 [i_12] [i_12]) * var_10));
                }
                var_29 += ((var_1 << ((((((-26004 ? (arr_38 [i_12]) : -26099)) + 90)) - 3))));
            }
        }
    }
    #pragma endscop
}

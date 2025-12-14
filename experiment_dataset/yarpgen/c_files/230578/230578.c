/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230578
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_16 = (min(((-((-102 ? 127 : 304)))), (arr_2 [i_0])));
                arr_4 [i_0] [i_0] [i_1] = -1516875418;

                /* vectorizable */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    arr_8 [i_0] [2] [i_1] [2] = 1;
                    var_17 &= ((127 < ((1 ? -24942 : 79))));

                    for (int i_3 = 3; i_3 < 17;i_3 += 1)
                    {
                        var_18 += (arr_5 [i_1] [i_3 + 3]);
                        var_19 = (max(var_19, var_3));
                    }
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        var_20 = (arr_9 [i_1] [i_1] [i_2]);
                        arr_13 [i_4] [i_4] [15] [i_2] [i_0] [i_0] = (((-(arr_9 [i_0] [i_0] [i_0]))));
                    }
                }

                /* vectorizable */
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 4; i_7 < 18;i_7 += 1)
                        {
                            {
                                var_21 = ((55079 ? 1 : 14374));
                                var_22 = (((var_8 ? 26824 : 8388607)));
                                arr_20 [i_7 - 4] = 215;
                                var_23 ^= 13260742441253155959;
                            }
                        }
                    }
                    arr_21 [i_0] [i_0] [8] = ((!(((var_9 ? 14372 : var_8)))));
                }
                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    var_24 = (-8388607 % 11535);
                    var_25 = (min(238, 194));
                    var_26 = (((((((min(var_0, 158))) + ((-(arr_10 [i_8] [i_1] [i_8] [i_8])))))) ? ((min(var_15, (arr_10 [i_0] [i_0] [i_8] [i_8])))) : 105));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 20;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 20;i_10 += 1)
                        {
                            {
                                var_27 = ((((min(-906557926, ((~(arr_28 [i_0] [i_0] [i_0] [i_0] [6] [5] [i_0])))))) ? (arr_5 [i_0] [i_0]) : 18446744073709551615));
                                var_28 ^= 54027;
                                var_29 = (((max((~1516875418), ((var_15 ? var_1 : var_13)))) == 0));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 20;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 20;i_12 += 1)
                    {
                        {
                            arr_36 [i_0] [i_0] [i_1] [i_0] [i_0] = (((((arr_14 [i_0] [i_1] [i_1]) && (3878364774 || 129))) ? ((0 ? (arr_3 [14] [14]) : 1)) : (arr_7 [i_0] [i_0] [i_0])));
                            var_30 -= (min(62, (max(((min((arr_1 [i_1]), var_0))), (min(1, 18446744073709551609))))));
                            var_31 = (min(var_31, (((((~(!1669118393018523985))) < ((-(~var_4))))))));
                            arr_37 [i_12] [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_7 [i_1] [i_11] [8]);
                            var_32 = (arr_33 [i_11] [i_11] [i_0] [i_0]);
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_13 = 2; i_13 < 9;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 12;i_14 += 1)
        {
            for (int i_15 = 1; i_15 < 11;i_15 += 1)
            {
                {
                    arr_46 [i_13] = (((arr_33 [i_13] [i_13 - 2] [i_13] [i_13 - 2]) == (arr_44 [i_13] [i_14] [4])));
                    var_33 = ((((62 & (~1))) ^ 207));
                    var_34 ^= (2120752133 - 1);
                }
            }
        }
    }
    var_35 ^= var_7;
    var_36 = 58156;
    var_37 |= ((231 ? (-9223372036854775807 - 1) : 9));
    #pragma endscop
}

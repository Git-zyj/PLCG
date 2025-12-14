/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249455
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_19 = ((((min((arr_0 [i_0] [i_1 + 1]), 1263746984))) ? (((-1161536446 / -126) ? ((var_5 - (arr_2 [i_0]))) : var_6)) : 0));
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_13 [i_1] [i_1] = ((var_14 ? (~54476) : 0));
                            var_20 = (arr_1 [11]);
                            var_21 = ((-16 > (-32767 - 1)));
                            var_22 = (max(var_22, (((0 ? 17002655255007042762 : ((((-2147483646 < var_14) & (arr_12 [i_3 + 1] [i_3 - 1] [i_3 - 1] [i_3 - 1])))))))));
                        }
                    }
                }
                var_23 ^= var_8;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 1; i_4 < 8;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 7;i_8 += 1)
                        {
                            {
                                var_24 = (min(var_24, (((1830871835 ? -95 : 22)))));
                                arr_27 [i_4] [i_4 + 3] [i_4] [i_4 + 3] [i_7] [0] = (((2172440970 ? 32767 : -610100415)));
                            }
                        }
                    }
                    var_25 = (max(var_25, -16070));
                    arr_28 [i_4] = 10456197219693069365;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_9 = 2; i_9 < 16;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 17;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                {
                    var_26 = (min(var_26, ((max(4248952810081361523, (-32767 - 1))))));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 17;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 17;i_13 += 1)
                        {
                            {
                                var_27 |= ((((19647 ? ((818905158 ? 430490555 : 8930988932639867853)) : (arr_41 [i_9] [i_9] [i_11] [i_9] [i_13]))) * (((-((4294967283 ? (arr_29 [i_9]) : -791440530)))))));
                                arr_43 [i_9] [i_10] [i_9 - 2] = var_7;
                                var_28 ^= 39186;
                                var_29 = ((-(arr_34 [i_11] [14] [i_13])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 1;i_14 += 1)
                    {
                        for (int i_15 = 2; i_15 < 14;i_15 += 1)
                        {
                            {
                                arr_49 [i_10] [i_11] [i_11] [i_10] [i_10] = (~1257166219);
                                var_30 = (max(var_30, 24616));
                                arr_50 [i_10] = var_8;
                                var_31 |= 1;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_16 = 2; i_16 < 16;i_16 += 1)
                    {
                        for (int i_17 = 1; i_17 < 15;i_17 += 1)
                        {
                            {
                                var_32 = (min(var_32, (arr_40 [i_9] [i_9] [i_11] [12] [i_16])));
                                var_33 = (min(var_33, (1 > 661)));
                            }
                        }
                    }
                    arr_57 [i_9] [i_9] [i_9] [2] &= var_14;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_18 = 2; i_18 < 18;i_18 += 1)
    {
        for (int i_19 = 0; i_19 < 20;i_19 += 1)
        {
            for (int i_20 = 4; i_20 < 18;i_20 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_21 = 0; i_21 < 20;i_21 += 1)
                    {
                        for (int i_22 = 2; i_22 < 19;i_22 += 1)
                        {
                            {
                                var_34 ^= ((0 != (max(1761442131, 7485767523046082969))));
                                var_35 -= (max(18446744073709551615, (min(12603821541933811268, (-9223372036854775807 - 1)))));
                                var_36 ^= (arr_72 [i_22] [i_21] [13] [i_19] [i_19] [i_18 - 1]);
                            }
                        }
                    }
                    var_37 = 876450487;
                }
            }
        }
    }
    #pragma endscop
}

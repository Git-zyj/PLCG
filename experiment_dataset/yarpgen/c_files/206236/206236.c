/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206236
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= ((3179305089 ? ((~(min(1115662216, 1115662207)))) : 1));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_14 = (max(var_14, (1144554613 / 1)));
                    arr_9 [i_0] [i_1] [5] = ((((~(arr_4 [5] [i_0]))) * (arr_0 [9] [9])));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        var_15 = (max((min(-1115662206, (max(3179305089, 1)))), 3623027209));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 15;i_5 += 1)
            {
                {
                    var_16 = (~3623027209);
                    var_17 = (arr_16 [i_3] [i_3]);
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            {
                                arr_22 [i_3] = ((((max((max((arr_21 [i_3] [1] [1] [i_5 + 1] [i_3]), (arr_10 [i_3]))), (arr_12 [i_3] [12] [i_5 - 1])))) ? (((((~(arr_19 [i_4] [i_4] [i_4] [i_6])))) ? (arr_19 [i_5 + 1] [i_5 - 1] [i_5 - 1] [i_5 + 1]) : (arr_21 [i_3] [i_5 - 1] [i_4] [i_4] [i_3]))) : (max((((-(arr_18 [i_6] [i_6])))), (((arr_10 [i_3]) | (arr_19 [i_3] [i_5 - 1] [i_5 - 1] [i_3])))))));
                                var_18 &= -9223372036854775806;
                                var_19 = (min(var_19, (((+(((arr_12 [i_4] [i_4] [i_5 - 1]) ? (arr_12 [i_6] [i_5 - 1] [i_5 - 1]) : (arr_12 [i_6] [i_6] [i_5 - 1]))))))));
                                var_20 -= (arr_16 [i_3] [i_5]);
                            }
                        }
                    }
                }
            }
        }
        var_21 *= (max(61440, 1115662207));
        arr_23 [i_3] [i_3] = (((min((arr_18 [i_3] [12]), (arr_18 [i_3] [i_3])))) ? (((max((arr_18 [i_3] [i_3]), var_3)))) : ((var_9 ? 671940087 : (arr_18 [i_3] [i_3]))));
    }
    for (int i_8 = 0; i_8 < 22;i_8 += 1)
    {
        arr_27 [i_8] = (min((((arr_25 [i_8]) ? (arr_24 [i_8]) : (arr_24 [i_8]))), (arr_24 [3])));
        arr_28 [i_8] = (max((min(249, 1)), (!1)));
        var_22 = (min(var_22, (((var_5 != (759287152 & -16613))))));
    }
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        var_23 = ((((arr_25 [i_9]) ? (arr_31 [i_9] [i_9]) : (arr_25 [i_9]))));
        var_24 = ((((3698915322 ? (((-(arr_26 [i_9])))) : (arr_29 [i_9] [i_9]))) > (max((((arr_25 [i_9]) ? (arr_26 [i_9]) : 2058614019)), (arr_30 [i_9])))));
    }
    for (int i_10 = 0; i_10 < 19;i_10 += 1)
    {
        var_25 = (min(var_25, var_7));
        var_26 -= (((arr_33 [0] [0]) + -3396941234));
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28700
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= ((((min((3 + 48), 13557))) * (min((min(var_2, var_6)), var_4))));
    var_11 &= (((~var_4) ? ((var_6 ? (~var_0) : ((var_4 ? var_4 : 13557)))) : ((((~var_2) ? (((min(var_1, -56)))) : ((var_0 ? 2906616022 : var_0)))))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = (((((-34 ? var_8 : (arr_1 [i_0])))) ? 0 : (arr_1 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] = (arr_4 [i_0]);
                                var_12 = (max(var_12, (((13557 != ((0 | (arr_1 [i_1]))))))));
                                arr_15 [i_3] [i_4] [i_3] [i_4] [i_0] [i_3] = 129;
                            }
                        }
                    }
                    var_13 = (((~var_0) / 127));

                    for (int i_5 = 1; i_5 < 18;i_5 += 1)
                    {
                        var_14 = (max(var_14, ((((arr_1 [i_0 + 1]) + (arr_1 [i_0 + 1]))))));

                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            var_15 = (max(var_15, (((((4294967295 % (arr_9 [i_2] [i_2] [i_2] [i_5]))) >= (arr_1 [i_1 + 1]))))));
                            var_16 = (((arr_1 [i_5]) ? (arr_8 [i_0] [i_5 - 1] [i_1 - 1] [i_0 + 2]) : (arr_8 [i_0] [i_5 + 4] [i_1 - 1] [i_0 + 1])));
                            var_17 = (max(var_17, -48));
                            arr_20 [i_0] [i_1] [i_0] [10] [i_6] = ((-((1 ? var_6 : (arr_7 [i_0] [i_1 + 1] [i_0] [i_0])))));
                            var_18 = (((arr_16 [i_6] [i_5 + 3] [i_1 - 1] [i_0 + 2] [i_0] [i_0 + 2]) | (arr_16 [i_6] [i_5 + 1] [i_1 + 1] [i_1] [i_1] [i_0 + 2])));
                        }
                    }
                    for (int i_7 = 2; i_7 < 20;i_7 += 1)
                    {
                        arr_24 [i_0] [1] [i_2] [i_0] [i_2] [1] |= ((1 ? var_0 : ((1 ? 1088975752 : (arr_2 [i_2] [i_7])))));
                        arr_25 [i_0] [i_1] [i_2] [i_0] = ((((((arr_4 [i_0]) * (arr_19 [i_0] [i_0] [i_1] [i_2] [i_2])))) ? -16788 : (arr_10 [i_0])));
                    }
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        var_19 = (((!(arr_4 [i_0]))) ? (arr_18 [i_0] [i_0]) : (arr_26 [i_1 + 1] [i_0 - 1]));
                        var_20 ^= (((arr_13 [i_1] [i_2] [i_1] [i_1] [i_0]) ? 0 : (arr_4 [i_2])));
                    }

                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        var_21 |= (arr_9 [i_0 + 1] [i_2] [i_1] [i_0 + 1]);
                        var_22 = (min(var_22, (((((~(arr_8 [i_2] [i_0] [0] [i_9]))) % var_9)))));
                    }
                }
            }
        }
    }
    for (int i_10 = 3; i_10 < 21;i_10 += 1)
    {
        arr_34 [i_10] = (~0);
        arr_35 [i_10] = ((!(arr_33 [i_10] [i_10])));
        arr_36 [i_10] [i_10] = ((min((min(1125899638407168, (arr_33 [i_10] [i_10]))), -56)));
        arr_37 [i_10] = (!1);
        var_23 = (max(var_23, (((-((~((57 ? (arr_33 [3] [3]) : (arr_32 [i_10]))))))))));
    }
    for (int i_11 = 0; i_11 < 19;i_11 += 1)
    {
        arr_40 [i_11] = var_8;
        /* LoopNest 3 */
        for (int i_12 = 1; i_12 < 18;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {
                    {
                        var_24 = (((!28) << (((min(((-(arr_30 [i_13]))), ((min(23, (arr_42 [i_13] [i_12])))))) + 42474))));
                        arr_48 [i_11] [i_12] [i_11] [i_11] [i_12 + 1] = ((+(min((arr_19 [i_12] [i_12 - 1] [i_12 + 1] [i_12 + 1] [i_14]), 1125899638407170))));
                        var_25 = (max(var_25, -1));
                        var_26 = (min(var_26, ((min(((((arr_12 [i_11] [i_12 + 1] [i_12 - 1] [i_12 - 1] [i_12 - 1]) - (arr_12 [i_12] [i_12 - 1] [i_12 + 1] [i_12 + 1] [i_13])))), (1 / 1125899638407168))))));
                    }
                }
            }
        }
    }
    var_27 = ((min((127 % var_3), var_4)) << var_5);
    var_28 = min(-var_1, (!var_1));
    #pragma endscop
}

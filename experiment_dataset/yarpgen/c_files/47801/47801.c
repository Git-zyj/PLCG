/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47801
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = (max((((arr_0 [i_0]) ? (((arr_0 [i_0]) ? 65 : var_9)) : (((max(45856, 19680)))))), ((min((arr_0 [i_0]), (arr_1 [i_0] [i_0 + 1]))))));
        var_15 += -61;
        var_16 = ((((9 << (12172778863015211043 - 12172778863015211030)))) ? (arr_1 [i_0 - 2] [i_0 - 2]) : (((~var_5) | (((arr_0 [i_0]) ? var_8 : var_6)))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_17 = 0;
        arr_5 [i_1] = (min((arr_4 [14]), (((max((arr_4 [i_1]), 19680)) << (!45855)))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                {
                    arr_12 [i_3] [i_2] [i_1] [i_1] = ((((min(18446744073709551615, (((162 << (255 - 233))))))) ? (~-5125) : (max((((616005302 << (var_0 - 216)))), (((arr_9 [i_1] [i_1] [i_1] [i_1]) << (5210551648747627557 - 5210551648747627549)))))));
                    arr_13 [i_1] [i_2] [i_2] [i_3] = (-(arr_3 [i_2] [i_1]));
                    arr_14 [i_3] [1] = (((17594048065614538482 ? 61 : 5145)));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 21;i_4 += 1)
    {
        var_18 = var_11;

        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                for (int i_7 = 3; i_7 < 22;i_7 += 1)
                {
                    {
                        var_19 -= ((4294967295 ? (240 >= 616005276) : -616005302));

                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            arr_28 [i_4] [i_7] [4] = (132 | -21);
                            var_20 = arr_24 [i_4];
                            var_21 = (~12525115210409287432);
                            arr_29 [i_4] [i_5] [i_7] [i_7 + 2] [i_7] = (33 << var_8);
                        }
                        for (int i_9 = 0; i_9 < 24;i_9 += 1)
                        {
                            var_22 = var_2;
                            arr_34 [i_9] [i_7] [4] [i_7] [i_4 + 2] = 28;
                            var_23 = (((((var_6 ? var_10 : var_14))) ? -616005283 : (!var_8)));
                        }
                    }
                }
            }
            var_24 = (((arr_32 [i_5] [i_5] [7] [i_4] [i_4] [i_4]) | (((arr_19 [i_4 - 1]) ? (arr_32 [i_5] [i_5] [i_5] [6] [i_4 - 2] [6]) : var_0))));
        }
    }
    /* vectorizable */
    for (int i_10 = 3; i_10 < 8;i_10 += 1)
    {
        arr_37 [i_10] = ((19680 ? -1152921504606846976 : (arr_33 [i_10 - 2] [7] [4] [i_10 + 2] [i_10] [6] [21])));
        /* LoopNest 3 */
        for (int i_11 = 2; i_11 < 10;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 11;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 11;i_13 += 1)
                {
                    {

                        for (int i_14 = 0; i_14 < 11;i_14 += 1)
                        {
                            arr_50 [i_10] [i_11] [i_11] [i_12] [i_13] [0] = 38076;
                            var_25 |= (1282633899 | 45865);
                            var_26 = (((arr_27 [i_11] [i_10] [i_11]) ? ((12552 ? (arr_35 [i_11]) : (arr_18 [i_11] [i_12] [i_13]))) : (!-120)));
                        }
                        var_27 &= var_10;
                    }
                }
            }
        }
    }
    var_28 = var_3;
    var_29 = 45865;
    #pragma endscop
}

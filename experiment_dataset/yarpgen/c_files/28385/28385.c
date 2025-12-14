/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28385
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = min(var_8, 6152);
    var_18 = 15034;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] [i_0] |= ((15034 - ((((min(var_16, var_1))) ? -15034 : (15034 * 17891409259153200766)))));
        var_19 = ((-(((arr_0 [i_0]) ? (!var_6) : ((99 ? var_14 : 511))))));
    }

    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                {
                    arr_9 [i_2] = (~0);
                    arr_10 [i_1] [i_2] [i_3] &= ((~(max((min(32, 906384693)), (((1047552 ? (arr_8 [i_3] [i_2] [i_1] [i_1]) : 61013)))))));
                }
            }
        }
        arr_11 [i_1] = (arr_5 [i_1]);
        var_20 += 1739830229;
    }
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                {

                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        arr_23 [16] [i_6] [i_6] [16] |= ((min((arr_16 [i_4] [i_4]), 1)));

                        for (int i_8 = 0; i_8 < 20;i_8 += 1) /* same iter space */
                        {
                            var_21 *= 1132186846;
                            var_22 = (min((min((arr_24 [i_7] [i_5] [i_6] [i_5] [i_8]), -1330650688)), ((((arr_24 [i_7] [i_5] [i_6] [i_7] [i_7]) < (arr_24 [i_7] [i_5] [i_6] [i_7] [8]))))));
                            var_23 &= (((min(6177898452223771853, (arr_12 [i_4]))) * ((-var_12 << (((max(2345541539, 2430297809)) - 2430297750))))));
                        }
                        for (int i_9 = 0; i_9 < 20;i_9 += 1) /* same iter space */
                        {
                            arr_28 [i_4] [i_9] [i_6] [i_9] [i_7] [i_5] [i_9] = 1996344273;
                            var_24 = (!0);
                        }
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            arr_31 [i_7] = ((!((!((((arr_18 [i_4]) % var_2)))))));
                            var_25 = ((-(~8192)));
                        }
                        var_26 = (max(var_26, (~0)));
                    }
                    for (int i_11 = 0; i_11 < 20;i_11 += 1)
                    {
                        arr_34 [i_5] [i_5] [i_5] [i_4] = 34712;
                        arr_35 [i_4] [i_5] [i_6] [i_4] [i_6] = (min((arr_17 [i_4]), (((-(arr_15 [i_4]))))));
                    }
                    for (int i_12 = 0; i_12 < 20;i_12 += 1)
                    {
                        var_27 = 2287934269;
                        var_28 = (9749 ? (min(0, 14345)) : 57443);
                        arr_38 [i_4] = 45022;
                    }
                    var_29 &= 20129;

                    for (int i_13 = 0; i_13 < 20;i_13 += 1)
                    {
                        var_30 = (((-100 ? (var_0 * var_7) : var_3)));
                        var_31 = (min((((27936 > 95) ? (((8855478072872074103 ? 1 : 1047562))) : (1 & var_12))), var_12));
                        var_32 -= ((min((((var_4 ? var_16 : var_0))), 820642044632622576)));
                    }
                    for (int i_14 = 1; i_14 < 19;i_14 += 1)
                    {
                        arr_44 [i_14] [i_14] [i_14] [i_4] = (((((max(8124377027294879348, 3502869545))) ? ((var_2 ? 99 : -2)) : var_15)));
                        arr_45 [i_4] [i_5] [i_14] [i_14] = (max((((792097752 || 9591266000837477506) ? (-1047537 % var_3) : var_1)), 1));
                    }
                    arr_46 [i_4] [i_5] [9] = (arr_36 [i_4] [i_4] [2] [i_6]);
                }
            }
        }
        var_33 = (min((((arr_29 [i_4] [i_4] [i_4] [i_4] [i_4]) / 656675854)), (((var_10 ? ((min(1, 186))) : (min(var_1, (arr_14 [i_4]))))))));
        var_34 = (arr_21 [i_4] [i_4] [i_4]);
        var_35 = 1;
    }
    #pragma endscop
}

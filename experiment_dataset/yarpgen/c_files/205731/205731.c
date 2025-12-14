/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205731
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] = (((((43 + ((max(245, var_10)))))) ? ((((1 ? 0 : (arr_0 [i_0] [i_0]))) >> (-var_13 + 253))) : (min((arr_0 [i_0] [i_0]), (arr_1 [i_0])))));
        arr_3 [19] = ((((min(var_13, var_17))) ? var_17 : ((max((max(var_6, var_0)), (arr_1 [i_0]))))));
    }
    for (int i_1 = 1; i_1 < 14;i_1 += 1)
    {
        arr_6 [i_1 + 1] = ((((((min(var_0, 1))) ? (((arr_4 [i_1 + 1] [i_1]) / -115)) : (var_2 << 1)))) ? (arr_5 [i_1 + 3] [i_1 - 1]) : ((31997 ? (arr_5 [i_1] [i_1 - 1]) : (arr_4 [i_1] [i_1 - 1]))));
        arr_7 [9] [i_1] = ((var_8 ? ((min((!var_16), (!17495)))) : (arr_1 [i_1 + 2])));
        var_19 = (max((~var_2), (arr_4 [i_1] [i_1])));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    {
                        var_20 += ((max(var_11, 5509)));
                        var_21 = (max(var_21, ((max(-2, (((((arr_1 [i_1 + 3]) + 2147483647)) >> (((arr_1 [i_1 - 1]) + 133)))))))));
                        var_22 = (min(0, 8359490237161620382));
                    }
                }
            }
        }
        arr_16 [i_1] [i_1] = (arr_14 [i_1 - 1] [i_1 + 1]);
    }
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        var_23 = (max(var_23, (((((((12157 ? (arr_18 [i_5]) : var_7))) ? (((max(var_14, 103)))) : (max(1, var_11))))))));
        /* LoopNest 2 */
        for (int i_6 = 3; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 12;i_7 += 1)
            {
                {
                    arr_25 [i_5] [i_7] = (((min((arr_10 [i_5]), ((var_12 << (((arr_4 [i_5] [i_6]) - 3865819055785544700)))))) ^ (((var_13 || (arr_12 [i_5] [i_5] [i_5]))))));
                    arr_26 [i_5] [i_7] = (((1 & var_18) << (((arr_9 [i_5] [i_6 - 1]) - 112))));
                }
            }
        }
        var_24 = (((((-(arr_12 [i_5] [i_5] [i_5])))) ? 62 : ((240055944 ? 1876010992962710044 : 3640257153623657377))));

        for (int i_8 = 0; i_8 < 16;i_8 += 1)
        {
            arr_29 [i_5] [i_8] [i_8] = (((((((arr_14 [i_8] [i_5]) || (arr_10 [i_5]))))) * (max(var_0, (arr_14 [i_5] [i_8])))));
            var_25 = ((~((((((var_12 ? -64 : var_18)) + 2147483647)) << (((((arr_10 [i_8]) + 306463104)) - 18))))));
        }
        for (int i_9 = 3; i_9 < 12;i_9 += 1)
        {
            arr_32 [i_5] [i_9] [i_9 + 1] = (arr_19 [14]);
            arr_33 [i_5] [i_9 - 1] = (~-679218984);
        }
        for (int i_10 = 2; i_10 < 12;i_10 += 1)
        {
            var_26 = (((var_6 - var_15) / var_0));
            arr_36 [i_10] [i_10] = (arr_13 [16] [i_10] [i_5] [i_5]);
            arr_37 [i_5] [i_10] [i_10] = ((((min((arr_5 [i_10 + 2] [i_10 + 1]), var_10))) ? (((arr_20 [i_5] [i_10 + 2]) & -88)) : (arr_20 [3] [i_10 + 1])));
        }
        var_27 += ((var_13 ? 120 : ((44 >> (((arr_9 [i_5] [i_5]) - 117))))));
    }
    var_28 = (max((min((-1 < -16616), var_4)), -113));
    var_29 *= (min((((var_13 < var_11) ? ((1 ? 18446744073709551609 : 0)) : var_3)), (((2147483647 <= ((min(-1, 1))))))));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21212
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_8;
    var_17 = ((var_2 ? ((var_9 ? var_11 : var_5)) : ((((((var_12 ? 2131489776 : var_1))) ? var_4 : ((var_7 ? var_2 : var_4)))))));

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = ((-(max((max(var_8, 4294967295)), 0))));
        arr_5 [1] = (((min(16352, 4294967295))) ? ((((var_0 ? var_9 : 0)) ^ -221)) : ((min(var_9, -1))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_8 [i_1] |= (arr_3 [i_1]);

        for (int i_2 = 1; i_2 < 16;i_2 += 1)
        {
            arr_13 [i_2 + 3] = (((arr_12 [i_1] [i_1] [i_2 + 2]) ? (arr_9 [i_2] [i_2 + 3] [i_2]) : ((var_10 ? 15063 : var_13))));
            arr_14 [i_1] = 13025;
            var_18 += (arr_10 [i_1] [16] [i_2]);
        }
        for (int i_3 = 1; i_3 < 18;i_3 += 1)
        {
            var_19 ^= ((-((var_5 ? 4294967295 : (arr_3 [i_1])))));
            arr_17 [i_1] [i_3] = (((((-(arr_9 [i_1] [i_1] [i_3])))) ? ((~(arr_7 [i_1]))) : (((~(arr_9 [i_1] [i_3] [i_1]))))));
            var_20 = var_1;
        }
        for (int i_4 = 4; i_4 < 18;i_4 += 1)
        {
            var_21 *= ((~(arr_9 [i_4 - 2] [i_4 + 1] [i_4 - 2])));
            var_22 = (min(var_22, (((arr_18 [i_1]) >= (arr_20 [i_1])))));
            var_23 = ((4294967295 << (28625 - 28623)));
            var_24 = var_11;
        }
    }
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        arr_25 [i_5] = (((arr_24 [i_5] [i_5]) ? ((var_6 ? 39734 : 1762413775545893193)) : (((min((arr_24 [i_5] [i_5]), 31))))));
        arr_26 [11] [i_5] = 4294967295;
        var_25 *= (((((+(((arr_1 [i_5]) ? (arr_15 [i_5]) : 2284500713))))) ? ((max(((255 ? var_9 : var_14)), (var_9 != var_1)))) : ((((max(var_13, 69))) ? -4082939489917265203 : 0))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 21;i_6 += 1)
    {
        var_26 = (((arr_28 [i_6] [1]) ? var_8 : 255));
        arr_29 [i_6] [9] = ((1 ? (arr_28 [i_6] [i_6]) : -200845786762350544));
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 19;i_7 += 1)
        {
            for (int i_8 = 3; i_8 < 19;i_8 += 1)
            {
                {
                    arr_36 [i_6] [i_6] [i_7] = var_15;
                    arr_37 [i_7] = ((57019 | (arr_28 [i_6] [i_6])));
                    var_27 -= ((-(((arr_33 [i_8] [i_7]) - var_9))));
                    arr_38 [i_7] [i_7] = (!var_14);
                }
            }
        }
    }
    var_28 = (min(var_28, -0));
    var_29 = var_4;
    #pragma endscop
}

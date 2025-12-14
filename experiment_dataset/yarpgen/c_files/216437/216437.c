/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216437
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= ((var_6 ? var_7 : -1));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_2] [i_2] [i_2] = (arr_2 [i_2 - 3] [i_1]);
                    var_12 = ((!(((1022 << (((~var_5) + 18228)))))));
                    arr_12 [i_0] [i_1 - 1] [i_1] [i_2] = (((max(((((arr_3 [i_0] [i_2]) | var_4))), (arr_10 [i_0] [i_0])))) ? (4294967295 || var_5) : (((~0) ? (!2261933311) : (!-22789))));
                    arr_13 [i_0] [i_2] [i_2] = ((((((((arr_8 [i_0] [15] [13]) ? var_9 : (arr_2 [i_1] [i_2]))) | (~var_0)))) && ((((((arr_9 [6] [i_1 + 3] [i_1]) ? (arr_5 [i_0] [i_0]) : var_1)) - (arr_10 [i_1 - 2] [i_2 + 1]))))));
                    var_13 &= ((((!(arr_7 [i_1] [i_1] [i_2 - 2])))));
                }
            }
        }
    }

    for (int i_3 = 2; i_3 < 21;i_3 += 1)
    {
        var_14 = (((arr_15 [i_3]) >= (((arr_14 [6] [i_3]) ? (arr_15 [i_3 - 2]) : -23663))));
        var_15 = var_3;
        var_16 = (max(var_16, (((((((arr_15 [i_3 - 2]) % (arr_15 [i_3 - 2])))) && ((((((arr_15 [i_3]) / var_0)) >> (((((arr_15 [i_3]) ? var_9 : -7675)) - 228005096))))))))));
        arr_16 [12] = (((((-23661 ? (arr_14 [2] [i_3 + 1]) : (arr_14 [i_3 - 1] [i_3])))) ? (((arr_14 [i_3] [i_3]) ? (arr_14 [i_3 + 1] [i_3]) : (arr_14 [i_3] [18]))) : (((max(-112, 3))))));
        var_17 |= -23663;
    }
    for (int i_4 = 2; i_4 < 16;i_4 += 1)
    {
        arr_21 [i_4] = (((arr_20 [i_4] [i_4]) ? ((((23050 ? -23663 : 212)) / var_4)) : (((6291456 | 237) ? 23050 : -23053))));
        arr_22 [i_4] [i_4] = (((((max(var_0, -758264275)) + 2147483647)) << (23070 - 23070)));
        var_18 |= ((((31 ? (arr_20 [i_4] [i_4]) : -var_0)) - var_8));
        arr_23 [i_4] = arr_20 [i_4] [i_4];
    }
    for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
    {
        var_19 = (((arr_15 [i_5]) ? -23053 : (((arr_24 [i_5]) ? -23057 : (arr_17 [i_5])))));
        arr_27 [0] = var_2;
        var_20 *= (((((((arr_19 [i_5]) ? var_6 : -6098))) ? (min(var_9, var_7)) : var_5)));
        var_21 = ((-(max((arr_19 [16]), ((-(arr_24 [i_5])))))));

        /* vectorizable */
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            var_22 &= (((arr_29 [i_5] [i_6] [i_6]) <= (arr_29 [i_5] [i_6] [i_5])));
            arr_30 [i_5] = ((~(arr_14 [i_5] [i_5])));
        }
    }
    for (int i_7 = 0; i_7 < 18;i_7 += 1) /* same iter space */
    {
        var_23 *= ((4294967272 ? ((((var_6 ? 15 : 369327726)) / (arr_15 [i_7]))) : (((arr_20 [i_7] [i_7]) ? ((-23050 ? (arr_14 [i_7] [i_7]) : (arr_25 [i_7] [i_7]))) : 461))));

        /* vectorizable */
        for (int i_8 = 0; i_8 < 18;i_8 += 1)
        {
            arr_35 [i_8] [6] = ((((~(arr_25 [i_7] [i_8]))) / ((((arr_28 [i_7] [i_8] [i_7]) ? (arr_26 [i_7]) : (arr_32 [0]))))));
            var_24 *= (((arr_29 [i_7] [i_8] [i_8]) ? (arr_29 [i_7] [i_8] [16]) : 2147483647));
            var_25 = (8 & -55);
            var_26 &= (((((arr_32 [i_7]) + 2147483647)) >> (((arr_34 [i_7] [i_8]) + 19))));
        }
        var_27 += (arr_19 [i_7]);
    }
    #pragma endscop
}

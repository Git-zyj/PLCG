/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247736
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= var_9;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_12 *= ((((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))) || 2266752471));
        var_13 = ((+(max((-5 > 232), 1214640952))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    var_14 = (min(var_14, 111));
                    arr_8 [i_2] [i_1] [i_2] [i_0] = ((~(max(2343149900, var_4))));
                    arr_9 [i_2] [i_1] = 254;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 3; i_3 < 16;i_3 += 1)
    {
        var_15 = (min(var_15, ((((arr_11 [i_3 - 2] [i_3 - 1]) - 262143)))));

        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            arr_16 [i_4] [i_4] [i_3] = 86;
            var_16 = ((31 ? (-26606 > var_1) : (arr_14 [i_3 - 3])));
            var_17 ^= -var_3;
        }
        for (int i_5 = 3; i_5 < 16;i_5 += 1)
        {
            var_18 = (min(var_18, (((1744154537 ? var_9 : 32)))));
            var_19 ^= 2;
            var_20 = (((((197 ? 1281444068 : 99))) ? (arr_17 [i_5]) : (arr_14 [i_5])));
            arr_20 [i_5] [i_5] [i_5] = ((-((2366664678 ? var_10 : (arr_12 [8])))));
        }
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            arr_25 [i_3 + 2] = (((~var_7) - 196));
            var_21 *= (((((arr_17 [i_3]) ? 41 : 3536788896)) == 107));
            var_22 *= (((arr_23 [9] [i_3 - 1] [i_3 + 1]) > var_5));
        }
        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            var_23 = (max(var_23, (((((((arr_15 [i_7] [16] [i_7]) ? var_3 : var_8))) ? (var_6 - 252) : ((114 ? var_4 : (arr_26 [i_3]))))))));
            var_24 *= ((4294967279 == (~var_2)));
            var_25 *= (((arr_19 [i_3] [i_7] [i_3 + 2]) ? (~var_2) : var_1));
            arr_29 [i_3] [i_7] = ((~(-127 - 1)));
        }
        var_26 = ((((((arr_13 [i_3]) ? var_4 : 37))) ? (((115 ? -126 : 127))) : var_4));
    }
    #pragma endscop
}

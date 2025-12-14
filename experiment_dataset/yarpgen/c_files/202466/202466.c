/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202466
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = -86;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (arr_1 [i_0]);
        var_17 = (((var_15 ? (arr_1 [i_0]) : -31830)));
    }
    var_18 |= var_12;

    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_6 [i_1] |= (arr_3 [i_1]);
        var_19 += ((-(min(-6049116458690054640, 21998))));
        arr_7 [i_1] [i_1] = ((1 ? (arr_4 [i_1]) : ((~(arr_4 [i_1])))));

        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    {
                        var_20 = -1885794879;

                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            var_21 += 31817;
                            arr_17 [8] [17] [1] [i_4] [i_5] [i_5] [i_5] = (((((-2088036270 ? (arr_16 [i_2] [i_2] [i_3] [1] [i_3 - 1] [i_4]) : (arr_14 [i_3 - 1])))) >= (6049116458690054639 ^ -31853)));
                            var_22 = (min(var_22, (((((((((arr_13 [i_5]) ^ (arr_3 [i_4])))) ? (arr_3 [i_3 + 1]) : (((arr_12 [i_2]) ? var_5 : -31840)))) != (arr_10 [i_3 + 1] [i_3 + 1] [i_1]))))));
                            var_23 -= (arr_14 [i_4]);
                            arr_18 [i_5] = ((~((~((((arr_8 [4] [i_2]) != -60)))))));
                        }
                    }
                }
            }
            var_24 = (max(var_24, var_10));
            var_25 *= (max((((arr_16 [i_1] [i_1] [i_1] [11] [i_1] [i_1]) * (arr_15 [i_2] [i_2] [i_1] [i_1] [i_1] [i_1]))), ((max((arr_15 [i_2] [i_2] [i_1] [i_1] [i_1] [i_1]), (arr_16 [i_2] [i_1] [i_1] [i_1] [i_1] [i_1]))))));
            var_26 *= (arr_16 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]);
        }
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            var_27 = (max(var_27, (((-((((1867056430863304178 > (arr_12 [i_1]))))))))));
            var_28 ^= ((max(6783, 4294967290)));
            var_29 &= ((((6049116458690054652 ? 18446744073709551615 : var_2)) <= 2222942801));
        }
        /* vectorizable */
        for (int i_7 = 2; i_7 < 22;i_7 += 1)
        {
            var_30 = (((arr_23 [i_7 - 2] [i_7 + 1]) << (((((arr_4 [i_1]) - 65535)) + 38488))));
            var_31 += 1;
        }
    }
    for (int i_8 = 0; i_8 < 17;i_8 += 1)
    {
        arr_27 [i_8] = ((-(max((arr_24 [i_8] [i_8]), (arr_24 [i_8] [i_8])))));
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 17;i_9 += 1)
        {
            for (int i_10 = 3; i_10 < 16;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 17;i_11 += 1)
                {
                    {
                        var_32 ^= (arr_31 [i_9]);
                        arr_36 [i_8] [i_9] [i_8] = ((min(-6049116458690054653, -6099239471376279650)));
                    }
                }
            }
        }
        arr_37 [i_8] = (-(arr_9 [i_8] [i_8] [i_8]));
    }
    /* vectorizable */
    for (int i_12 = 4; i_12 < 14;i_12 += 1)
    {
        var_33 = -6049116458690054632;
        arr_42 [i_12] [i_12] = -1035656168;
        arr_43 [i_12] = ((!(arr_28 [i_12] [i_12 - 2] [i_12 - 1])));
    }
    var_34 = 17592186044415;
    #pragma endscop
}

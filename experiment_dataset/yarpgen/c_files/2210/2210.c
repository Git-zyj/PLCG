/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2210
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            var_10 = (((arr_3 [i_0] [1] [i_1]) - -1));
            arr_6 [i_0] [i_0 + 4] [1] = var_6;
            arr_7 [i_0] [i_0] [i_1] = (((arr_2 [i_0 + 4] [i_0 - 1]) >= (5381898780377020386 % var_1)));
        }
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            arr_10 [i_0] [i_2] [2] = (arr_3 [i_2] [i_2] [i_0 + 4]);
            var_11 = (((((arr_2 [i_0 - 1] [i_0 + 2]) + (arr_2 [i_0 - 1] [i_0 + 2]))) >> (((min((arr_2 [i_0 + 3] [5]), (arr_3 [i_2] [i_2] [i_2]))) - 2992))));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    {
                        var_12 ^= arr_2 [i_0 - 1] [i_2];
                        var_13 = 9223372036854775804;
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_14 *= ((50 ? 75 : -1725375958));
            arr_20 [i_5] [i_0] = (((((arr_0 [11] [i_5]) ? var_2 : var_5)) * (arr_9 [i_0] [i_0])));
            arr_21 [i_5] [i_5] [i_5] = (-2147483647 - 1);
        }

        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            arr_24 [i_0] [i_0] = (arr_19 [i_0 - 2] [i_6]);
            var_15 *= (-(((!(arr_18 [i_0] [i_0] [i_6])))));
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 14;i_7 += 1)
            {
                for (int i_8 = 3; i_8 < 12;i_8 += 1)
                {
                    {
                        var_16 -= (arr_9 [i_8] [2]);
                        var_17 |= arr_0 [i_0 + 1] [i_8];
                        var_18 += ((~(arr_1 [i_0 + 1])));
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_9 = 2; i_9 < 19;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 23;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 23;i_11 += 1)
            {
                {
                    arr_38 [i_9] [i_10] [i_9] [i_9] |= (var_1 - 1536);
                    arr_39 [i_9] [i_9] [i_10] [i_10] = (~var_1);
                    arr_40 [i_9] [i_9] [i_9 - 2] [i_9 + 3] = (min(var_2, (((arr_33 [i_9 + 3]) ? (!2147483647) : ((var_5 ? 33963 : (arr_31 [i_11])))))));
                    arr_41 [i_9] [i_10] [10] = ((~(((arr_36 [i_9 + 3] [i_9 - 1] [i_9 + 4]) ? (arr_31 [i_9 + 3]) : (arr_36 [i_9 + 3] [i_9 - 1] [i_9 + 4])))));
                }
            }
        }
    }
    #pragma endscop
}

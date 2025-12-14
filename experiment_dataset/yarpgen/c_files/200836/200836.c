/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200836
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_19 = var_6;
        var_20 ^= ((((255 + var_9) != 14853003048004572955)));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 13;i_1 += 1)
    {
        var_21 = -2013540306;
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 11;i_4 += 1)
                {
                    {
                        var_22 |= (arr_6 [i_2]);
                        var_23 ^= (!-8);

                        for (int i_5 = 1; i_5 < 13;i_5 += 1)
                        {
                            arr_16 [i_5] [i_4 + 2] [i_4 - 2] [i_5] = ((((((arr_5 [i_1] [i_1 + 1]) ? var_16 : 166))) ? (((arr_3 [i_5]) & -1258628061)) : (arr_8 [i_1] [i_4 - 3] [i_5 + 1] [i_5 + 1])));
                            arr_17 [i_1] [i_2] [i_5] [i_5] = (((arr_10 [i_1 + 1] [i_5 + 1] [i_4 - 1] [i_1 + 1]) ? (arr_1 [i_3 + 1] [i_4 - 3]) : 63));
                            arr_18 [i_5] [i_5] [i_1 - 1] [i_1 - 1] [i_2] [i_5] = (((arr_9 [i_1 + 1] [i_3 + 1] [i_4]) >> (3593741025704978660 - 3593741025704978656)));
                            arr_19 [i_5] [i_5] = (arr_2 [i_1 - 1]);
                        }
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            var_24 = (min(var_24, ((~((((arr_13 [i_1 - 2] [11] [i_1 - 2] [i_4]) > var_6)))))));
                            var_25 &= ((5 ? -2013540306 : -1609993573));
                            var_26 = ((63 ? (arr_2 [i_3 + 1]) : (arr_2 [i_3 - 2])));
                        }
                        for (int i_7 = 3; i_7 < 11;i_7 += 1)
                        {
                            var_27 *= (((arr_14 [i_1 + 1] [i_7] [i_4 - 3] [i_3 + 1] [11] [i_1 + 1]) > (arr_14 [i_3] [i_3 - 2] [i_3] [i_3 - 2] [i_3] [i_1 + 1])));
                            var_28 = var_1;
                            var_29 = var_6;
                            var_30 = (max(var_30, (((~(arr_22 [i_7] [i_4 - 2] [i_3 + 1] [i_3] [i_1 + 1]))))));
                            var_31 = var_5;
                        }
                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            var_32 = var_9;
                            var_33 = ((211 ? var_2 : (arr_2 [i_1 - 1])));
                            arr_28 [i_1] [i_1] [i_1] [i_4] [i_1] = (~(arr_3 [i_4 - 1]));
                        }
                    }
                }
            }
        }
        var_34 = var_9;
        var_35 = ((-(arr_3 [i_1 + 1])));
        var_36 = (min(var_36, (!6)));
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 25;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 25;i_10 += 1)
        {
            {
                var_37 = var_8;
                arr_35 [i_10] &= (~var_12);
            }
        }
    }
    var_38 = (min(var_38, ((((var_0 == (min(var_0, 8191))))))));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232348
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_18 &= (max(((var_2 ? (((~(arr_1 [i_0] [i_0])))) : var_8)), (((max((arr_0 [i_0]), var_12)) ^ ((((arr_3 [11]) ? 0 : var_1)))))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    var_19 = (((arr_3 [i_1]) ? var_16 : 982493867));

                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        var_20 = (arr_2 [i_0] [i_3]);
                        var_21 = var_7;
                        var_22 = ((~(((arr_4 [i_0] [i_0]) ? var_15 : 0))));
                    }
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        var_23 = (~var_13);
                        arr_12 [11] [i_0] = ((+(((arr_11 [i_4]) ? var_12 : (arr_8 [i_0] [11] [i_0])))));
                        arr_13 [i_0] = (~var_1);
                        var_24 &= (((arr_6 [i_1] [i_0]) | (arr_6 [i_2] [13])));
                    }
                    arr_14 [i_0] [i_0] = ((arr_1 [i_1 - 1] [i_0 - 1]) ? ((var_13 ? 2744780808 : (arr_9 [i_2] [i_0] [i_0]))) : 8191);
                    arr_15 [i_0] [i_0] = ((20297 ? (arr_4 [i_1 + 2] [i_2]) : 0));
                    var_25 = (min(var_25, (arr_9 [i_0 - 2] [i_1] [i_1])));
                }
                for (int i_5 = 3; i_5 < 21;i_5 += 1)
                {
                    var_26 ^= (((((~(arr_11 [i_0 + 1])))) ? (((arr_11 [i_0 + 1]) ? (arr_3 [i_0 + 1]) : (arr_11 [i_0 + 1]))) : (max((arr_11 [i_0 + 1]), (arr_3 [i_0 + 1])))));
                    var_27 = (((((((min(9223372036854775807, (arr_10 [i_5 + 1])))) ? (arr_18 [i_5]) : ((3714 * (arr_10 [i_0])))))) ? 50594 : ((14942 ? ((14942 ? 1249624267 : (arr_1 [i_1 - 1] [5]))) : (!var_2)))));
                    var_28 = (~29721);
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 17;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 17;i_8 += 1)
            {
                {
                    var_29 = (~(((arr_23 [i_7] [i_8]) ? var_9 : 3385957949)));
                    var_30 -= ((((-var_3 && (arr_20 [i_6] [14])))));
                }
            }
        }
    }
    var_31 = ((~((var_0 ^ (min(var_15, var_13))))));

    for (int i_9 = 2; i_9 < 8;i_9 += 1)
    {
        var_32 = ((~(((((arr_25 [i_9] [i_9] [3] [5]) + (arr_24 [i_9 + 3] [i_9] [11]))) >> (((min(var_14, 57551039)) - 57551020))))));
        var_33 = (arr_5 [i_9]);
    }
    #pragma endscop
}

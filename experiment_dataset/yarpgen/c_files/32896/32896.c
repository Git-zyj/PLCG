/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32896
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_19 = (max(var_19, 4124086681));
        var_20 = (arr_3 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_21 = (max(var_21, (arr_2 [i_1])));
        var_22 = (max(var_22, var_8));
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        var_23 += ((!(arr_7 [i_2])));

        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            var_24 = (((((arr_11 [i_2] [i_2] [i_2]) == (arr_11 [i_2] [i_3] [i_2]))) ? (((var_1 == (arr_9 [i_2] [i_2])))) : ((min((arr_9 [i_2] [i_2]), (arr_11 [i_2] [i_3] [i_2]))))));
            arr_12 [i_2] [i_2] = (((((((var_5 ? var_1 : var_18))) && var_16)) ? (min((arr_7 [i_2]), var_15)) : (((~(arr_6 [i_3]))))));
            arr_13 [i_2] = (((((2778946662 ? 170880614 : 170880613))) ? var_0 : ((~(arr_10 [i_2])))));
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        {
                            var_25 = ((!(((var_10 ? var_4 : (-90 || var_16))))));
                            var_26 -= (~var_17);
                            var_27 = (arr_10 [i_2]);
                            var_28 ^= ((var_9 == (max((arr_22 [19] [i_5] [19] [i_3] [i_2]), (arr_17 [i_2] [i_4] [i_4] [i_6])))));
                        }
                    }
                }
            }
        }
        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 22;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 22;i_9 += 1)
                {
                    {
                        var_29 = ((0 ? ((var_11 ? 2581177729 : 174)) : 2020707884));
                        arr_31 [i_2] [i_2] [i_2] = ((((var_5 * ((25749 ? 170880613 : 2685484531)))) * (719409295 / -967775730)));
                    }
                }
            }
            arr_32 [i_2] [i_2] = var_16;
        }
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 22;i_10 += 1)
        {
            for (int i_11 = 3; i_11 < 21;i_11 += 1)
            {
                {

                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        arr_41 [i_11] [i_2] [i_11] [i_2] = (arr_24 [i_2] [i_2] [i_11] [i_12] [i_11]);
                        var_30 -= (((((967775730 ? -1082023329 : 170880613))) ? (((((var_0 - var_8) >= (arr_38 [i_11 + 1] [i_11] [i_11 - 2] [i_11 + 1]))))) : (((arr_29 [i_2] [6] [i_10] [i_2] [i_11] [i_12]) ^ (arr_30 [i_2] [i_2] [i_2] [1])))));
                    }
                    var_31 = (max(var_31, ((((var_2 & ((-1 ? (arr_28 [i_10] [i_11 - 1]) : var_18))))))));
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 22;i_13 += 1)
                    {
                        for (int i_14 = 1; i_14 < 1;i_14 += 1)
                        {
                            {
                                var_32 ^= (((((arr_46 [i_2] [2] [i_11 - 3] [i_13] [i_14]) ? (((arr_37 [i_14 - 1] [i_14] [i_14] [i_14 - 1]) ? 2685484511 : (arr_30 [i_2] [i_14 - 1] [i_11] [2]))) : (arr_38 [i_10] [i_11] [i_10] [i_2]))) & (min((arr_22 [i_2] [i_2] [i_2] [i_2] [i_14 - 1]), var_7))));
                                arr_48 [i_14 - 1] [i_13] [i_13] [i_2] [i_10] [i_10] [i_2] = (max((((((var_6 ? var_4 : (arr_47 [i_2] [i_10] [i_13] [i_14]))) < var_6))), (((arr_28 [i_14 - 1] [i_14]) / (arr_45 [i_11] [i_11 - 3] [i_11] [i_11] [i_11])))));
                                var_33 = min(2685484531, (((((1 ? var_12 : (arr_10 [i_2]))) >> (((arr_6 [i_2]) - 60))))));
                            }
                        }
                    }
                    arr_49 [i_2] = ((var_17 ? (arr_28 [i_11 - 1] [i_11 + 1]) : (min(((-1 ? var_10 : (arr_8 [i_2] [i_2]))), 32))));
                }
            }
        }
        var_34 = (min((((-((var_8 + (arr_44 [7] [i_2] [i_2] [i_2] [i_2])))))), (min((arr_39 [i_2] [i_2]), var_17))));
    }
    for (int i_15 = 0; i_15 < 21;i_15 += 1)
    {
        arr_52 [i_15] = (max(158, 221));
        arr_53 [i_15] [19] = max((~240), ((var_17 ? ((170880613 ? var_10 : var_18)) : var_2)));
    }
    var_35 = (min((min(((var_14 ? -3393278924707585772 : var_16)), (65535 ^ 3225315517))), var_1));
    var_36 -= ((160 ? 1 : (10203848537719544812 && var_9)));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51258
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, (~var_15)));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 = (max(var_19, 205));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_20 *= 6683966109328098969;
            arr_6 [1] [1] = var_17;
            var_21 = (min(var_21, 3));
        }
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            var_22 = (max((((-(var_12 == var_7)))), (max((arr_1 [i_2]), var_7))));

            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                var_23 *= (max((min(var_1, 249)), var_5));
                var_24 = (min(var_24, ((max(1, ((-(arr_7 [3]))))))));
                arr_13 [i_3] [i_2] = ((-126 ? (((4294967295 - 0) ? (var_5 & var_9) : (0 & -127))) : (arr_3 [i_0])));
            }
            for (int i_4 = 1; i_4 < 13;i_4 += 1)
            {
                var_25 &= ((((((arr_11 [i_0]) != (arr_11 [i_0])))) << (249 - 243)));
                var_26 = ((var_16 ? var_1 : ((min(1052033761, 220)))));
                arr_17 [i_4] [i_4] [i_2] [i_4 + 1] = 0;
                var_27 ^= (~var_1);
            }
            arr_18 [i_2] [i_2] = var_15;
            var_28 -= (((((~(arr_3 [i_0])))) ? (((arr_3 [1]) ? (arr_2 [11] [11]) : (((-1 + (arr_11 [2])))))) : -var_1));
            var_29 = (~-9007199254675456);
        }
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_30 *= (((arr_21 [14]) ^ var_14));
        var_31 = (min(var_31, -32762));
    }

    /* vectorizable */
    for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
    {
        arr_24 [i_6] &= -1;
        var_32 = (arr_22 [i_6] [i_6]);
    }
    for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
    {
        arr_28 [i_7] = (!76);
        arr_29 [i_7] = (((min((arr_25 [i_7] [i_7]), (arr_25 [i_7] [i_7]))) > (((arr_25 [i_7] [i_7]) ? (arr_25 [i_7] [i_7]) : 197))));
        var_33 = (max((min((((1 != (arr_20 [i_7])))), (min(4294967276, 198)))), ((max(0, (arr_23 [i_7]))))));
    }
    var_34 = 124;

    for (int i_8 = 1; i_8 < 23;i_8 += 1)
    {
        var_35 = (min(var_35, (((~(max((((var_6 ? 32761 : (arr_20 [i_8])))), (arr_31 [1]))))))));

        /* vectorizable */
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            var_36 = ((((arr_31 [i_8]) - (arr_30 [i_8] [i_8]))));
            /* LoopNest 2 */
            for (int i_10 = 1; i_10 < 23;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 24;i_11 += 1)
                {
                    {
                        arr_42 [i_8] [i_8] = (arr_40 [i_11] [i_10] [i_9] [i_8]);
                        var_37 = (arr_36 [i_10] [i_10 - 1]);
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 17;i_12 += 1)
    {
        var_38 &= ((var_1 ? 127 : (arr_21 [i_12])));
        var_39 = (((arr_30 [i_12] [i_12]) - var_15));
    }
    #pragma endscop
}

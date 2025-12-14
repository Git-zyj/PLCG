/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40014
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_16;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = arr_0 [i_0];
        var_20 ^= (max(((min(var_15, var_7))), 0));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1 - 1] [i_1] [i_0] = (min(((var_8 < ((var_11 ? (arr_4 [i_0] [i_1] [i_2]) : var_13)))), (((~2092054705) >= (((max(var_18, (arr_1 [i_0])))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] [i_0] [i_3] [i_4] [i_0] = (max((max((arr_10 [i_4 + 3] [i_3] [i_2]), var_18)), ((max((max((arr_3 [i_0] [i_2] [i_0]), (arr_12 [i_4] [i_0] [i_2] [i_0] [i_0]))), (arr_12 [i_2] [i_2] [i_2] [i_0] [i_2]))))));
                                var_21 = var_12;
                                var_22 = (max(var_22, (((var_16 ? var_8 : (arr_10 [i_1] [i_1 - 1] [i_1 - 1]))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            {
                                var_23 = (min(var_23, (((!((max((min(var_5, var_3)), (arr_4 [i_6] [i_5] [i_6])))))))));
                                var_24 = var_17;
                                var_25 += 11961;
                            }
                        }
                    }
                    var_26 += ((-(min(((((arr_0 [14]) ? (arr_5 [i_0] [i_0] [i_2]) : (arr_18 [4] [i_1])))), (((arr_22 [i_0] [12]) ? var_5 : var_1))))));
                    var_27 = -var_4;
                }
            }
        }
        var_28 = ((((((var_9 & (arr_0 [i_0])))) ? (~var_12) : (((min((arr_3 [i_0] [i_0] [i_0]), (arr_22 [i_0] [i_0]))))))));
        arr_23 [1] [i_0] |= (arr_12 [i_0] [4] [14] [1] [i_0]);
    }

    for (int i_7 = 0; i_7 < 21;i_7 += 1)
    {
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 21;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 21;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 21;i_10 += 1)
                {
                    {
                        var_29 = (((var_2 ? (arr_24 [i_7] [i_10]) : (arr_24 [i_7] [i_7]))));
                        var_30 = (-((-(!var_8))));
                    }
                }
            }
        }
        var_31 -= (((((max(var_3, var_3)))) << ((((~(arr_30 [i_7] [i_7] [i_7]))) - 1315978584))));
        var_32 ^= ((-11938 ? 1 : 8191));
    }
    for (int i_11 = 0; i_11 < 20;i_11 += 1)
    {
        arr_38 [i_11] = (var_15 - (arr_36 [i_11]));
        /* LoopNest 2 */
        for (int i_12 = 2; i_12 < 18;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 1;i_13 += 1)
            {
                {
                    var_33 ^= max((arr_33 [0] [i_12] [i_12 - 2] [5] [i_13]), (max((arr_33 [i_12] [18] [i_12 - 1] [i_12 + 1] [i_13 - 1]), (arr_42 [i_12 + 1] [i_13 - 1] [i_13] [i_13 - 1]))));
                    var_34 *= ((116 ? (arr_28 [i_12 + 1]) : (arr_42 [i_12 - 1] [i_12 + 1] [i_12 - 2] [i_13 - 1])));
                }
            }
        }
    }
    for (int i_14 = 4; i_14 < 17;i_14 += 1)
    {
        var_35 = (arr_35 [9]);
        var_36 += ((!((((arr_35 [i_14 - 4]) ? var_10 : (arr_35 [i_14 - 4]))))));
        var_37 = (((arr_25 [i_14 - 1] [i_14]) ? (((arr_42 [i_14 - 4] [i_14] [i_14] [i_14]) ? (arr_25 [i_14 - 3] [i_14]) : (arr_25 [i_14 + 1] [i_14 - 2]))) : -8190));
    }
    for (int i_15 = 0; i_15 < 20;i_15 += 1)
    {
        var_38 += ((arr_35 [i_15]) ? ((var_10 ? 11961 : var_12)) : var_13);
        arr_49 [i_15] = (min(-52, -11944));
        arr_50 [i_15] = (((arr_47 [i_15] [i_15]) ? ((((arr_24 [i_15] [12]) ? var_6 : var_1))) : (arr_29 [i_15] [i_15])));
        var_39 ^= (max(13883167271960313417, (((!(arr_27 [i_15] [i_15] [i_15]))))));
    }
    #pragma endscop
}

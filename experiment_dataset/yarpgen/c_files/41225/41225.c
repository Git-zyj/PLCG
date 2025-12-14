/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41225
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_9;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_11 = (arr_2 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_12 = (var_4 ? (((((2054014766 ? var_1 : var_3))) ? 1644925841 : var_9)) : (((65535 ? 141 : var_4))));
                    arr_7 [i_0] [4] = (((((var_0 - (((arr_0 [i_1]) ? var_0 : 46390))))) ? ((114 + (arr_0 [i_0]))) : 40018));
                    arr_8 [i_0] [i_0] [1] = ((((var_9 ? (arr_0 [i_0]) : var_6)) / ((((((116 ? 1 : 139)) == var_0))))));
                    var_13 = 23656;
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                {
                    arr_19 [i_5] [i_5] [i_5] [i_5] = ((((min(((min(1, var_4))), ((28004 ? 8985876289991680710 : (arr_17 [12] [i_5] [1] [12])))))) ? ((var_5 / (((arr_16 [15]) / 52354)))) : 65531));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            {
                                var_14 ^= (((((min((arr_17 [i_4] [i_7] [i_7] [i_4]), 141))) ? ((max(var_1, 1118))) : 724980378)));
                                arr_26 [i_4] [i_5] = (min(((12288 ? (arr_11 [i_7] [i_3]) : (arr_11 [i_6] [i_6]))), (arr_11 [i_3] [11])));
                            }
                        }
                    }
                    arr_27 [i_3] [i_5] [1] = 1330553010434332591;
                    var_15 = (max(var_15, (((arr_12 [i_5]) != var_0))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 3; i_8 < 21;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 24;i_9 += 1)
            {
                {
                    arr_33 [i_3] [i_9] = 37531;
                    arr_34 [i_9] [10] [i_9] = ((-(((arr_24 [i_9]) ? var_9 : (arr_24 [i_9])))));

                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        arr_37 [10] [i_9] = (((((var_6 <= (arr_10 [i_3])))) != (681194313 >= -1)));
                        arr_38 [i_9] = -99;
                    }
                    /* vectorizable */
                    for (int i_11 = 1; i_11 < 21;i_11 += 1)
                    {
                        arr_41 [i_3] [i_8] [i_9] [i_9] = -952009577;
                        arr_42 [i_3] [12] [i_3] [i_3] &= ((~(arr_39 [i_8 + 3] [i_11 - 1])));
                    }
                    var_16 ^= ((var_1 ? ((min(var_6, var_8))) : ((1008 ? -1 : (((1 ? var_3 : (arr_36 [i_3] [19] [i_3] [i_8 - 3]))))))));
                }
            }
        }
        arr_43 [0] = (min(var_4, (min(2836869716, -1))));
    }
    for (int i_12 = 1; i_12 < 12;i_12 += 1)
    {
        arr_48 [i_12] = (((min(var_1, (!55)))) ? ((-1330553010434332572 ? ((var_4 ? var_6 : -724980378)) : var_0)) : (((var_3 >> (-2 + 21)))));
        var_17 = (min(var_17, var_2));
        arr_49 [4] [i_12] = ((max(1, ((max(var_2, 240))))));
    }
    for (int i_13 = 0; i_13 < 22;i_13 += 1)
    {
        arr_54 [i_13] |= ((((min((((var_7 ? (arr_14 [i_13] [i_13]) : var_6))), (min(-6192105586475242645, var_5))))) ? (arr_10 [i_13]) : (((((var_9 ? var_3 : var_3))) / (max(6619369033582899921, var_9))))));
        var_18 -= ((((((var_4 - 255) * (!var_8)))) ? (((max(var_1, 8)))) : (min(65530, (var_3 / 123)))));
    }
    #pragma endscop
}

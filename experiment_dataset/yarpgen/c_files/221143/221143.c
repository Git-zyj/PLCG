/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221143
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_13 = -var_10;
        var_14 |= (arr_1 [i_0]);
        var_15 *= ((-((((min(15791, (arr_1 [i_0])))) ? ((var_1 ? -122 : var_7)) : (!var_3)))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        arr_4 [i_1] [i_1] = ((((var_8 || (arr_2 [3])))));
        var_16 = var_11;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 12;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        arr_12 [i_1] [i_2] [6] [i_4] [i_4] [i_1] = (8191 + var_0);
                        var_17 = max((arr_6 [i_2]), (((var_9 ? ((((arr_3 [i_1]) != var_6))) : (min((arr_8 [2] [2] [i_3] [0]), var_3))))));
                        var_18 = (arr_2 [i_3]);
                        var_19 ^= min(((min((arr_3 [i_3 - 1]), (arr_8 [i_3 - 1] [0] [i_3 - 2] [i_2])))), ((((max(var_2, var_6))) ? (arr_2 [i_1]) : (var_2 | var_2))));
                        arr_13 [6] [6] |= (((arr_6 [1]) ? ((666876034300172487 | (arr_6 [12]))) : (((-(arr_6 [12]))))));
                    }
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        var_20 = var_8;
                        arr_17 [i_2] = 65535;
                        arr_18 [i_2] = ((+(max((!var_11), (min(var_5, var_8))))));
                    }
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        arr_21 [6] [i_2] [1] [i_6] |= (min((min(((1 ? var_0 : var_4)), (arr_16 [8] [i_1] [10] [10] [i_1]))), (min((min(var_0, (arr_1 [i_1]))), (((var_4 ? var_12 : 2147483647)))))));
                        var_21 += (((max((arr_9 [4] [i_3] [i_3] [i_6]), (((var_3 > (arr_2 [i_2])))))) == (max((arr_10 [0] [12] [i_3 - 3] [0]), (var_1 ^ var_1)))));
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 9;i_8 += 1)
                        {
                            {
                                arr_27 [i_2] [i_2] = (min(((((min((arr_0 [i_1]), (arr_2 [i_3])))) ? var_5 : (min((arr_5 [2] [i_2]), 9223372036854775807)))), var_7));
                                var_22 -= ((!(arr_11 [9] [1] [i_2])));
                                var_23 = (arr_25 [i_8 - 1] [12] [i_3 - 1] [5] [i_1]);
                            }
                        }
                    }
                }
            }
        }
        arr_28 [i_1] = -32;
    }
    for (int i_9 = 0; i_9 < 14;i_9 += 1)
    {
        var_24 = (min(var_24, ((max(-var_2, (((((arr_1 [i_9]) == 1008904302)) ? (arr_30 [i_9]) : -var_2)))))));
        var_25 = (min(var_25, (((((((!(arr_1 [i_9]))))) << (((arr_1 [i_9]) - 12693)))))));
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 1;i_10 += 1)
    {
        var_26 += 3437521579;
        arr_33 [i_10] = var_9;
        var_27 = (!var_3);
        var_28 = (((arr_0 [i_10]) ? var_1 : (arr_1 [i_10])));

        for (int i_11 = 0; i_11 < 14;i_11 += 1)
        {
            var_29 = (min(var_29, ((((arr_32 [i_10]) ? (arr_30 [i_11]) : (arr_30 [i_10]))))));
            var_30 *= (arr_30 [i_11]);
        }
    }
    var_31 ^= (min(var_7, (var_8 % var_7)));
    var_32 += (((var_2 ? (max(var_10, var_8)) : var_2)));
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 16;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 16;i_13 += 1)
        {
            {
                var_33 = (var_1 > var_10);
                var_34 = ((((var_6 + 2147483647) << ((((min((arr_38 [i_13]), var_9))) - 43262)))));
                var_35 |= (((arr_36 [i_12]) ? (arr_1 [15]) : ((((((arr_38 [i_13]) + var_12))) ? (min((arr_40 [i_12]), 0)) : (((var_1 ? (arr_38 [i_12]) : var_10)))))));
                var_36 = (min(var_36, ((min((min((arr_40 [i_12]), (arr_39 [i_12]))), ((min(1, var_2))))))));
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194592
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_4;
    var_20 = var_16;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            {
                                var_21 ^= (min((((-0 / ((1 ? 91 : 1))))), (((arr_12 [i_0] [i_0] [i_0 + 2] [i_0 + 2] [i_0 - 1]) ? ((((arr_14 [i_1]) ? (arr_9 [i_1] [i_2] [i_3] [i_4]) : var_12))) : var_16))));
                                var_22 = ((281474976710656 ? 0 : -7648736761962090565));
                            }
                        }
                    }
                    var_23 += (-(((arr_2 [i_0 - 1]) ? (min((arr_1 [i_2]), 7648736761962090564)) : (((arr_12 [22] [i_1] [i_1] [i_1] [i_0]) ? var_18 : var_0)))));
                    arr_16 [i_0 + 2] [14] = ((-40 * (((arr_9 [i_2] [i_2] [6] [i_0]) ? (159 / 8718327109221706230) : (arr_1 [i_0 - 1])))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 24;i_6 += 1)
                        {
                            {
                                arr_21 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0] [i_5] [i_0] = (((min(6526689871108135048, (!3849408967824341478)))) ? var_7 : (min((min(var_3, var_11)), (arr_12 [10] [i_1] [21] [i_6 - 2] [23]))));
                                var_24 = (((min((arr_6 [i_0 + 1] [i_0 + 2]), (~var_18))) / (arr_13 [i_0] [i_1] [i_2] [i_5] [i_5] [i_5] [i_6])));
                                arr_22 [i_0] [i_1] [i_5] = (((((var_15 ? -1152921504606846976 : 1797109022)))) ? (min(((~(arr_5 [i_0] [i_1] [1]))), var_1)) : var_12);
                            }
                        }
                    }
                    var_25 *= ((arr_15 [i_0 - 1] [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0] [i_0]) ? (arr_11 [i_0 - 1] [i_0] [22] [i_0 + 2]) : ((20395 ? 2497858248 : 1071267585)));
                }
            }
        }
    }

    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 24;i_9 += 1)
            {
                for (int i_10 = 3; i_10 < 22;i_10 += 1)
                {
                    {
                        arr_36 [i_10] [i_8] [i_8] [i_7] = (min((((var_1 ? (arr_25 [i_7] [i_7]) : (((var_4 ? (arr_19 [22] [i_8] [i_8] [i_8] [i_10]) : (arr_7 [i_7]))))))), (((((var_1 ? (arr_15 [17] [19] [i_9] [17] [i_8] [17] [11]) : var_10))) ? var_4 : (arr_31 [i_7] [i_8] [i_9] [8])))));
                        var_26 *= (min(((min((var_2 / var_10), (((var_1 ? (arr_31 [19] [i_8] [i_9] [i_10]) : (arr_28 [i_7] [i_7]))))))), ((~(((-9223372036854775807 - 1) / (arr_29 [i_7] [15] [i_10 + 2])))))));
                        var_27 = ((((min((!var_4), (min(var_8, var_4))))) * ((min(253, 0)))));
                        var_28 = ((min((arr_20 [i_7] [i_8] [i_9]), var_6)));
                        var_29 = (max(var_29, ((min(18446744073709551606, -3219208528974257147)))));
                    }
                }
            }
        }
        arr_37 [i_7] = ((((min((min((arr_6 [i_7] [i_7]), -2963528062334654353)), 7190839212046499352))) ? ((~(((arr_9 [i_7] [i_7] [i_7] [i_7]) ? var_2 : var_2)))) : ((155 ? -5472 : 1))));
        arr_38 [i_7] = ((((((arr_35 [i_7] [6] [i_7] [6] [i_7]) ? (arr_35 [i_7] [i_7] [i_7] [14] [i_7]) : 1))) ? (!3989028243) : ((min((arr_35 [i_7] [i_7] [i_7] [22] [22]), var_3)))));
    }
    #pragma endscop
}

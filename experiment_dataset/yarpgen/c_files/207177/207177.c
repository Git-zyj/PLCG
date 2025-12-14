/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207177
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((min(var_13, var_8)) - var_4)) < var_9));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        var_20 = var_9;
        arr_2 [i_0] = (((arr_1 [i_0]) ? (arr_1 [i_0 - 3]) : (arr_1 [i_0])));
    }
    for (int i_1 = 1; i_1 < 11;i_1 += 1)
    {
        arr_6 [i_1] = (((arr_4 [i_1 - 1] [i_1 + 1]) * var_8));
        arr_7 [i_1 - 1] = ((32767 ? (max(18446744073709551606, var_10)) : (((((14803996822207571314 ? (arr_1 [i_1]) : var_1)))))));
        arr_8 [i_1] [i_1] = ((min(var_9, var_17)) - (((var_5 & (arr_4 [i_1 + 1] [i_1 - 1])))));
        var_21 *= 8191;
        var_22 = ((min(14803996822207571293, 14803996822207571314)));
    }
    var_23 = var_18;

    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        arr_12 [i_2] [i_2] = ((-((127 & (arr_10 [i_2])))));
        arr_13 [i_2] = (arr_10 [i_2]);
        var_24 += ((((var_4 ? (1477383740 < 4142519022) : (~4403))) * (arr_9 [i_2] [i_2])));
    }
    for (int i_3 = 1; i_3 < 1;i_3 += 1) /* same iter space */
    {
        arr_17 [i_3] &= ((-(((((arr_14 [i_3] [i_3]) & var_14)) * 8189))));
        var_25 = (min((((((7 & (arr_14 [i_3] [i_3])))) & -var_10)), (((var_4 * var_18) ? (((14232984602248331429 ? (arr_11 [i_3]) : var_18))) : (((arr_15 [i_3]) - var_8))))));
    }
    for (int i_4 = 1; i_4 < 1;i_4 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_5 = 2; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 13;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    {
                        arr_28 [i_4] [i_5 + 2] [i_6] [i_7] = ((((!(arr_19 [i_4 - 1]))) ? -var_10 : (~18446744073709551615)));
                        var_26 = (arr_25 [i_7] [i_6] [i_4]);
                        arr_29 [i_6] = ((((var_0 ? (((arr_24 [i_5] [i_7]) * 4142519022)) : (((min((arr_21 [i_6] [i_7]), (arr_20 [i_6]))))))) & (248 < var_6)));

                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            var_27 = max((var_13 / var_9), (64 - -38));
                            arr_32 [i_4] [i_5] [i_6] [i_7] [i_8] [i_8] = var_8;
                            var_28 ^= ((!-var_9) ? (((((arr_11 [i_8]) + 2147483647)) << (((((arr_11 [i_4]) + 12210)) - 21)))) : (((-125 + 2147483647) << (((-1326 * -13988) - 18548088)))));
                            arr_33 [i_4] [i_5] [i_6 - 1] [i_7] [i_8] = (((max(var_15, (arr_23 [i_4 - 1] [i_5 + 2] [i_8]))) << (arr_14 [i_6 + 1] [i_7])));
                        }
                    }
                }
            }
        }

        for (int i_9 = 0; i_9 < 14;i_9 += 1)
        {
            arr_36 [i_4] = (((((0 & 0) - (min(var_2, var_15)))) & (((-(arr_11 [i_4 - 1]))))));
            var_29 = ((min(((max((arr_30 [i_4] [i_4] [i_9] [i_9]), 4399))), ((0 ? -24 : (arr_15 [i_4]))))));
            arr_37 [i_4] [i_9] = (((((var_10 * (arr_30 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1])))) - (min((8189 & 0), var_11))));
            arr_38 [i_4 - 1] = (((max(((var_9 ? var_5 : (arr_0 [i_9]))), var_11)) << (((min((var_7 * var_4), (((-38 ? var_9 : (arr_23 [i_4] [i_9] [i_9])))))) - 11768503892924414156))));
        }
        var_30 = var_18;
    }
    #pragma endscop
}

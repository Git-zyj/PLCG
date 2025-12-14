/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35348
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 11916755242728881116;
    var_17 = var_9;
    var_18 = var_8;

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        var_19 = (min(var_19, (6529988830980670490 || 218)));
        var_20 = ((((max((27686 + -14646), var_2))) && (arr_0 [i_0])));

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_21 = (arr_4 [i_1] [19] [i_0]);
            arr_5 [i_0] = (((((((((arr_2 [i_0] [i_1]) * var_10))) ? (arr_2 [i_0 - 2] [i_0]) : (arr_3 [i_0] [i_0])))) ? (-var_9 * 18446744073709551615) : ((var_4 / (arr_0 [i_0 - 2])))));
            var_22 -= ((-26465 ? 227 : -23154));
        }
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            arr_8 [i_0 + 2] [i_0] [11] = var_11;
            arr_9 [i_0 - 2] [i_2] [i_2] = ((((((arr_7 [i_0 + 1] [i_0 + 1] [i_0 - 1]) ? (arr_2 [i_0] [i_0 - 2]) : (var_4 == var_13)))) ? (((!(arr_3 [i_0 - 2] [i_0 - 2])))) : ((-(max(-26460, (arr_0 [i_0])))))));
        }
        for (int i_3 = 2; i_3 < 19;i_3 += 1)
        {
            arr_12 [i_0] [i_0] = (((arr_6 [12] [i_3 - 1]) ? var_8 : (((arr_11 [i_0 - 1] [i_3 - 1]) % (arr_0 [i_3])))));
            var_23 = ((var_10 <= (((((arr_1 [i_0 + 2] [i_3 - 1]) ? (arr_6 [i_0] [i_3]) : 18446744073709551599)) / var_7))));
        }
    }
    for (int i_4 = 1; i_4 < 13;i_4 += 1)
    {
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            for (int i_6 = 4; i_6 < 15;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    {
                        arr_25 [i_4] [i_5] [i_5] [i_7] = ((0 + (arr_24 [i_4] [i_6 - 2] [i_4] [i_6 - 2])));
                        arr_26 [i_4] [i_4] [i_6 - 2] [i_6 - 2] = (((((((max((arr_10 [i_7]), (arr_13 [i_4])))) ? (((arr_22 [i_4 + 2] [i_5] [i_4] [i_7]) + var_15)) : ((-(arr_4 [0] [i_5] [13])))))) ? 26462 : (arr_21 [9] [i_5] [0] [i_4])));
                    }
                }
            }
        }
        var_24 = ((((((arr_16 [i_4 + 2]) ? (arr_15 [i_4]) : (arr_20 [i_4])))) % (((arr_20 [i_4]) ^ (arr_16 [i_4 + 3])))));
        arr_27 [i_4 + 1] [i_4] = (min((max(var_11, (arr_22 [i_4 + 1] [2] [i_4] [i_4 + 4]))), ((((arr_22 [i_4] [i_4 + 1] [i_4] [i_4 + 4]) ? (arr_22 [i_4] [i_4] [i_4] [i_4 + 4]) : (arr_22 [i_4 + 4] [i_4] [i_4] [i_4 + 4]))))));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 21;i_8 += 1)
    {
        var_25 *= (((arr_30 [i_8] [i_8]) ? 27686 : (arr_30 [i_8] [i_8])));
        var_26 *= (((arr_28 [i_8]) ? var_1 : (arr_29 [3] [i_8])));
        var_27 = (max(var_27, (arr_29 [i_8] [i_8])));
        arr_31 [11] = ((-5245 ? -1 : 251));
    }
    #pragma endscop
}

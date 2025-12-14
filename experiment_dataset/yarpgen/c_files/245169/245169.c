/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245169
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_10;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_12 = 4294967295;
        arr_3 [i_0] = 10540725362376936775;
        var_13 = ((!(((((-(arr_0 [i_0]))) - (16 + var_4))))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_14 = (min(var_14, (((18446744073709551602 * ((1434928071 ? 4294967285 : (min(1, 1842726473499774189)))))))));
        arr_6 [i_1] [i_1] = 1;
    }
    for (int i_2 = 3; i_2 < 17;i_2 += 1)
    {
        arr_11 [i_2] = (((min(2, var_7)) * ((1 ? 32766 : 18446744073709551615))));
        var_15 = (((~16) * var_9));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    {
                        var_16 = ((!((((arr_17 [i_2]) / var_5)))));

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
                        {
                            var_17 = 1;
                            var_18 += (arr_1 [i_2]);
                        }
                        for (int i_7 = 0; i_7 < 18;i_7 += 1) /* same iter space */
                        {
                            var_19 = ((!(17 * 12662071421375959186)));
                            arr_26 [i_7] [i_4] [i_4] = -524287;
                            var_20 = (max(var_20, var_4));
                            var_21 = (max(var_21, (((2097151 / (min(var_5, var_10)))))));
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 18;i_8 += 1) /* same iter space */
                        {
                            arr_30 [16] [i_8] [5] [i_3] [i_8] [i_4] [3] = ((8972768199897560366 ? (!668044888234448406) : 18446744073709551601));
                            arr_31 [2] [i_8] [i_4] [i_8] [2] [1] = (((arr_4 [i_2 - 3]) ? (arr_4 [i_2 + 1]) : var_10));
                            arr_32 [i_8] [1] [1] [1] [i_8] [i_8] = (var_6 * ((var_8 ? 1 : 1740386609762901703)));
                            var_22 = ((2832 * (!var_7)));
                            var_23 = ((-((4294967272 ? 4294967288 : 2))));
                        }
                        for (int i_9 = 0; i_9 < 18;i_9 += 1) /* same iter space */
                        {
                            var_24 ^= 1015908961;
                            arr_37 [i_9] [i_5] [i_3] [i_3] [i_2 - 2] = (((((-(arr_20 [i_2] [i_2 - 2])))) * (((1740386609762901706 * 4294967295) * (max(-109, 15302196589349749857))))));
                            arr_38 [i_2] [9] [i_4] [i_5] [i_2] = ((-52713 ? -2831 : (((((var_3 ? (arr_27 [i_2] [11] [i_9] [11] [i_9] [i_4]) : -94))) ? (~var_2) : (arr_0 [i_4])))));
                        }
                    }
                }
            }
        }
        var_25 &= ((-((10349 ? 232 : 70))));
    }
    for (int i_10 = 1; i_10 < 23;i_10 += 1)
    {
        var_26 = 4;
        arr_42 [i_10] = (((arr_39 [i_10 - 1]) * (((arr_41 [i_10 - 1]) / (arr_40 [i_10 - 1])))));
        var_27 = ((!((((arr_39 [i_10]) * 1)))));
    }

    for (int i_11 = 0; i_11 < 24;i_11 += 1)
    {
        var_28 = (min(((((arr_40 [8]) || (!17179868672)))), ((14 ? ((72057594037927935 ? var_3 : 83)) : (((max(2837, var_0))))))));
        arr_45 [i_11] = (max(((-var_0 - (arr_40 [i_11]))), ((((((var_8 & (arr_44 [7])))) ? 15 : (!var_3))))));
        var_29 = max(var_7, (((var_10 * (arr_39 [i_11])))));
        var_30 = (~var_2);
    }
    #pragma endscop
}

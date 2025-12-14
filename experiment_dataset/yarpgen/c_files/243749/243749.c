/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243749
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_15 = (((((9223372036854775807 ? 65517 : -2488518600519440258))) ? (arr_0 [i_0]) : (((arr_0 [i_0]) * (arr_0 [i_0])))));
        var_16 += var_1;
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 17;i_2 += 1)
        {
            var_17 = (arr_4 [i_2] [i_2]);
            var_18 = (arr_4 [i_2] [i_2]);
            var_19 = ((~((~(arr_5 [i_1] [i_2] [i_1])))));
            var_20 *= ((28 ? (((((~(arr_3 [i_1])))) ? 32757 : 1081424200)) : ((((!(arr_2 [i_1] [i_2])))))));
        }
        for (int i_3 = 4; i_3 < 16;i_3 += 1)
        {

            /* vectorizable */
            for (int i_4 = 0; i_4 < 0;i_4 += 1)
            {
                var_21 = (arr_5 [i_1] [i_3 - 2] [i_4]);
                var_22 *= (~var_9);
            }
            arr_12 [i_3] [i_1] = var_5;

            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                var_23 = ((3815673154 ? 13365 : 2110177739));
                arr_15 [i_1] = (((arr_7 [i_3 + 2] [i_3 - 3]) - (arr_13 [i_3 - 2] [i_3 - 2] [i_5])));
                var_24 = (((arr_4 [i_3 - 3] [i_3 - 1]) ? 65280 : var_1));
            }
        }
        var_25 += (arr_8 [i_1] [i_1] [i_1]);
        var_26 = (arr_13 [i_1] [i_1] [i_1]);
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        var_27 = ((!(arr_17 [i_6])));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            for (int i_8 = 3; i_8 < 18;i_8 += 1)
            {
                {
                    var_28 = 246;
                    var_29 = var_6;
                    var_30 = (arr_23 [i_7]);

                    /* vectorizable */
                    for (int i_9 = 3; i_9 < 21;i_9 += 1)
                    {
                        var_31 = (max(var_31, (arr_0 [i_6])));
                        var_32 = 2262105575;
                    }
                }
            }
        }
    }
    for (int i_10 = 3; i_10 < 14;i_10 += 1)
    {

        for (int i_11 = 0; i_11 < 16;i_11 += 1)
        {
            var_33 = (min(var_33, -65261));
            var_34 = 613444070;
        }
        for (int i_12 = 1; i_12 < 15;i_12 += 1)
        {
            var_35 = (((((((arr_27 [i_10 - 3] [i_12] [i_12] [i_10]) / (arr_2 [8] [i_12]))))) ? (((arr_1 [i_12]) ? ((-613444071 ? 16465888832805660877 : (arr_26 [i_10]))) : ((((arr_3 [i_10]) / (arr_13 [i_10] [i_12] [i_12])))))) : (((-(((arr_31 [i_10 - 2]) ? (arr_7 [i_10] [i_12 - 1]) : var_7)))))));
            var_36 = min(((+(((arr_13 [i_10 + 2] [i_10 + 2] [i_10 + 2]) ? (arr_3 [i_10]) : (arr_2 [i_10] [11]))))), var_1);
        }
        var_37 = (max(var_37, var_11));
        var_38 = (arr_27 [i_10] [i_10] [i_10] [i_10]);
        var_39 = arr_17 [i_10];
    }
    var_40 = (var_1 / var_8);
    #pragma endscop
}

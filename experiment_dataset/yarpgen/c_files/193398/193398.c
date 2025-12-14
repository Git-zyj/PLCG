/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193398
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = ((16777215 * (((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))));
        var_17 = 1635231405;

        /* vectorizable */
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                var_18 ^= (((((1 ? (arr_6 [i_0 + 1] [i_1]) : var_13))) ? (arr_4 [i_0] [i_0 + 1] [i_2]) : (arr_4 [i_2] [i_1] [i_2])));

                for (int i_3 = 1; i_3 < 20;i_3 += 1)
                {
                    arr_10 [i_0] [i_0] = (arr_7 [i_1 + 1] [20] [i_0 - 1] [i_0] [i_0]);
                    arr_11 [i_3] [i_0] [i_0] [i_0 + 1] = 31;
                }
                for (int i_4 = 1; i_4 < 1;i_4 += 1)
                {
                    arr_14 [i_0] [i_1] [i_0] [i_4] [4] = 1;

                    for (int i_5 = 2; i_5 < 18;i_5 += 1)
                    {
                        var_19 = ((var_2 ? var_4 : var_4));
                        var_20 = ((var_3 ? (arr_8 [i_0] [i_0 + 1] [i_0] [i_0]) : (((arr_12 [i_5] [9] [i_2] [i_1] [i_0]) ? var_11 : -1635231386))));
                    }
                    var_21 = 2132743149;
                }

                for (int i_6 = 3; i_6 < 20;i_6 += 1)
                {

                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        var_22 = (min(var_22, ((((arr_21 [i_6 - 1] [3] [i_1 - 2] [i_1] [i_0 + 1]) ? (arr_3 [i_0 + 1] [i_0] [i_0]) : (arr_21 [i_6 + 1] [i_2] [i_1 - 2] [i_0] [i_0 + 1]))))));
                        var_23 = (((arr_0 [i_0] [i_0]) != var_15));
                    }
                    for (int i_8 = 2; i_8 < 18;i_8 += 1)
                    {
                        arr_27 [20] [i_2] [i_0] [i_0] [i_8] = (((((var_15 ? (arr_18 [19] [i_6 + 1] [i_2] [i_0]) : var_4))) ? 1 : 131));
                        arr_28 [i_0 - 1] [i_0] = 1;
                        arr_29 [i_0 - 1] [i_0] [i_1] [i_6] [i_0] [i_0] = (arr_22 [i_8] [i_0] [i_2] [9] [i_0] [i_0]);
                        var_24 = ((1099511627775 ? (arr_1 [i_8 - 1]) : (arr_0 [i_0] [i_0])));
                    }

                    for (int i_9 = 2; i_9 < 19;i_9 += 1)
                    {
                        var_25 = 65535;
                        var_26 = var_15;
                        var_27 ^= ((((((arr_30 [i_9] [i_9]) ? (arr_6 [i_0] [i_1]) : (arr_9 [i_0] [i_6] [i_2])))) ? (arr_0 [i_9] [i_9]) : var_3));
                    }
                    var_28 = (min(var_28, 4294967295));
                }
                for (int i_10 = 0; i_10 < 21;i_10 += 1)
                {
                    var_29 = (((arr_5 [i_0] [i_0] [i_2] [i_0 - 1]) ? (arr_5 [i_0] [i_10] [i_10] [i_0 + 1]) : (arr_5 [i_0] [i_1] [i_1 - 2] [i_0 - 1])));
                    var_30 = (max(var_30, (arr_30 [i_2] [i_1 - 2])));
                }
                arr_34 [i_2] [i_2] [0] &= (var_7 ? (arr_7 [i_2] [i_1] [i_1 + 1] [i_0 + 1] [i_0 + 1]) : 340015217377886858);
                var_31 = (min(var_31, (((1 >> (((arr_22 [20] [i_2] [i_2] [i_0 + 1] [i_0] [i_1]) - 14909838409063691970)))))));
            }
            var_32 = (arr_32 [i_0 + 1] [5] [i_1] [20]);
            var_33 = ((var_4 < (((arr_16 [i_0]) ? var_4 : (arr_18 [i_1 - 3] [12] [12] [i_0 + 1])))));
            var_34 = (((arr_31 [i_0] [i_1 - 2] [i_1] [i_0 + 1] [i_0]) ? (var_14 > 1) : ((53642 ? (arr_13 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1 - 3]) : 13576063246554228390))));
        }
    }
    for (int i_11 = 1; i_11 < 16;i_11 += 1)
    {
        /* LoopNest 3 */
        for (int i_12 = 0; i_12 < 17;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 17;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 17;i_14 += 1)
                {
                    {
                        arr_48 [5] [9] [i_12] [i_13] = (arr_37 [3]);
                        var_35 = 1099511627775;
                    }
                }
            }
        }
        arr_49 [i_11] = (min(var_1, (min((((arr_16 [i_11]) ? (arr_43 [0] [i_11] [0]) : (arr_1 [i_11]))), 1))));
    }
    var_36 += (((1457 ? (min(var_12, var_15) : (((31 ? var_11 : var_13)))))));
    #pragma endscop
}

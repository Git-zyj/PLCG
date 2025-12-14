/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52512
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = max((min(12564270298071151210, (var_4 / 114))), ((((((var_1 ? var_1 : var_3))) && ((max(-102, var_12)))))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        var_16 = (arr_4 [i_0] [i_0]);
                        arr_11 [i_0] [i_0] [i_2] [i_3] = (((arr_3 [i_1 + 1] [i_1 + 1]) ? (arr_3 [i_1] [i_1 + 2]) : (arr_3 [i_1] [i_1 - 1])));
                    }
                }
            }
        }

        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            var_17 = (((((((65472 ? 134 : 121))) - (min(12172951348799110155, 0)))) < 41081));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 23;i_6 += 1)
                {
                    {
                        arr_20 [i_0] [i_6] [0] [i_5] [i_4] [i_0] = -15316322551055150152;
                        arr_21 [i_0] [i_4] [i_5] [i_6] = (((!var_0) ? (arr_19 [10] [i_4] [i_6 - 1] [i_6] [i_5]) : (((var_8 ? var_3 : (arr_9 [7] [i_0] [i_6]))))));
                        var_18 = ((((min((arr_3 [i_0] [i_6 - 1]), (7 <= var_8)))) ? (((max(-4643965792117574332, 4643965792117574334)) / (((2147483632 << (2147483647 - 2147483647)))))) : (((9 * (((10 == (arr_0 [i_0])))))))));
                        var_19 = ((-(arr_10 [i_0])));

                        for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
                        {
                            var_20 = (max(var_20, (((((min(((~(arr_8 [10] [19] [i_5] [i_5] [i_7]))), var_4))) ? 137438887936 : var_11)))));
                            var_21 = 12172951348799110179;
                            arr_26 [i_0] [6] [16] [i_6 - 2] [i_0] = (((~1) ? var_5 : (((var_10 ? (arr_23 [i_0] [i_4] [i_4] [i_4] [i_7]) : (arr_19 [i_7] [i_6 - 2] [18] [i_4] [i_0]))))));
                        }
                        for (int i_8 = 0; i_8 < 24;i_8 += 1) /* same iter space */
                        {
                            arr_31 [i_0] [i_0] [i_0] [i_6] [i_6] [i_8] = max((min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_4]))), (!var_10));
                            arr_32 [i_0] [18] [i_5] [18] [i_8] = (var_1 << (((arr_10 [i_0]) - 49)));
                            var_22 = ((~((~(arr_7 [i_6 + 1] [i_6 + 1] [i_5] [i_5] [i_5])))));
                            arr_33 [i_0] [i_4] [8] [11] [i_6] [i_0] = -38;
                        }
                        for (int i_9 = 0; i_9 < 24;i_9 += 1) /* same iter space */
                        {
                            var_23 = (max((arr_36 [i_4] [i_6 - 2] [i_4] [i_6 + 1] [i_6 - 2]), -78));
                            arr_38 [i_0] [i_0] = ((+((((~var_9) < (arr_29 [i_6] [i_6 - 2] [i_6] [i_6 - 1]))))));
                        }
                        for (int i_10 = 0; i_10 < 24;i_10 += 1)
                        {
                            arr_41 [i_0] = ((((min((arr_3 [i_6 - 2] [i_4]), (((var_9 ^ (arr_40 [i_0] [i_4] [i_0] [23] [i_5] [i_6] [i_10]))))))) ? (arr_28 [i_0] [i_4] [i_5] [i_0] [i_10]) : var_11));
                            arr_42 [i_10] [i_0] [i_0] [i_0] [i_0] = min((((arr_8 [4] [i_6 - 1] [i_6 + 1] [i_6 - 1] [i_6]) - 3)), (((!(!-7720)))));
                            var_24 = var_13;
                            var_25 = 35465847065542656;
                        }
                    }
                }
            }
        }
        var_26 = ((~((var_6 ? -var_8 : (arr_37 [3] [i_0])))));
    }
    #pragma endscop
}

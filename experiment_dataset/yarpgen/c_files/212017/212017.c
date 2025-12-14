/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212017
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, (max((min(1976855914, 0)), ((((max(var_1, var_3))) ? (var_3 * var_2) : var_8))))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = ((~((var_6 * ((3661767925 ? (arr_0 [i_0] [i_0]) : 633199376))))));
        arr_3 [i_0] [i_0] = ((((((var_3 * (arr_0 [i_0] [i_0])))) || (arr_1 [i_0] [i_0]))));
        arr_4 [i_0] = -1499289048;
        var_12 = (((min(11069563114460980861, (arr_0 [i_0] [i_0]))) - ((min(((var_4 ? 3661767921 : (arr_0 [i_0] [i_0]))), var_2)))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 22;i_3 += 1)
            {
                {
                    var_13 = (((((((arr_7 [i_1]) ? var_10 : var_4)))) ? (max(((((arr_9 [i_1] [i_3]) << (((arr_10 [i_1] [i_2 + 1]) - 4395053549227402975))))), 1518467143)) : (((var_5 / (arr_5 [i_2 + 2]))))));
                    arr_12 [i_1] = ((((((arr_9 [2] [i_2 + 2]) ? (min((arr_5 [i_1]), var_10)) : 2776500153))) ? var_2 : (min(1518467143, (var_3 || 4210564581)))));
                    arr_13 [i_1] [i_2] [i_2] [i_3] = var_2;
                    arr_14 [i_1] [i_2] [i_2] = (((max((arr_8 [i_3] [i_3] [i_3 - 1]), -var_9)) << ((((((((arr_10 [i_2] [i_2]) ? 295984186 : (arr_8 [i_3] [8] [i_3])))) ? (((arr_8 [i_1] [i_1] [i_1]) ? var_9 : var_2)) : (arr_11 [i_1] [i_2 + 2] [i_3 + 1] [i_2]))) - 2264490221))));

                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        var_14 = arr_5 [i_1];
                        var_15 = ((!((max(((var_4 ? (arr_10 [i_1] [i_2 + 1]) : 1449318700)), (arr_5 [i_3 - 1]))))));
                        arr_17 [i_3] [6] [i_3] [i_4] [i_3] = (min((arr_8 [i_3 + 1] [i_3 + 1] [i_2]), (max((min(var_3, (arr_10 [i_1] [i_2]))), (((2776500153 ? (arr_5 [9]) : (arr_6 [16]))))))));

                        for (int i_5 = 2; i_5 < 21;i_5 += 1)
                        {
                            var_16 = (max(var_16, var_0));
                            arr_20 [i_5] [i_5] [16] [i_4] [i_2] [i_2] [i_1] = ((((((arr_9 [i_3 - 1] [i_3 - 1]) ? (11787806205371126614 / var_9) : 2776500131))) ? var_1 : (var_3 / -1371972451)));
                        }
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            arr_25 [i_1] [i_1] [i_1] [i_1] [i_4] [i_6] = (((arr_18 [i_2 - 2] [i_2 + 2] [i_2 + 1] [i_3 + 1] [i_3 - 1]) ? (((arr_11 [i_1] [i_4] [i_2 + 1] [i_3 - 1]) ? (arr_18 [i_2 - 2] [i_2 - 1] [i_2 - 2] [i_3 - 1] [i_3 + 1]) : (arr_18 [i_2 - 1] [i_2 + 1] [i_2 + 2] [i_3 + 1] [i_3 - 1]))) : (arr_11 [11] [i_2] [i_2 - 1] [i_3 + 1])));
                            var_17 = (min(var_17, (((var_9 ? (((((var_4 ? var_1 : -29)) - (((arr_24 [i_1]) ? (arr_22 [i_1] [i_6] [18] [i_4] [i_1]) : (arr_5 [i_1])))))) : var_0)))));
                        }
                        /* vectorizable */
                        for (int i_7 = 2; i_7 < 22;i_7 += 1)
                        {
                            var_18 = (arr_19 [i_2] [i_2] [i_2 + 1] [i_2] [i_2]);
                            var_19 = (arr_16 [i_2 + 1] [i_7 + 1] [i_3 - 2]);
                        }
                    }
                }
            }
        }
        arr_30 [i_1] = (((((var_6 ? var_6 : 3661767920))) ? (arr_24 [i_1]) : ((((arr_24 [i_1]) & (arr_24 [i_1]))))));
        var_20 *= (((177362304 ? ((~(arr_9 [i_1] [i_1])) : -551102885))));
        arr_31 [i_1] = (arr_29 [i_1] [i_1] [i_1] [i_1] [i_1]);
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242380
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_11;
    var_13 |= var_1;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_14 = (~1065965267);
        var_15 = (min(var_15, ((min(((((var_4 << (((arr_0 [i_0]) + 1710094444)))) * ((((!(arr_0 [10]))))))), ((((~(arr_0 [i_0]))))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_16 = (max(var_16, var_9));
                    var_17 = (min(var_17, (min((min((var_10 ^ 8160230552581058119), (arr_5 [i_2]))), var_4))));
                    var_18 = (i_0 % 2 == zero) ? ((((var_9 + 2147483647) << (((max(var_5, (arr_7 [i_2] [i_0] [i_2]))) - 1345598791))))) : ((((var_9 + 2147483647) << (((((max(var_5, (arr_7 [i_2] [i_0] [i_2]))) - 1345598791)) - 647523174)))));
                    arr_9 [i_0] [i_0] [i_0] [i_0] = (max((((arr_7 [i_2] [i_0] [i_2]) ? (arr_7 [i_2] [i_0] [i_2]) : (arr_7 [i_0] [i_0] [i_2]))), (min((arr_7 [i_0] [i_0] [i_2]), (arr_7 [i_0] [i_0] [i_0])))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_19 = (min((((8160230552581058124 ? -8 : 3240927105))), -1414999637574822261));
                                arr_16 [i_0] [i_2] [i_2] [i_2] [i_1] &= ((var_1 ? (((arr_10 [i_0] [i_1]) | (arr_10 [i_3 - 1] [i_2]))) : -4848));
                                var_20 *= (((arr_12 [6] [i_1] [6] [i_1]) / (((((arr_7 [i_0] [i_1] [i_0]) / (arr_2 [i_2] [6] [0]))) * ((-(arr_10 [i_1] [i_1])))))));
                            }
                        }
                    }
                }
            }
        }
        var_21 -= ((((arr_8 [i_0] [i_0] [i_0] [i_0]) & ((~(arr_15 [i_0] [i_0] [i_0] [i_0] [12] [i_0]))))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                {
                    var_22 -= (((((+(((arr_5 [2]) - 18014398509481984))))) ? (((arr_19 [i_5] [i_5] [i_5]) | (arr_11 [i_6] [i_0]))) : (var_2 && 3178408079)));
                    arr_21 [i_0] [i_0] [11] [i_6] = (((min(-4, (arr_13 [i_6] [i_5] [i_0]))) & (arr_11 [i_5] [i_6])));
                }
            }
        }
    }
    #pragma endscop
}

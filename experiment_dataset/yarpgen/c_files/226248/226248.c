/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226248
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((((max(-84, -97))) ? (min(var_9, 1011025123)) : (var_10 ^ var_0))) | ((min((1255519871 ^ -80), 13)))));
    var_13 = max((((var_2 > (var_11 <= var_7)))), var_0);
    var_14 = (min(-98, (min(439037825, 11056398775893170446))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 9;i_2 += 1)
                {
                    arr_7 [0] [i_1] [0] &= (1073739776 ? (min((arr_5 [i_0] [i_1 + 1] [i_2]), -1300242424)) : var_2);
                    arr_8 [i_2] [i_1] [i_2] = 388852692;

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        arr_12 [i_1] [i_1] [i_1] [i_1] [i_2] = 6;
                        arr_13 [i_2] [i_1] [4] [7] = 18014398509481856;
                        var_15 = -115466309;
                        var_16 = (((((32 ? var_6 : (arr_5 [i_3] [i_1 - 1] [i_2 - 2])))) ? ((-109 ? (-2147483647 - 1) : 1014667019)) : (max((arr_5 [i_0] [i_0] [i_2 - 1]), var_1))));
                        var_17 = var_0;
                    }
                }
                var_18 = (min((((arr_3 [6] [i_1 - 1]) ? (arr_1 [10] [i_1 - 1]) : (arr_3 [i_0] [i_1 - 1]))), ((((arr_1 [5] [i_1 - 1]) ^ (arr_1 [i_0] [i_1 - 1]))))));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_19 = ((9 ? ((((((!(arr_14 [i_0]))))) / (max(14794967295574150764, (arr_5 [6] [6] [6]))))) : ((min(((((arr_4 [i_0] [i_0] [i_0]) || 12780487355963950545))), -1219799461)))));
                                var_20 = (max(((min((((125 || (arr_20 [i_0] [i_1] [i_4] [5] [i_6])))), (arr_15 [i_0] [i_5])))), ((((min(var_8, (arr_4 [i_0] [i_1] [i_4])))) ? (((67 ? 255 : -1300384071))) : ((16647184671108180333 ? 73 : 13520110846220743414))))));
                                var_21 += -111;
                                var_22 = (arr_21 [i_0] [i_0] [i_4] [i_0] [i_6]);
                            }
                        }
                    }
                }
                var_23 = (arr_18 [i_0] [6] [0] [10]);
            }
        }
    }
    var_24 = ((((+-126) + 2147483647)) << (((!var_6) * var_4)));
    #pragma endscop
}

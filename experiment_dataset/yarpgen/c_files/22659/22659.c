/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22659
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 *= (~var_9);
    var_17 = (((((var_7 && var_13) ? var_10 : (!0))) > (-0 | var_13)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0] [17] = ((~(max(10577671231896366504, (arr_2 [i_1 - 1] [i_1] [1])))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_0] [1] = ((!((((arr_12 [i_2 + 1] [i_1 - 1] [i_0]) / (arr_12 [i_1] [i_3] [i_4 + 2]))))));
                                arr_14 [i_2 - 1] [i_1 - 1] [i_3] [i_0] [i_4] = ((~(((arr_12 [i_4 + 2] [i_4 + 1] [i_4 + 2]) << (((arr_12 [i_4 + 2] [i_4 - 1] [i_4 - 1]) - 2021036839))))));
                                arr_15 [i_1] [13] [i_4] = ((max(var_7, (arr_10 [i_0] [i_1 - 1] [i_4 + 1] [14]))));
                                arr_16 [i_0] [i_0] [i_1] [15] [i_0] [i_3] [i_4] = ((((max((1944704758 / 2761929741209468223), var_2))) == (max((max((arr_12 [1] [i_2] [i_2]), var_11)), (var_10 + var_11)))));
                                var_18 = (134217727 - 18389);
                            }
                        }
                    }
                }
                var_19 = (max(var_19, (((((((arr_2 [i_1 - 1] [i_1] [i_1 - 1]) ? 18445618173802708992 : 261120))) ? (((arr_2 [i_1 - 1] [i_1 - 1] [i_1 - 1]) ? (arr_2 [i_1 - 1] [i_1 - 1] [i_1 - 1]) : var_0)) : ((((!(arr_2 [i_1 - 1] [i_1 - 1] [i_1 - 1]))))))))));
                var_20 = (min(var_20, (max(((((((arr_6 [i_0] [i_1] [i_1]) / var_12))) * (arr_1 [i_0]))), (((var_14 / (max(var_14, (arr_2 [i_0] [15] [i_0]))))))))));
                var_21 = ((((var_11 ? var_0 : (arr_5 [i_1])))));
            }
        }
    }
    #pragma endscop
}

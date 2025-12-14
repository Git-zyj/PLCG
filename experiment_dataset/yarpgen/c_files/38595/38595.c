/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38595
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                var_11 *= (arr_0 [3]);

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_18 [i_1] [6] [i_1] |= (((arr_15 [9] [i_1 - 2] [i_2] [i_4 - 1] [i_1 - 2] [1]) << ((1 ? 1 : 1))));
                                arr_19 [i_2] [i_2] [i_2] [12] [i_4] = (((min((arr_13 [i_4 + 1]), var_0)) > (((((arr_14 [7] [i_2] [11] [3] [7] [i_2] [9]) || (arr_14 [i_2] [i_2] [i_1] [i_1] [1] [i_2] [i_0])))))));
                                arr_20 [i_2] [i_2] = var_9;
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 3; i_5 < 13;i_5 += 1)
                    {
                        var_12 -= (((arr_15 [i_5 - 1] [i_1 + 2] [i_1] [13] [1] [7]) ? (arr_15 [i_5 - 1] [i_1 + 2] [i_1] [i_1] [i_1] [i_0]) : (arr_15 [i_5 - 1] [i_1 + 2] [i_0] [i_0] [i_0] [10])));
                        var_13 = arr_6 [i_2] [i_1 + 1] [i_5 - 2];
                        arr_23 [i_0] [i_2] [i_2] [3] [i_5] [i_5] = ((-((((arr_17 [5] [i_0] [5] [1] [i_1] [i_2] [7]) > 1)))));
                        var_14 = (((arr_7 [i_5 - 1] [i_5 - 1] [i_2] [i_5 - 1]) > ((var_5 ? (arr_16 [i_5] [i_5] [i_2] [i_2] [i_0] [i_0]) : (arr_12 [i_5] [i_2] [i_1])))));
                    }
                    var_15 = (min(((min((arr_14 [i_2] [i_0] [1] [1] [i_2] [i_0] [i_1]), var_1))), ((230 ^ ((-(arr_8 [i_2] [i_1])))))));
                    var_16 = ((-1 * (arr_12 [i_0] [i_2] [3])));
                }
            }
        }
    }
    var_17 = ((((max((var_7 & var_5), ((max(var_2, var_8)))))) ? ((((var_7 | var_0) > (var_1 & var_3)))) : ((var_0 ? (max(var_2, var_1)) : (var_9 != var_10)))));
    #pragma endscop
}

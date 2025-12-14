/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221962
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] = (!var_9);
                    var_18 += ((arr_4 [i_0] [i_1]) & ((~((-32 ? (arr_5 [i_0] [i_1] [i_2 + 1]) : 75)))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 8;i_4 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_5 = 3; i_5 < 8;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 0;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 9;i_7 += 1)
                        {
                            {
                                var_19 -= (min((min((arr_1 [i_5 - 2]), 16447024580806110022)), (((arr_20 [i_3] [i_4] [i_5 + 2] [1] [8] [i_7]) ? (8492723039406595161 <= 20) : ((var_8 ? var_9 : (arr_2 [1])))))));
                                arr_22 [i_3] = (((arr_0 [i_5]) ? (((!(arr_0 [15])))) : (((arr_6 [i_3] [i_4] [i_5 + 1]) ? var_12 : (arr_6 [i_3] [i_5 + 2] [i_7 + 1])))));
                                var_20 = (var_12 ? (min((arr_12 [i_3] [i_4 + 2]), var_3)) : ((((!(!var_14))))));
                                var_21 = (arr_16 [i_3] [i_4 + 2] [i_3] [i_7 - 1]);
                                var_22 = (~23048);
                            }
                        }
                    }
                }
                arr_23 [1] [i_3] [i_4] = ((-25798 ? ((((arr_1 [i_4 + 2]) << (((arr_1 [i_4 + 2]) - 45912))))) : (min((arr_1 [i_4 - 1]), var_15))));
                var_23 = (min(((min(42488, (arr_13 [3])))), ((var_9 ? (min(var_7, var_8)) : ((((arr_17 [4] [i_4] [i_4] [i_4 + 2] [i_4 + 1]) ? (arr_13 [i_3]) : (arr_6 [i_3] [i_3] [i_4]))))))));
            }
        }
    }
    var_24 = var_17;
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207140
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_18;
    var_21 = (var_14 << ((((!var_12) <= var_7))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {
                    var_22 = ((((((var_9 << (var_18 - 29023))) << -var_11)) << (((((arr_2 [i_0 - 2] [i_0 - 1]) << (var_17 - 14900692255371239050))) - 7680))));
                    var_23 = (((((!(arr_0 [i_0 + 1])))) << ((((-(arr_6 [i_2 - 1] [i_1] [i_0 - 3]))) - 12596418248881882314))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_13 [6] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((((((arr_6 [i_0] [i_0 - 1] [i_2 + 1]) ? (arr_6 [i_0] [i_0 + 1] [i_2 - 1]) : (arr_6 [i_0] [i_0 + 2] [i_2 + 1])))) ? (((((-127 - 1) ? 18341957707461466322 : -1)) | 31046)) : (((var_5 % var_5) ? (arr_12 [i_0] [i_0]) : ((var_19 ? var_16 : var_17))))));
                                var_24 = ((((~((var_11 ? var_12 : var_5))))) && (arr_1 [i_0] [i_1]));
                                arr_14 [i_0] [6] [i_2] [i_3] [i_4] = ((((((arr_5 [i_0 - 3]) + var_3))) ? (arr_9 [i_0 - 2] [i_0 + 1] [i_0 - 2] [i_0 + 2]) : ((-(arr_7 [8] [8] [i_2] [i_2 + 1])))));
                                var_25 = var_2;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

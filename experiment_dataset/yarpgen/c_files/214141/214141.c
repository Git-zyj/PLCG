/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214141
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((var_6 ^ ((min(0, 1)))))) * 67076096));
    var_12 = max(var_4, 12438);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_13 = var_7;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_14 = (((((901326461 ? (~114) : var_8))) ? ((127 ? -83 : 16384)) : (12438 / var_8)));
                                var_15 = ((((((arr_8 [i_0 - 1] [i_1] [i_2] [i_4] [i_4]) / (arr_8 [i_0 + 1] [5] [i_2] [i_3] [9])))) ? (arr_8 [5] [i_0 + 1] [i_2] [i_3] [i_4]) : ((max((arr_2 [i_0 - 2] [i_0 - 2]), var_10)))));
                                var_16 = ((var_4 ? (var_0 ^ var_1) : ((var_2 ^ (((1 ^ (arr_7 [1] [i_1] [i_2] [i_3 - 1] [i_3 + 1] [i_4]))))))));
                                var_17 = var_6;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

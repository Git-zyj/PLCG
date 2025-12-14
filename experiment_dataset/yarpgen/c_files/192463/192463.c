/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192463
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                arr_8 [i_0] = (arr_4 [i_0] [i_1]);
                var_10 = (max((((var_8 + var_1) ? (((var_3 + (arr_3 [i_0] [i_1])))) : ((var_0 + (arr_2 [i_0]))))), ((max((arr_7 [i_1] [i_0 - 3] [i_0 - 3]), (arr_7 [i_0] [i_0 - 1] [i_0]))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_11 = var_7;
                                arr_17 [i_2] = (min((((var_5 <= var_4) ? ((var_7 ? var_5 : var_7)) : (arr_9 [i_1 + 1] [i_0 - 2] [i_4 + 2] [i_3]))), (((min((arr_10 [i_0] [i_1] [i_2]), var_9))))));
                                arr_18 [i_2] [i_2] [i_2] [i_4] [i_3] [i_3] [i_3] = (!var_1);
                                var_12 = (max(var_12, (((arr_3 [i_0 - 2] [i_4 + 2]) + (max((arr_2 [i_0 - 1]), var_1))))));
                            }
                        }
                    }
                }
                arr_19 [i_0] [i_1] [i_1] = 188;
                arr_20 [i_0] [i_1] = ((((max((arr_2 [i_0 - 3]), (arr_2 [i_0 - 4])))) ? ((((!((max(188, (arr_4 [i_0] [i_1])))))))) : (arr_16 [10] [10] [i_1] [10] [i_1])));
            }
        }
    }
    var_13 += 21;
    #pragma endscop
}

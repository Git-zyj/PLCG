/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33252
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, (min((!16387327804647898425), ((var_1 - (var_10 / 22370)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_16 = (min(((45882 >> (13522709978374950382 - 13522709978374950376))), ((-4245212355202176155 ? -9 : -122))));

                            for (int i_4 = 4; i_4 < 12;i_4 += 1)
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_2] [10] = (max((((arr_6 [i_3]) ? (arr_6 [i_3]) : (arr_6 [i_3]))), (13522709978374950382 != 281472829227008)));
                                var_17 = (~-1857334447770356029);
                                var_18 = (((((((max(var_10, var_2))) ? (arr_1 [i_4 - 4]) : -1813742578))) ? -var_2 : (max(2147483647, (max(var_12, var_2))))));
                            }
                        }
                    }
                }
                arr_16 [i_1] [i_1] [i_1] = var_5;
            }
        }
    }
    #pragma endscop
}

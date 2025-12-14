/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238487
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((-var_4 ? (max((((var_1 ? var_7 : var_16))), (var_6 - var_9))) : var_0));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_18 = (arr_1 [8]);
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_19 = ((((((max((arr_3 [i_1] [i_1] [i_1]), var_7))) ? (arr_5 [1]) : (!var_3))) >= (((arr_7 [i_2] [i_0]) / ((var_15 ? (arr_7 [i_0] [0]) : (arr_9 [i_1] [i_1] [i_2 + 1] [i_3])))))));
                            var_20 = (max((((~(~1)))), (arr_0 [i_1])));
                            arr_11 [i_3] [i_1] [i_1] [i_1] [i_1] = ((~((45 ? var_15 : (~587604274)))));
                        }
                    }
                }
            }
        }
    }
    var_21 = ((!var_15) ? ((((var_6 != (var_11 / var_16))))) : ((~((123 ? 1 : 2006538629)))));
    var_22 = var_16;
    #pragma endscop
}

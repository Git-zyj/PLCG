/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218477
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_13 = (!481036337152);
                    var_14 = ((!var_8) ? ((((min(var_1, var_10))) ? ((var_3 ? (arr_3 [i_1] [i_2]) : var_7)) : var_2)) : ((((((~(arr_0 [i_0])))) ? ((min((arr_3 [i_0] [i_1]), var_0))) : (min((arr_0 [15]), var_11))))));
                }
            }
        }
    }
    var_15 = (max(var_15, (((!(((var_3 / ((max(var_5, var_7)))))))))));
    var_16 = (min((min(var_8, (min(var_11, var_9)))), var_12));
    #pragma endscop
}

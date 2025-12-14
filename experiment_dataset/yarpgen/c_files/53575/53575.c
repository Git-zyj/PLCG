/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53575
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (159945770 || 3);
    var_15 = ((var_6 % (~268435455)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_16 = (max((((-((var_2 ? (arr_6 [i_0 + 1] [i_1] [i_0 + 1] [i_0]) : -159945770))))), (((arr_0 [i_2]) ? ((-(arr_0 [i_1]))) : (((var_1 >> (var_1 - 905442141))))))));
                    arr_7 [i_0] = (~var_5);
                    var_17 = (((((max((arr_5 [i_0] [i_1] [i_2] [i_0 + 1]), var_7))) ? (var_6 & var_5) : ((max(var_9, var_0))))));
                }
            }
        }
    }
    #pragma endscop
}

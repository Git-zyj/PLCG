/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249546
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_1 ? (max(-var_9, var_4)) : (((-14073 ? ((max(var_6, var_5))) : var_9)))));
    var_11 = (((min(var_8, (var_4 & var_9))) > var_6));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_12 = ((((max((arr_3 [9] [9] [i_1]), (~var_2)))) ? ((max(-1425, (max((arr_1 [i_0] [i_0]), -1))))) : ((((min(var_1, var_7))) ? (arr_4 [i_1]) : (arr_4 [i_0])))));
                var_13 = (!var_7);
                var_14 = 176;
            }
        }
    }
    #pragma endscop
}

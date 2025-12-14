/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24082
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((!(((((min(var_8, var_10))) ? 54 : ((min(15, 92))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_20 = 127;
                var_21 = (max(((-(((!(arr_1 [i_1] [i_0])))))), -109));
                var_22 = 38;
            }
        }
    }
    var_23 += (((!var_12) ? ((31 >> (-27 && var_10))) : 30));
    var_24 = 15;
    #pragma endscop
}

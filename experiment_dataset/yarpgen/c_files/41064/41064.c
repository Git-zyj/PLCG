/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41064
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_2, (min(((min(var_10, var_5))), -1902318073))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 = (min(var_20, (((-(((((20 ? 84 : var_10))) ? 104 : ((var_17 ? var_0 : 239)))))))));
                arr_6 [i_0] [i_0 - 2] = ((!(((179232185452223783 ? 8 : 1569262157311465606)))));
            }
        }
    }
    #pragma endscop
}

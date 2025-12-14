/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45894
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((((min(var_6, 16384)))) | var_7))) ? (min(((var_9 ? 127 : var_5)), ((min(-49, 99))))) : ((var_5 ? -0 : (49138 == -30681))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_0] [i_0] = 11817327006217416194;
                var_18 = 1;
            }
        }
    }
    #pragma endscop
}

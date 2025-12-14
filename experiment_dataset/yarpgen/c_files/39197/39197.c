/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39197
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((179 ? ((((max(var_8, var_10))))) : 44));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                var_21 = (max((max((arr_2 [i_0 - 2]), (min((arr_2 [i_0]), var_3)))), (((!((max(-56, var_4))))))));
                var_22 *= var_9;
            }
        }
    }
    var_23 = (63 / -45);
    var_24 = ((-45 ? var_12 : (((min(176, -29))))));
    #pragma endscop
}

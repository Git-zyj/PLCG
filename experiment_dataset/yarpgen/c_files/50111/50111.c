/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50111
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, (((-var_8 >> (var_2 + 9585))))));
    var_14 = (min(var_14, ((min(var_4, var_10)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_15 = (((min((min(1213647719, 16777088)), (((5 ? var_2 : 1))))) << ((((min(9405, 116))) - 85))));
                var_16 = 3;
            }
        }
    }
    var_17 = (min((min((var_9 - var_5), 3776357522989716663)), 1));
    #pragma endscop
}

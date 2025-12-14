/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214491
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (~var_6);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                var_13 = 254;
                var_14 = (max(var_14, 4));
                var_15 ^= var_2;
            }
        }
    }
    var_16 = ((((min(((min(var_3, 1))), var_10))) ? var_7 : (var_5 | var_1)));
    var_17 = ((max(-var_3, ((var_2 ? var_10 : 250)))));
    var_18 = -var_9;
    #pragma endscop
}

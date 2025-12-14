/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37149
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [12] = 1;
                var_15 = (max(var_15, -3205407784465548345));
            }
        }
    }
    var_16 |= ((var_12 - (var_12 != -var_11)));
    #pragma endscop
}

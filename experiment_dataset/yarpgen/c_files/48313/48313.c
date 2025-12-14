/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48313
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_0] [i_0] = var_7;
                var_11 = -1530617165;
            }
        }
    }
    var_12 = (max((min(224, 32)), 45));
    var_13 = ((!((((229 && 3236) * var_4)))));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219242
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= var_2;
    var_11 = (max(var_11, (max((((((max(var_3, var_6))) ? 204 : var_8))), 766787326982955696))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 24;i_2 += 1)
            {
                {
                    var_12 = ((min(var_1, 9675397406129309739)));
                    var_13 = var_5;
                }
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220915
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_15;
    var_19 = var_4;
    var_20 = ((var_2 ? (~var_16) : -5276382014948583858));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_21 = -463092069;
                var_22 = ((!(arr_4 [i_0])));
            }
        }
    }
    #pragma endscop
}

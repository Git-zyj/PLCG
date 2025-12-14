/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244610
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, ((min(var_11, ((((max(var_16, var_8)) <= var_10))))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            {
                var_19 = (max(var_19, (min(-1099585416, -134184960))));
                var_20 = (arr_0 [i_0]);
            }
        }
    }
    var_21 = (var_15 ? var_14 : (--536870912));
    #pragma endscop
}

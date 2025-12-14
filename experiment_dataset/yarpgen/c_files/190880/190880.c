/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190880
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((+(((((~1) + 2147483647)) << (var_15 - 674372388)))));
                var_21 = (max(var_21, 0));
                var_22 = 18;
            }
        }
    }
    #pragma endscop
}

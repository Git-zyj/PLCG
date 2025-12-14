/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219406
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_11 = (min(var_11, -20));
                var_12 -= 554182640;
                var_13 = (-26731 + var_1);
            }
        }
    }
    var_14 = ((((-26932 ? var_0 : ((3108 ? var_1 : var_10)))) * ((((var_1 & 16650) < var_9)))));
    var_15 = (max((var_6 && 11761419450425870314), (((min(var_10, var_5)) % (((3108 ? var_10 : -18874)))))));
    #pragma endscop
}

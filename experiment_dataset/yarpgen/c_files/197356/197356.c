/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197356
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(((min(1, var_13))), (var_5 * var_8)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_16 = (max(var_16, ((max(-47, (((-103 + 2147483647) >> (-21315 + 21325))))))));
                arr_7 [i_1] [i_0] [i_0] = (max((min(var_5, 21284)), -525452209));
            }
        }
    }
    var_17 = ((((-1772496308 || var_9) || var_13)));
    #pragma endscop
}

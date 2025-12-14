/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225970
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                var_14 ^= (!51350);
                arr_4 [0] [2] [0] &= 10463948831553569347;
                var_15 *= (~5341);
                var_16 = (max(var_16, ((min((-111 ^ -32766), (1 || 1))))));
            }
        }
    }
    var_17 ^= 4294967283;
    var_18 = (~13);
    #pragma endscop
}

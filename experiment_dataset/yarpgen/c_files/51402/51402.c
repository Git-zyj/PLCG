/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51402
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= var_8;
    var_12 = (min(var_12, ((min(((min(((var_9 ? 47894 : var_7)), -1))), (max((var_0 / 5), var_5)))))));
    var_13 = 15872;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_14 = (var_10 >> (var_3 - 47518));
                var_15 -= -9223372036854775789;
            }
        }
    }
    #pragma endscop
}

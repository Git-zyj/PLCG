/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5274
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                var_16 = ((((min(7, -9223372036854775801))) || ((min(-9223372036854775801, (arr_0 [i_0]))))));
                var_17 = (((4138 + 172426414) < (max((-9223372036854775807 - 1), var_8))));
            }
        }
    }
    #pragma endscop
}

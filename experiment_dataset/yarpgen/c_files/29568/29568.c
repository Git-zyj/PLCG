/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29568
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                var_15 |= ((((max((arr_0 [i_1]), (var_7 < var_9)))) & (((arr_1 [i_0 + 2]) ? var_10 : (arr_1 [i_0 + 2])))));
                var_16 = var_2;
                var_17 = ((0 ? -24 : 39));
            }
        }
    }
    var_18 ^= var_0;
    var_19 = ((var_8 ? var_13 : ((~(var_13 && 141)))));
    #pragma endscop
}

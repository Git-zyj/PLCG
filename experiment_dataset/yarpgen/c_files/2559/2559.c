/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2559
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= (((((~((max(127, 1)))))) ? (max((min(var_13, -104)), var_15)) : var_4));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_18 = (min(var_18, ((max(255, (!var_6))))));
                var_19 = (((9223372036854775807 && 1) & (((var_0 > (arr_3 [i_1]))))));
                var_20 = (max(var_20, (((((((127 | (arr_3 [2]))) + 2147483647)) << (((((~16781) + 16797)) - 15)))))));
            }
        }
    }
    #pragma endscop
}

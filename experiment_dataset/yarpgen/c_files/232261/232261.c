/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232261
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_15 = ((((max((arr_3 [i_1] [i_1]), (arr_5 [i_0])))) ^ 7848030256469494833));
                var_16 &= (((1228275045 ? var_12 : 1228275031)));
            }
        }
    }
    var_17 = var_0;
    var_18 ^= (var_10 << var_4);
    var_19 = ((((min(1228275048, (-1228275022 + 89)))) - 3656623362));
    var_20 *= (min(var_0, -1228275048));
    #pragma endscop
}

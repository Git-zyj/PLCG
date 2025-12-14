/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44408
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= ((((var_8 ? var_7 : ((19623114786283207 ? var_2 : 19623114786283207))))) ? (max(var_14, (min(7136003008011429891, 33554431)))) : var_11);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] = (max((((~-2094458710) ? (~168) : -1)), (~8475213566227654955)));
                var_19 ^= var_7;
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235204
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_11 = (min(var_11, ((min(((((min(-64, 17))) + ((3 ? 246 : 108)))), 252)))));
        var_12 = (~77);
        var_13 = max((((8726016680787374275 | -945892278931531433) ? ((var_8 ? 2080 : var_4)) : -2005830915734302983)), (((144115188075855871 ? (arr_1 [i_0] [i_0]) : var_5))));
        var_14 = (max(((((arr_1 [i_0] [i_0]) >= ((2080 ? 253 : 11288760606159541744))))), (min(2005830915734303006, (10 | var_1)))));
        var_15 = (max(((-(max(100, 6698418314186232588)))), (~18014398509481983)));
    }
    var_16 = var_3;
    #pragma endscop
}

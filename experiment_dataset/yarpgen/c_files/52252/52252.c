/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52252
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_8;
    var_16 = var_5;
    var_17 = (max((var_4 > 0), (((max(var_0, var_4)) >> (var_10 - 4114788589)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((((arr_1 [i_0]) ? (max(var_1, (arr_3 [i_1] [8]))) : (~226))) - (max(8, 8)));
                var_18 = ((((((min(4294967287, var_7)) || (arr_0 [i_1]))))));
            }
        }
    }
    #pragma endscop
}

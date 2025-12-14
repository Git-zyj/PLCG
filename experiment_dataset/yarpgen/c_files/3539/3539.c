/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3539
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, var_5));
    var_13 ^= var_11;
    var_14 = var_4;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_15 = ((16706 | (max((arr_0 [i_0] [i_0]), (((arr_0 [i_0] [5]) ? 16706 : 2436344870))))));
        var_16 ^= ((((((arr_1 [i_0]) ? var_5 : (arr_1 [i_0])))) ? (((-(arr_0 [i_0] [0])))) : (30039784 / 4264927512)));
    }
    var_17 = ((((max(((1 << (-16706 + 16708))), var_6))) ? 22259 : (~var_0)));
    #pragma endscop
}

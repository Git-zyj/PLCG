/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3276
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_1;

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        var_17 = (max((var_11 + var_0), (((var_2 * var_8) ? ((0 ? 1 : var_7)) : (((var_5 > (arr_0 [i_0 + 1]))))))));
        arr_2 [1] &= ((1 <= ((-((13265565157548310681 ? 65535 : 1334543535))))));
    }
    #pragma endscop
}

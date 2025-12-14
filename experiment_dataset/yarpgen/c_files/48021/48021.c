/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48021
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_13 = (((var_8 || var_2) ? var_3 : ((((max(-4, (arr_1 [i_0])))) ? 19 : (arr_1 [i_0])))));
        var_14 = var_1;
    }
    var_15 = (max(var_4, (max(((var_8 ? var_1 : var_7)), ((max(23, 52)))))));
    #pragma endscop
}

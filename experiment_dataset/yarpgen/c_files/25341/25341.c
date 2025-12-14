/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25341
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max((var_16 / var_12), var_6));
    var_18 = (max((((var_13 * 2) | 0)), var_13));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_19 = (max(var_19, -2592760117450307045));
        arr_2 [i_0] [14] = var_10;
        arr_3 [7] = (max(-6589305670084606660, var_10));
    }
    var_20 = ((((((5752033873953288842 ^ 128) ? (5752033873953288846 <= var_13) : (var_0 && var_14)))) || var_14));
    #pragma endscop
}

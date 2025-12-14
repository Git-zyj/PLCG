/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37615
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 186;
    var_19 = (max((max(-9223372036854775805, -9223372036854775805)), -9223372036854775805));
    var_20 = (-var_8 + var_1);

    /* vectorizable */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_21 = (min(var_21, 9223372036854775801));
        var_22 ^= (((((62584 ? 1 : 15))) ? 1 : (arr_1 [i_0 + 1] [i_0 + 1])));
        var_23 ^= (((arr_0 [10]) ? (arr_1 [i_0 - 1] [i_0 + 1]) : 15));
    }
    #pragma endscop
}

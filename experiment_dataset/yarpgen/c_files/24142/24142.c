/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24142
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_20 ^= (((arr_1 [i_0]) ? 3463201684 : var_5));
        var_21 = -1929477082;
        var_22 = (((arr_0 [i_0]) ? (arr_0 [i_0]) : 4194303));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_23 = 1528755810;
        var_24 = (((arr_0 [i_1]) != (arr_5 [i_1])));
    }
    var_25 = (((max(var_1, var_17))) ? var_6 : var_5);
    var_26 = (min((min((max(4194303, var_14)), ((min(-1929477075, 1))))), (max((var_19 + 4290772964), (min(4290773005, 4194302))))));
    #pragma endscop
}

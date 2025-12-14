/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210654
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((((var_12 >> (var_3 - 874255102))) << (var_11 - 155)))) + (((1 >> 1) ? 1389942367 : (-22158 + 1741462447)))));
    var_17 = (max(var_17, (((var_1 ? var_13 : var_9)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [0] &= (arr_0 [15]);
        var_18 = (min(var_18, (arr_0 [i_0])));
    }
    var_19 = ((var_8 ? var_8 : (((((1 ? 6617970310099037278 : var_9))) ? 1 : (((1368025236 >> (4611685743549480960 - 4611685743549480938))))))));
    #pragma endscop
}

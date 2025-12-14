/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207546
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, ((min(var_0, (min(var_0, (1377505366253937803 * -42))))))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_4 [i_0] = (((min((arr_3 [i_0]), ((~(arr_3 [i_0])))))) ? ((-(min(var_9, 126823449)))) : (arr_1 [i_0] [i_0]));
        var_15 = (((-32 / (max(0, 17069238707455613814)))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_8 [i_1] = ((!((min(var_2, (arr_2 [i_1]))))));
        arr_9 [i_1] [i_1] = (min((((17069238707455613814 ? var_12 : var_3))), 288230376151711743));
    }
    var_16 = -var_4;
    var_17 = var_9;
    #pragma endscop
}

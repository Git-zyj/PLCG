/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242461
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(0, (((((var_3 ? var_0 : var_4))) || var_8))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 *= ((((~(arr_0 [23]))) >= ((4294967295 ? (arr_1 [i_0]) : (arr_0 [i_0])))));
        var_16 = (((arr_2 [i_0]) ? ((-(arr_2 [i_0]))) : (((arr_2 [i_0]) << (((arr_2 [i_0]) - 5441257069867099160))))));
        arr_3 [i_0] = 1;
    }
    #pragma endscop
}

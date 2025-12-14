/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202560
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_14 = ((((((32767 ? -32765 : (arr_2 [i_0])))) && (((arr_2 [i_0]) && -32765)))) ? (arr_2 [i_0]) : ((((-32765 % 3) ? ((252 ? 4294967295 : -13833)) : 1))));
        var_15 = ((((-(arr_3 [i_0])))) ? (((arr_3 [i_0]) * 127)) : (arr_3 [i_0]));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        arr_6 [i_1] = var_10;
        arr_7 [i_1] = ((((min(var_1, (((13850 ? var_9 : var_4)))))) ? (((((var_8 ? 13833 : 2608035914)) << (((((-26437 + 2147483647) << (1 - 1))) - 2147457189))))) : (min(11382036470877551239, 4294967295))));
        var_16 = 24;
    }
    var_17 = var_11;
    #pragma endscop
}

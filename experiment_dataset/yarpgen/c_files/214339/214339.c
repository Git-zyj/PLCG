/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214339
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((-(((((min(var_9, var_4))) || var_4)))));
    var_15 = ((61349 + ((10214 ? (min(7992537557161537654, 18687)) : 46848))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_4 [i_0] = (~var_7);
        var_16 = (max(var_16, ((((((0 & (arr_2 [i_0])))) ? (!var_6) : (((arr_2 [2]) ? (arr_2 [i_0]) : var_12)))))));
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235558
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = max(2558, 2);

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = ((+(((1 * 28295) ? (min((arr_1 [i_0]), (arr_1 [i_0]))) : ((62973 ? -1974134057 : 1))))));
        var_19 = (max(var_19, (((~(2550 & 0))))));
    }
    var_20 = 4294967295;
    #pragma endscop
}

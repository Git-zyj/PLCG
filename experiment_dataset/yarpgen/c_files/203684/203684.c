/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203684
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_4 [i_0] = (((arr_1 [i_0]) ? -495349602 : ((((arr_1 [i_0]) == (arr_1 [i_0]))))));
        arr_5 [i_0] = var_16;
    }
    var_20 = ((((min((((-2457 ? 1987519923 : var_7))), 0))) ? var_10 : 1152886320234758144));
    #pragma endscop
}

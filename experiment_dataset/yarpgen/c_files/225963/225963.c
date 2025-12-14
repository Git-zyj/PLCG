/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225963
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max((!var_0), (!var_8)));
    var_11 |= var_9;

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_12 = ((-(max((arr_1 [i_0]), (((arr_2 [i_0]) ? 155 : 2234207627640832))))));
        var_13 = 17769;
    }
    var_14 -= ((-(min((max(var_3, 12)), (max(var_3, var_7))))));
    var_15 -= ((var_6 ? ((var_1 | (max(var_9, 5106435410935757524)))) : -4));
    #pragma endscop
}

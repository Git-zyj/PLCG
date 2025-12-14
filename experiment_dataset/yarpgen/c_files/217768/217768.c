/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217768
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_13 += (arr_1 [i_0 - 1] [i_0 + 2]);
        var_14 = min(((~(arr_2 [i_0 + 2]))), ((min(1, 15605))));
        var_15 = (1873975978 % ((-26688 ? -1873975992 : -306613672572091077)));
    }
    var_16 = var_10;
    #pragma endscop
}

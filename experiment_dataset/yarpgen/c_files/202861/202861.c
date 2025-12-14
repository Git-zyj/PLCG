/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202861
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (~19307);

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        arr_4 [i_0] = min(var_3, (min(-var_13, 24)));
        var_20 = (((max((arr_0 [i_0 + 2]), var_5))) ? var_12 : 65534);
        arr_5 [i_0] = 223417695;
        var_21 = ((!(((arr_2 [i_0]) < 29699))));
    }
    var_22 = var_5;
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45468
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(((var_0 ? (var_7 % 255) : (-37 & var_4))), var_1));
    var_11 = min(((max(var_1, var_8))), ((var_9 ? 121 : var_3)));
    var_12 += var_9;

    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        arr_3 [i_0] [i_0] &= (arr_0 [i_0]);
        arr_4 [i_0 - 1] = (min(((max((arr_1 [i_0 + 1]), -31939))), ((var_1 ? ((min(-24912, var_5))) : ((max(30, -24)))))));
    }
    var_13 &= -21705;
    #pragma endscop
}

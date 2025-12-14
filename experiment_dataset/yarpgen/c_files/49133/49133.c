/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49133
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((max(var_1, 20830)))) <= ((-1 ? (~var_9) : ((min(var_2, -13)))))));
    var_13 = ((((var_0 ? (var_8 & var_0) : ((min(var_2, -18013))))) ^ var_8));

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_14 ^= (max((((var_10 && ((min(-1, 49541)))))), (((((~(arr_0 [i_0] [i_0])))) ? ((14460 ? 27350 : 13150)) : ((max(var_0, var_1)))))));
        arr_4 [i_0 + 1] = (min(var_10, (0 - -5965)));
    }
    #pragma endscop
}

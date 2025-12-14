/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214741
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_11;
    var_21 = var_7;

    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        var_22 = 1;
        var_23 = (((((((arr_1 [7]) ? 13393 : (arr_1 [i_0]))))) ? (min((arr_0 [i_0 + 2]), -178917117)) : 4080));
    }
    #pragma endscop
}

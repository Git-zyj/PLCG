/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27677
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += -var_8;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_19 += (arr_0 [i_0]);
        var_20 = (max(((min(992, var_12))), (arr_0 [i_0])));
        arr_2 [i_0] = (!-9223372036854775795);
    }
    #pragma endscop
}

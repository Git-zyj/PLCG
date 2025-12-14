/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20648
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (!-32753);
    var_21 ^= 6144;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0] [i_0]);
        var_22 |= ((((arr_1 [i_0]) ? (((arr_1 [i_0]) ? 32740 : (arr_1 [i_0]))) : ((((arr_0 [i_0] [i_0]) >= (arr_0 [i_0] [1])))))));
        var_23 = (((-3558 ? -6149 : 32753)));
    }
    var_24 = (max(var_24, var_9));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51105
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= (65 << var_2);
    var_19 = var_9;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_20 ^= -2002278360;
        arr_3 [i_0] = (-(arr_2 [i_0] [i_0]));
    }
    var_21 = (max(var_21, ((min(-2342016466887649698, var_8)))));
    #pragma endscop
}

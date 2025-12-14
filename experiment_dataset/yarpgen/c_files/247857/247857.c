/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247857
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(((min((min(0, 0)), var_7))), var_2));

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_20 = (((max(var_13, (arr_1 [i_0])))));
        var_21 ^= -8585;
        var_22 &= (arr_1 [6]);
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48359
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= 65510;
    var_19 ^= ((!(!65527)));

    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        var_20 -= var_4;
        var_21 = min(var_17, (arr_1 [i_0 - 4]));
    }
    var_22 = (max((((25 != var_4) - (!2147483647))), ((min(12, 37291)))));
    #pragma endscop
}

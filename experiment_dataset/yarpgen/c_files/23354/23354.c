/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23354
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_11 -= 65534;
        var_12 ^= ((658844930 ? 2097647538524804617 : 14895692662014003065));
    }
    var_13 -= var_0;
    var_14 = (max(var_14, var_7));
    #pragma endscop
}

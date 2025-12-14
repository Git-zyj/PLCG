/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230579
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_19 = (max(47951, 17593));
        var_20 = ((~((min(47913, 44)))));
    }
    var_21 = (~-1456580343);
    #pragma endscop
}

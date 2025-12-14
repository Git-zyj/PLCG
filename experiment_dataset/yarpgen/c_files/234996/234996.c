/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234996
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_17 = (2600 - 33813);
        var_18 |= (min((min(var_4, (max(864422836, 1760722007)))), var_15));
    }
    var_19 = var_1;
    #pragma endscop
}

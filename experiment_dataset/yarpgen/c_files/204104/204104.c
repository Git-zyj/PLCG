/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204104
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] = 96;
        var_11 ^= (max((min(-1693932365695135014, ((min(115, -64))))), -1));
    }
    var_12 = max(111, 97);
    #pragma endscop
}

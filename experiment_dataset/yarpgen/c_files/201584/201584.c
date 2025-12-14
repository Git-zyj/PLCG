/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201584
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 *= (min(var_8, ((1036 ? ((max(1, 1))) : 54647))));

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_17 = 3004018088192354046;
        arr_2 [11] [i_0] = min(((min((var_9 != 1), (var_1 || -55)))), ((1 ? 118 : (~var_6))));
    }
    #pragma endscop
}

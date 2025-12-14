/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232907
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_10 |= var_9;
        var_11 *= (((max((~2405736178), 1)) != (((((arr_2 [i_0] [i_0]) || (arr_1 [i_0] [i_0])))))));
    }
    var_12 = max(((max((1 != 0), -32755))), (min(32725, -var_8)));
    #pragma endscop
}

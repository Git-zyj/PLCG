/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191340
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= 177;
    var_20 = (min(var_20, (((-var_15 ? (((!29437) ? 25696 : 55728)) : ((~(-1 | 4096))))))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] = (4096 & 55728);
        arr_4 [i_0] = max(-var_17, (max((arr_2 [8]), (arr_2 [i_0]))));
    }
    #pragma endscop
}

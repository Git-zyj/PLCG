/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53321
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(0, ((((max(60264, 60287))) ? (9223372036854775800 || 5272) : (max(var_7, 60236))))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] = (min(((var_1 ? (((max(-22703, 60264)))) : (min(4079107681, (-9223372036854775807 - 1))))), ((37374 ? -9223372036854775807 : -942273671))));
        var_12 = (min((max(1, (arr_1 [i_0]))), (max((!14568650523826529683), (arr_1 [i_0])))));
    }
    #pragma endscop
}

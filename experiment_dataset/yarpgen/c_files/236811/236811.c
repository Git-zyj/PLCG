/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236811
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_4;
    var_11 = var_4;
    var_12 = ((39164 ? 39164 : 26350));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_13 = (arr_2 [i_0] [i_0]);
        arr_4 [i_0] [i_0] = var_3;
        var_14 = ((26371 ? 55 : -56));
    }
    #pragma endscop
}

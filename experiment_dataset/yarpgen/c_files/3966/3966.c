/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3966
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_9;
    var_13 = var_9;

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_14 = (min(-114, -2026939428));
        arr_4 [i_0] = 139;
        arr_5 [i_0] = (((+-6986258776317088209) >= (((68 ? ((~(arr_3 [i_0] [i_0]))) : var_8)))));
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206316
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_13 = (640274087 | 1);
        var_14 = ((-21672 <= ((max(177, 721)))));
        arr_3 [i_0] = ((65346 ? 255 : 730));
        arr_4 [i_0] [i_0] = arr_1 [i_0 + 1];
    }
    var_15 ^= (((!var_2) ? var_11 : -var_12));
    var_16 |= (((((1083391109 ? 14814 : -1083391109))) ? ((243 ? -1083391082 : -22024)) : var_9));
    #pragma endscop
}

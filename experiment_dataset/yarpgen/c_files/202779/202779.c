/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202779
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = -var_16;
    var_20 |= (((((14682 ? 956414616 : 956414616))) ? (max(var_9, 281474976710655)) : (((956414616 ? 11794917463426790872 : var_6)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_21 = 20634;
        var_22 = (min(var_22, 34));
        var_23 = 20633;
    }
    #pragma endscop
}

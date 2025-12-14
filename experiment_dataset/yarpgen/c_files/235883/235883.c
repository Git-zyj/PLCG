/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235883
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [2] [2] |= (-206 ? (20 * 214) : (((var_14 ? 30641 : 8388352))));
        var_19 = (((8388352 - var_13) + (max(var_9, 4286578944))));
    }
    var_20 = ((var_18 != (((max(4286578943, 4286578935)) & var_9))));
    #pragma endscop
}

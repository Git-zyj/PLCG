/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33699
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_18 ^= (((((9697 ? 2912 : 25955))) ? ((max(41527, 41527))) : ((min(-32766, 62643)))));
        var_19 = (min(var_19, (((max(1, 1))))));
    }
    var_20 &= ((var_13 ? (((((max(53, -32766))) <= ((28395 << (var_3 - 86)))))) : ((39580 | ((1383699038 ? -32756 : 28401))))));
    var_21 = (max(var_21, ((min(1, ((var_13 & ((39581 ? 0 : 37135)))))))));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27698
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_9;
    var_21 = var_3;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_22 ^= (min((((0 || (var_1 || -1)))), 4294967295));
        var_23 = (min((((20030 ? 17157 : 9612))), (((min(4149557061, (arr_1 [i_0] [i_0]))) & (arr_1 [i_0] [i_0])))));
    }
    var_24 = 4294967295;
    #pragma endscop
}

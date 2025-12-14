/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40037
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max((((-var_6 ? ((566978646368475776 ? -29455 : 1717505171)) : var_4))), ((var_11 | ((247 ? var_5 : var_15))))));
    var_17 |= (max(var_13, ((var_0 >> ((0 << (247 - 242)))))));
    var_18 += var_8;

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_19 += var_0;
        var_20 += (((-var_14 | (239 % 255))));
        var_21 = 32767;
    }
    #pragma endscop
}

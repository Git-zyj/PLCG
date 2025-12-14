/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198579
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_16 |= (((((+((-384752199 ? (arr_1 [i_0] [i_0]) : var_8))))) ? (((~var_10) ? (var_4 ^ var_6) : (max(var_13, var_8)))) : (((var_9 ? ((-128582699 ? var_11 : var_0)) : (!var_1))))));
        var_17 ^= (arr_1 [i_0] [i_0]);
    }
    var_18 = (((((var_2 % var_11) || var_13)) ? ((var_5 ? (~34784) : ((31 ? 1 : -1)))) : (((!((max(var_6, -1195150561))))))));
    var_19 = var_2;
    #pragma endscop
}

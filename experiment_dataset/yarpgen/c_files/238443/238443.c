/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238443
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_10 *= (min(var_9, (((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0] [i_0])))))));
        var_11 = ((1 ? 54512 : 5089796022287873405));
    }
    var_12 = (((var_3 & (var_5 >= -6576651011149825120))));
    var_13 = (min(var_13, var_8));
    var_14 ^= ((((-var_1 ? (((6576651011149825100 ? 46285 : 26806))) : var_1)) != (min((((var_2 ? var_0 : var_9))), ((var_1 ? var_1 : var_5))))));
    var_15 = (max(((((min(0, -57))) * -var_2)), var_2));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193678
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 0;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_18 = (((((329341796 ? ((-54 ? 65525 : var_0)) : var_5))) ? (((((268435455 ? 192 : -32))) ? (1073741823 > var_6) : ((var_7 ? 3949659545 : 1)))) : 1073741824));
        var_19 = ((((min(var_4, (var_4 + -67352906)))) ^ ((var_1 - (84 - 1)))));
    }
    var_20 = (max(var_20, ((min(var_8, (((var_7 ? var_15 : 21681))))))));
    #pragma endscop
}

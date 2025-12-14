/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31508
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_0;
    var_13 = 0;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = (((var_8 + 9223372036854775807) << (((((-8003 - -var_0) + 7894)) - 20))));
        var_14 = var_2;
        arr_3 [i_0] [i_0] = min(15, (((((46147 ? 19389 : 19389))) ? 1 : 19405)));
    }
    var_15 = (min(-var_10, (((-var_10 && ((min(var_8, 3276531377725180750))))))));
    var_16 = ((~((max(var_3, var_9)))));
    #pragma endscop
}

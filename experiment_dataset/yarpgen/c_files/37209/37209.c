/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37209
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((((418561416 ? 418561406 : 796896084181142247)) & ((min(var_0, var_7))))) & (((-(!var_9))))));
    var_11 = var_1;
    var_12 = (796896084181142236 % var_3);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_13 = (arr_2 [i_0]);
        var_14 = var_8;
    }
    var_15 = (((9223372036854775791 / ((min(var_1, 49322))))));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195049
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (!281474976710648);
        arr_5 [i_0] = (((arr_3 [i_0] [i_0]) ? (((((var_10 * 5630) != (min(1, (arr_2 [i_0] [i_0]))))))) : (min((arr_0 [i_0]), var_6))));
    }
    var_15 = (((var_6 ? var_6 : 57422)));
    var_16 = var_5;
    var_17 ^= 1;
    #pragma endscop
}

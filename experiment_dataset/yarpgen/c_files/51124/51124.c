/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51124
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, (var_9 <= var_19)));
    var_21 = (max(var_21, (-32767 - 1)));
    var_22 = var_9;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((((~((((arr_1 [i_0]) <= 0)))))) % ((((var_6 ? var_14 : (arr_1 [i_0]))) | ((((arr_1 [i_0]) % 21151)))))));
        arr_3 [i_0] [i_0] = 0;
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221450
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= var_5;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = ((max(((((arr_1 [i_0]) > (arr_0 [i_0] [i_0])))), var_5)));
        var_12 -= (((arr_0 [18] [18]) ? (((arr_0 [6] [i_0]) / (arr_0 [14] [i_0]))) : ((-(arr_1 [i_0])))));
    }
    var_13 = 14;
    var_14 = var_0;
    #pragma endscop
}

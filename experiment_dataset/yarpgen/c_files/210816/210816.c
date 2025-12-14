/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210816
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0 + 2] = var_10;
        arr_3 [i_0] [i_0] = var_15;
        var_20 ^= (((((arr_1 [10] [i_0 - 1]) + 9223372036854775807)) >> (8438644647136508564 - 8438644647136508521)));
    }
    var_21 += (min((max(-var_4, 17953275430352240184)), var_5));
    #pragma endscop
}

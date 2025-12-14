/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22054
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= var_5;

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        var_14 = ((((((((var_12 > (arr_0 [i_0]))) && var_2)))) ^ (((8810913470055478520 < (arr_0 [i_0]))))));
        arr_3 [i_0] [i_0] = 8810913470055478500;
        var_15 = (((((var_9 >= (-9223372036854775807 - 1)))) < -8810913470055478493));
    }
    var_16 = var_4;
    #pragma endscop
}

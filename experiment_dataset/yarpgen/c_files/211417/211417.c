/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211417
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, ((max(1, 3590802176056829527)))));
    var_12 = (max(var_4, var_9));

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_13 -= (!17380);
        arr_2 [i_0] = (((1 > var_1) | (min(((18136039700613850416 ? 40 : 17716)), ((max((arr_1 [i_0]), (arr_1 [i_0]))))))));
    }
    #pragma endscop
}

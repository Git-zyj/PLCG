/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46593
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((+(((var_8 || var_1) + var_0))));

    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        var_11 = (((((min((var_6 || 4294967295), (!var_9))))) + 2992815243));
        var_12 ^= (min((min(7, 1)), 0));
        arr_2 [i_0 + 1] = (((((arr_1 [i_0]) - var_8))));
    }
    #pragma endscop
}

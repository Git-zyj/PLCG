/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234789
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 20624;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (arr_0 [3]);
        var_12 = (min(var_12, (((((max(9, 9))))))));
    }
    var_13 = (min(var_13, -24));
    #pragma endscop
}

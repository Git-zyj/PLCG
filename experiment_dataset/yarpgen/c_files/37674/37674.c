/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37674
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = ((!((var_14 < (min(1344615156, (arr_1 [i_0])))))));
        arr_3 [i_0] &= (var_16 / ((45 * (((-2147483647 - 1) / -47)))));
    }
    var_18 = (((((min(25264, ((2147483647 ? var_13 : 2147483647)))) + 2147483647)) << (((min((107 - var_14), ((min(102, 240))))) - 102))));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237318
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 309381636;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = (((~(arr_1 [i_0] [i_0]))));
        var_11 = (arr_1 [i_0] [i_0]);
    }
    var_12 = ((((((((var_0 ? var_5 : var_6))) ? -60239 : (max(var_5, var_1))))) <= 15556119131487782703));
    #pragma endscop
}

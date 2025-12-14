/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215942
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_10;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 = (arr_0 [i_0] [i_0]);
        var_20 = (-((((min((arr_1 [1]), (arr_0 [i_0] [i_0])))) - (-1 - 3583))));
        var_21 = 0;
    }
    var_22 = (min((min((var_16 / var_13), (max(3569, var_14)))), var_0));
    var_23 = min((((((max(var_3, 255))) >= ((-3593 ? 10279715747817926902 : var_10))))), ((((0 ? var_16 : var_0)) >> (var_15 - 4068165816))));
    #pragma endscop
}

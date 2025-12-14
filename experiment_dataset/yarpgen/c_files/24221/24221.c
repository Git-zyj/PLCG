/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24221
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (max(((var_5 ? (arr_0 [i_0]) : (arr_1 [i_0]))), (((12329883557089105287 * var_7) * ((var_13 / (arr_0 [i_0])))))));
        arr_3 [i_0] = (!(arr_0 [i_0]));
        var_15 = var_0;
        var_16 = (max(var_16, ((-(arr_1 [i_0])))));
        var_17 = var_4;
    }
    var_18 = (min(var_18, var_6));
    var_19 *= (max(var_6, (max(var_8, 0))));
    #pragma endscop
}

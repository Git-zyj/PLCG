/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211970
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, ((((var_8 / ((max(var_1, var_0)))))))));
    var_11 = (max(var_6, (((-288019405 / 18338) ? -23 : ((var_0 ? -288019389 : 288019409))))));
    var_12 = var_0;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_13 = (max(var_13, (arr_2 [i_0])));
        arr_3 [1] = ((((max((arr_0 [i_0]), (arr_0 [i_0])))) ? (((arr_0 [i_0]) * 467963870)) : ((-(arr_0 [i_0])))));
    }
    #pragma endscop
}

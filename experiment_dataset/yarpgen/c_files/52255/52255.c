/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52255
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((!(((var_2 ? var_14 : var_5)))));

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = (max((arr_0 [i_0] [i_0]), var_13));
        arr_4 [15] = (((((-((min(85, var_18)))))) ? 1 : (max((((1 >> (((arr_0 [i_0] [i_0]) - 6933699139276998466))))), ((~(arr_2 [16])))))));
    }
    var_20 = var_1;
    #pragma endscop
}

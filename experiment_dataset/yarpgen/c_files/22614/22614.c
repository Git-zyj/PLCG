/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22614
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_7;
    var_12 = var_2;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_13 = ((-(arr_2 [i_0] [i_0])));
        var_14 = var_6;
        arr_3 [i_0] = (((var_0 % (arr_2 [i_0] [9]))));
        arr_4 [i_0] = (~0);
    }
    #pragma endscop
}

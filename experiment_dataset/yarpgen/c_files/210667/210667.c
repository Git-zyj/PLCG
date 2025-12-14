/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210667
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += (max((max(var_2, ((var_3 ? var_5 : var_1)))), ((((!25519) && (((var_8 ? 40016 : var_4))))))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [1] [i_0] = (max(var_5, var_4));
        arr_3 [i_0] = arr_0 [i_0] [i_0];
        arr_4 [i_0] = (max(var_5, (arr_0 [i_0] [13])));
        arr_5 [i_0] = var_5;
        var_13 = var_10;
    }
    #pragma endscop
}

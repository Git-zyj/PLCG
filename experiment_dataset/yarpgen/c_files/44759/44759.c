/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44759
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] = (arr_1 [i_0]);
        arr_4 [i_0] [i_0] = (max(1, ((!((max(var_2, var_3)))))));
        var_13 = (max(var_13, (arr_1 [i_0])));
        var_14 = (min(var_14, (((((arr_1 [i_0]) ? ((92 + (arr_0 [i_0]))) : (arr_1 [i_0])))))));
    }
    var_15 = (min(var_8, ((max((var_12 > var_4), 7)))));
    #pragma endscop
}

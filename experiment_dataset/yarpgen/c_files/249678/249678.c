/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249678
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_0;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = (max((arr_1 [i_0]), (((1 ? 0 : var_8)))));
        var_11 = 50605;
    }
    var_12 = ((~((var_5 ? ((var_1 ? var_4 : 7018292948271462620)) : ((var_2 ? var_8 : var_5))))));
    var_13 = (min(var_13, (((((((-107 ? var_3 : 285087377)) ? -3660487543796335378 : var_2)))))));
    #pragma endscop
}

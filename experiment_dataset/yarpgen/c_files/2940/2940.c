/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2940
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_11;
    var_21 = -1;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_22 = (((min(var_7, (var_11 | var_12)))) ? (((!(arr_1 [i_0] [i_0])))) : var_1);
        arr_4 [i_0] = ((~((1 ? 8022414222116955527 : 3398905765808786914))));
    }
    var_23 = var_9;
    #pragma endscop
}

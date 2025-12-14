/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216048
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((!(~25333))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_11 = (min(var_11, (arr_1 [i_0] [16])));
        var_12 = (min(var_12, (((((((arr_0 [i_0] [4]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))) ? var_3 : 1315715842)))));
    }
    var_13 = ((-var_6 << (((var_6 + 3251406084216026635) - 2))));
    #pragma endscop
}

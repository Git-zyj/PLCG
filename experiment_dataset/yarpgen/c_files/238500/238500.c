/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238500
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, (11403609768912461250 - 524287)));
    var_11 = ((-(max(((11403609768912461250 ? var_7 : 5743269208637026296)), var_0))));

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_12 = ((min((((arr_1 [i_0 + 2]) + var_1)), var_7)));
        arr_3 [i_0] = ((((min((arr_1 [i_0 - 1]), (arr_0 [i_0 + 2])))) ? ((var_3 ? (arr_0 [i_0]) : var_1)) : ((min(var_7, var_7)))));
        arr_4 [11] = (7043134304797090365 & 2521594247);
    }
    #pragma endscop
}

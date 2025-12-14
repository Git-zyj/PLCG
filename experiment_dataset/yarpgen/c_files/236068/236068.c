/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236068
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_2;
    var_21 = (min(((18446744073709551605 ? 0 : 0)), 2384779819));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_22 = (((min((arr_1 [i_0]), (arr_0 [i_0] [i_0]))) / (((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0])))));
        var_23 = (((!var_1) > var_19));
        var_24 = (!var_13);
    }
    #pragma endscop
}

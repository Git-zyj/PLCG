/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227752
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 1218656054804435216;
    var_12 *= (((((var_9 ? ((192 ? var_9 : 46)) : (!var_2)))) * ((var_3 % (((40 ? 1 : 280106502)))))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_13 = (max((arr_0 [i_0] [i_0]), ((((arr_0 [i_0] [i_0]) && 689388981)))));
        var_14 -= ((((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))) > (min(((min((arr_0 [i_0] [i_0]), var_9))), (min(var_8, var_1))))));
        arr_3 [i_0] [19] = (arr_0 [i_0] [19]);
        arr_4 [i_0] [i_0] = ((((((arr_2 [i_0] [i_0]) * (arr_2 [i_0] [i_0])))) ? ((-(arr_0 [i_0] [i_0]))) : (!var_7)));
    }
    var_15 -= ((!((((max(1, 64))) && (((var_9 ? var_1 : var_3)))))));
    #pragma endscop
}

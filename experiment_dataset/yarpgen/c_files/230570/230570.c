/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230570
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 1;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_19 += (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])));
        arr_2 [1] [i_0] = (((arr_1 [i_0]) ? (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [11]))) : (arr_0 [i_0])));
        arr_3 [i_0] = ((1 ? 65534 : ((-(((arr_1 [i_0]) << (((arr_1 [9]) - 34791))))))));
        var_20 *= (min(((max((arr_1 [i_0]), (arr_1 [i_0])))), (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [11])))));
    }
    var_21 *= var_14;
    var_22 = var_15;
    #pragma endscop
}

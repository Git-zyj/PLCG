/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29141
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_18 ? (max((!var_5), 19180)) : var_5));
    var_21 = ((var_0 ? var_15 : (max(1, 3366429987))));
    var_22 = (max(((min(30912, 34622))), var_12));

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0] [i_0]);
        arr_3 [i_0] = ((((min((arr_1 [10] [10]), ((30937 ? (arr_0 [i_0]) : var_6))))) ? ((((min((arr_0 [i_0]), (arr_1 [i_0 - 1] [i_0])))) ? ((6960 & (arr_0 [i_0]))) : (arr_0 [i_0 - 3]))) : ((~(arr_1 [i_0] [i_0])))));
    }
    #pragma endscop
}

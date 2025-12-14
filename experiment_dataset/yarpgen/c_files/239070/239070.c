/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239070
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((max((var_8 == var_2), ((var_5 ? -32763 : 31069))))) ? (((max(43884, 65535)))) : var_5));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        arr_2 [i_0] = 31069;
        arr_3 [i_0] = (((arr_0 [i_0 + 1] [i_0 + 3]) ? (arr_0 [i_0 + 1] [i_0]) : (arr_0 [i_0 + 3] [i_0 + 3])));
        arr_4 [i_0] = ((31069 ? var_0 : (arr_1 [i_0 + 1])));
        arr_5 [i_0] = (((((var_5 ? (arr_1 [i_0]) : (arr_0 [i_0] [i_0])))) ? (((((arr_0 [i_0] [i_0]) < (arr_1 [i_0]))))) : var_19));
    }
    #pragma endscop
}

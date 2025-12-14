/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208152
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_11 = (i_0 % 2 == zero) ? (((((((~(arr_1 [i_0]))) + 2147483647)) << (((((arr_1 [i_0]) ? 2626195860483019821 : 922953571)) - 2626195860483019821))))) : (((((((((~(arr_1 [i_0]))) - 2147483647)) + 2147483647)) << (((((arr_1 [i_0]) ? 2626195860483019821 : 922953571)) - 2626195860483019821)))));
        var_12 = ((1 ? (arr_2 [i_0]) : (arr_2 [i_0])));
        var_13 = ((1824752992 ? (arr_0 [i_0] [i_0]) : -26761));
        arr_3 [i_0] = (((arr_2 [i_0]) < ((((!(arr_1 [i_0])))))));
    }
    var_14 = ((((var_3 / var_4) - 2626195860483019812)));
    #pragma endscop
}

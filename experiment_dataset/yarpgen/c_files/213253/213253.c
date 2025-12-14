/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213253
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_11 = (((((((max(var_9, 3812673359))) ? (!var_1) : ((var_9 ? (arr_1 [12]) : -5047982125273173861))))) ? (((((arr_3 [i_0]) && var_3)) ? ((15 ? var_10 : (arr_1 [i_0]))) : -540108316144059243)) : (!-5299)));
        arr_4 [i_0 - 1] = ((arr_0 [i_0 + 1]) ? (min((arr_1 [i_0 - 1]), (arr_2 [i_0 + 1]))) : var_4);
        var_12 = ((((!((min(1127710873, var_0))))) ? 1 : (((((506896381 ? 73 : 3481300707)) > ((65535 ? (arr_2 [10]) : 25631)))))));
    }
    var_13 = ((!(((2430326968 ? -24072 : 16930)))));
    #pragma endscop
}

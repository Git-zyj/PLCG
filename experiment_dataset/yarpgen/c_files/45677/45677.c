/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45677
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((!((((((var_7 ? var_10 : var_3))) ? -4144200909925325836 : 16748280358464561820)))));
    var_15 -= var_0;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = ((((!(var_0 <= var_11))) ? var_12 : -4144200909925325836));
        var_17 = ((var_5 ? (((-(max(-1056435346, 8))))) : ((max(1, 11631350108555126897)))));
    }
    for (int i_1 = 3; i_1 < 19;i_1 += 1)
    {
        var_18 = (max(var_18, var_4));
        arr_6 [i_1] = 1056435345;
        var_19 = (max(var_19, -1056435346));
    }
    #pragma endscop
}

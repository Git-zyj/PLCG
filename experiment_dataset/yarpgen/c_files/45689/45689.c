/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45689
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_9 >= (max((var_12 % 4101724121), var_5))));

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_17 = ((((min((arr_0 [i_0 + 1]), (arr_2 [i_0 + 1])))) ? ((((arr_2 [i_0 + 1]) ? (arr_2 [i_0]) : (arr_2 [i_0 + 1])))) : 193243174));
        var_18 &= (arr_2 [8]);
        var_19 = (-((min((arr_0 [i_0 + 1]), (arr_1 [17])))));
        var_20 = (max((arr_1 [i_0 + 1]), (((!(arr_1 [i_0 - 1]))))));
        var_21 = (arr_2 [i_0 + 1]);
    }
    #pragma endscop
}

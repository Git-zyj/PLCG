/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220370
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        var_20 = (7 - 16783);
        var_21 = ((((((!-14690) ? var_3 : (((arr_0 [1]) * var_4))))) ? (min((arr_1 [i_0]), (((arr_0 [i_0]) << (var_9 - 135))))) : (((arr_1 [i_0]) ? (arr_1 [i_0]) : -10733))));
        var_22 -= ((+((((max((arr_3 [1]), var_12))) | ((var_3 ? (arr_3 [i_0]) : var_10))))));
    }
    var_23 += ((268715898 ? (-10733 == 9347422342069420226) : ((16771 ? 17247873096114963804 : 147))));
    #pragma endscop
}

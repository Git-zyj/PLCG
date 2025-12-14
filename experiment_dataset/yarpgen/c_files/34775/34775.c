/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34775
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_11 = min((max((arr_1 [13] [i_0]), (arr_1 [i_0] [i_0]))), ((1816653825 ? 820082602 : 1821542951)));
        var_12 = min((((!2498947963) | ((2901355222 ? (arr_0 [5]) : 1393612071)))), (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [10]))));
        var_13 = arr_0 [i_0];
    }
    var_14 -= max((((var_4 & 285281534) & (min(4246138767, 4246138746)))), (min(var_1, 1116193731)));
    #pragma endscop
}

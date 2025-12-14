/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32198
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 17;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_18 = (((((max(61342, 3688)))) ? (arr_1 [i_0]) : ((-((181 ? 255 : 3684))))));
        arr_2 [i_0] = -58;
        arr_3 [i_0] [i_0] = (((((~(arr_1 [i_0])))) ? (((!(arr_0 [i_0])))) : ((min(181, 33)))));
    }
    var_19 = 16;
    #pragma endscop
}

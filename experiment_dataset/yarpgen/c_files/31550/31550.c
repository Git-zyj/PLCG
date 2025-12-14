/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31550
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_11 = (max((arr_1 [i_0] [21]), ((((min(63, 0))) ? 4294967295 : (((16383 >> (var_2 - 18330))))))));
        arr_2 [i_0] = (max(((max(var_7, var_3))), (((-(max(-1, (arr_1 [i_0] [i_0]))))))));
    }
    var_12 = (min(var_12, ((max(var_5, var_8)))));
    #pragma endscop
}

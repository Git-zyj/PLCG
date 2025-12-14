/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235001
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] = (((((arr_2 [i_0 + 1] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))) | (arr_0 [i_0] [i_0])));
        var_11 = (max(var_11, 16637228253519198141));
    }
    var_12 = var_4;
    var_13 = ((((min(1, 65276)))));
    #pragma endscop
}

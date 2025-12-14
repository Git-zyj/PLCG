/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19732
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_12 += ((0 == ((((arr_0 [i_0]) == -12749)))));
        arr_3 [i_0] [i_0] = var_5;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_6 [i_1] = ((2477836250574680888 | (arr_4 [i_1] [1])));
        var_13 = (min(var_13, (~-107)));
    }
    var_14 = var_9;
    #pragma endscop
}

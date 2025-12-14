/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209039
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = (-127 - 1);
        arr_3 [i_0 - 2] = ((((((-127 - 1) ? (arr_0 [i_0] [i_0 - 2]) : var_6))) && (arr_0 [i_0 - 2] [i_0 + 2])));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        arr_8 [i_1] = 473213389;
        arr_9 [i_1] = (min(0, (min(116, -32429))));
    }
    var_20 = (max(var_15, ((var_8 ? var_7 : ((max(351221942, 1)))))));
    #pragma endscop
}

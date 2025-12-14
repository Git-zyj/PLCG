/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2648
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_16 = (max(var_16, 3118671032));
        arr_4 [i_0] = (~30713);
        var_17 = var_15;
        var_18 = ((!((((arr_1 [i_0] [i_0]) ? (arr_3 [i_0]) : (var_4 / var_4))))));
    }
    var_19 = -24;
    var_20 ^= ((var_9 ? (~var_3) : (((var_6 & 1682460223) & 883598361))));
    var_21 = (-(min(var_3, (max(var_9, var_0)))));
    var_22 = (min(17375815955499011215, -58));
    #pragma endscop
}

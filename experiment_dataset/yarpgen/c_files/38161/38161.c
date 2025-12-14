/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38161
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max((min(1, 393890699)), (((((max(var_10, var_5))) ? ((max(var_9, var_2))) : var_4)))));
    var_18 = (min(var_18, var_0));
    var_19 = ((((!(~var_13))) ? var_9 : (min(54, var_1))));

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (3954397188 % 1132805957);
        var_20 = (arr_1 [i_0]);
        var_21 = (arr_0 [i_0] [i_0]);
    }
    #pragma endscop
}

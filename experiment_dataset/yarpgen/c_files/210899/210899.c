/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210899
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_3, var_10));
    var_19 = min(var_9, (min(((min(var_7, var_4))), (max(var_6, -2305843009213693952)))));

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = -13;
        var_20 = -123;
        var_21 *= (arr_2 [1] [1]);
    }
    var_22 = 2305843009213693951;
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244441
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, ((var_4 ? var_17 : var_15))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_20 += (((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (~4)));
        arr_3 [i_0] = (min((arr_0 [i_0]), 111));
        var_21 -= ((-((4 ? 0 : (arr_1 [i_0] [i_0])))));
    }
    var_22 |= (((((!(((var_16 ? var_18 : 3363628504)))))) << (1839951681 - 1839951660)));
    var_23 = var_4;
    #pragma endscop
}

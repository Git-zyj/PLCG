/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222309
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((min((min(7365319649166783836, -64)), ((max(var_4, 65535))))) > var_9));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((var_7 ? (arr_1 [i_0]) : (arr_1 [i_0]))));
        var_19 = (min(var_19, (((-((((!(arr_0 [i_0] [i_0]))) ? (arr_2 [i_0]) : 1)))))));
    }
    var_20 = var_9;
    var_21 -= (((((((min(var_13, 2147483647))) ? (var_6 & var_14) : var_5))) == (min(0, (max(-7365319649166783836, var_15))))));
    #pragma endscop
}

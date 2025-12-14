/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220662
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 10357425267918175472;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_18 = ((((((max(49784, var_3)) / (((max((arr_2 [i_0]), (arr_2 [i_0])))))))) ? (min(((min(-110, var_4))), ((var_2 ? var_8 : -32749)))) : (min(var_8, (((var_16 ? (arr_1 [i_0] [i_0]) : -96)))))));
        var_19 = (((min((arr_3 [i_0]), (arr_3 [i_0]))) - (arr_1 [i_0] [i_0])));
        var_20 = (max(((-81 ? ((124 ? var_10 : -1)) : (~var_16))), var_9));
    }
    #pragma endscop
}

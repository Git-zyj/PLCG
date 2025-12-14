/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218312
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 0;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_21 = (max(var_15, ((((~-5) / (var_6 >= 1))))));
        var_22 = (((min(var_17, (arr_2 [i_0] [i_0]))) ^ (arr_2 [i_0] [i_0])));
        arr_4 [i_0] [i_0] = (((max(var_3, (var_9 | var_0))) > var_4));
        arr_5 [i_0] [i_0] = (((((var_6 ? -5513506021760693561 : (arr_0 [i_0] [i_0])))) ? (arr_0 [i_0] [i_0]) : (!-5513506021760693561)));
    }
    var_23 -= var_6;
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208254
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((var_0 ? var_9 : (min(640068718, var_7))));
        arr_4 [i_0] = (((1 ? ((8495233139277631023 ? 1365179116508523590 : 7621595897992875741)) : var_9)));
    }
    var_12 = (min(var_3, (((!(((var_9 ? 3654898578 : 1365179116508523590))))))));
    #pragma endscop
}

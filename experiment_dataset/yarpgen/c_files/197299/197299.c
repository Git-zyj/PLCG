/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197299
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        var_19 = (((((var_15 ? (var_15 || var_6) : var_10))) || var_11));
        arr_4 [i_0] = ((((max(var_8, var_17))) ? (max((((arr_1 [i_0]) + 2552056997)), var_16)) : (((max(var_4, var_12))))));
    }
    var_20 = ((~((var_9 ? ((max(var_3, var_5))) : (0 && 2552056997)))));
    #pragma endscop
}

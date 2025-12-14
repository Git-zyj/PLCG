/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235180
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_5;
    var_15 = (((((((max(var_11, var_6))) ^ var_2))) ? var_10 : ((var_4 ? ((-1 ? 6637274700969595210 : 21237)) : (1268349707 | -1540024134)))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [8] = (((((var_4 ? var_6 : var_13))) ? ((((-2079677629 ? 61999 : 93)) >> (!2079677629))) : -2079677635));
        arr_3 [i_0] = ((((var_3 ? var_8 : var_10)) >= (var_5 >= var_3)));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        arr_7 [i_1] = (~var_9);
        arr_8 [i_1] = (~var_4);
    }
    #pragma endscop
}

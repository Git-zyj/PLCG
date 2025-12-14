/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199994
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_13 = (max(var_13, (((min(-var_2, ((var_10 ? var_1 : var_1)))) != ((((!((min(var_11, var_9)))))))))));
        var_14 = ((((max((max(var_1, var_8)), (!var_5)))) ? ((min(var_12, var_2))) : (((var_2 ? var_6 : var_3)))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_15 = (max(var_15, (((((max((((var_4 ? var_10 : var_3))), (max(var_3, var_12))))) ? ((((var_9 ? 51928 : 250)) - 13608)) : (1 + 1))))));
        var_16 = (min(var_16, ((max((((var_6 ? var_3 : var_8))), ((var_3 ? var_2 : var_5)))))));
    }
    var_17 = ((13608 ? 51928 : -12));
    #pragma endscop
}

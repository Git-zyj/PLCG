/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22628
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (1900562424 > 0);

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] = (min(-2674, 1));
        var_16 = (min((min(var_1, (arr_2 [22]))), ((max((arr_2 [i_0]), (arr_2 [i_0]))))));
        var_17 = ((min(var_13, ((max(1, var_2))))));
        var_18 = (min(((-(18142 & var_14))), 719871488));
        arr_4 [i_0] = (max((((5464 || (arr_0 [i_0])))), ((-(var_1 - var_1)))));
    }
    var_19 = ((((((0 || 719871488) ? var_13 : (var_10 || var_8)))) ? var_12 : var_14));
    var_20 = (~-6268002727796412139);
    #pragma endscop
}

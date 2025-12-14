/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50848
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_0;
    var_11 = ((((!(((17704621558993819187 ? 2935326491 : var_1))))) ? ((-((var_5 ? var_0 : var_4)))) : ((max(0, 225)))));
    var_12 = (max(((~(min(var_9, var_7)))), var_1));
    var_13 = (max(var_13, ((min((((((var_3 ? 2022738646 : -108))) | 18446744073709551615)), (((3733163995 ? 0 : var_3))))))));

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = ((((9223372036854775807 - (arr_1 [i_0])) / -3065321900318494857)));
        var_14 = (min(((-(min((arr_1 [i_0 - 3]), var_3)))), (((-(-127 - 1))))));
        arr_3 [i_0 - 3] [i_0] = ((30115 ? -25377 : 23060));
    }
    #pragma endscop
}

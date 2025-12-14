/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202799
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((!var_5) ? var_19 : ((((min(0, 5)) <= var_5)))));
    var_21 = -22;
    var_22 = ((((var_15 ? 5 : ((0 ? 0 : 5)))) | var_0));

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        var_23 = (max(var_23, ((max(((!(arr_3 [i_0 - 2]))), (((arr_3 [i_0 - 1]) < (arr_3 [i_0 - 1]))))))));
        arr_4 [i_0] = (((106 + 248) ? (min(28091, (arr_3 [i_0 - 3]))) : 6));
        var_24 = (min(var_24, (~-25)));
        var_25 = var_4;
    }
    #pragma endscop
}

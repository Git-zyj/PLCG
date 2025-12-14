/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191886
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((min((min(var_16, var_3)), (min(var_4, 4596569370294055001))))) || ((!(!2040)))));
    var_20 = ((((!(((var_14 ? var_3 : var_1))))) ? ((min(var_0, (!var_17)))) : var_11));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_21 = ((min((!49), var_9)));
        var_22 = ((((((var_1 ? 1877163418 : 1438080968))) ? (min(17532063922993466726, var_17)) : var_4)) ^ (((((var_14 ? 23559 : (arr_1 [i_0] [i_0]))) << (((((arr_1 [i_0] [i_0]) ? var_9 : (arr_1 [i_0] [i_0]))) - 32007))))));
    }
    var_23 = ((var_9 >> (var_8 + 911429684)));
    #pragma endscop
}

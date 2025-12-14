/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229471
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_12 && ((((var_0 && -76) ? var_8 : (!var_13))))));
    var_21 = (max((max((max(var_11, var_18)), (((var_4 ? 0 : 1))))), (var_1 & var_15)));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] = (((((((29267 ? var_3 : 0))) ? -var_6 : ((((arr_1 [i_0]) >= var_14))))) ^ (((((min(75, var_7))) < (arr_3 [i_0]))))));
        var_22 = (((arr_1 [i_0]) || ((((arr_0 [i_0]) + -var_13)))));
    }
    var_23 *= (((max(var_0, (((var_4 ? var_3 : var_3)))))) || (min((1 && var_15), (var_15 || -75))));
    #pragma endscop
}

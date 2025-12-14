/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25215
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] [1] = (max((arr_0 [i_0 - 1]), ((-(arr_0 [i_0 + 1])))));
        var_18 = (max(var_18, ((((((((arr_0 [i_0]) ? (arr_0 [i_0]) : var_9)) > (max((arr_0 [i_0]), (arr_0 [i_0]))))) ? (!var_9) : ((var_15 ? (arr_0 [i_0 - 1]) : (arr_1 [i_0 + 1]))))))));
        var_19 = (((((arr_1 [i_0 - 1]) << (((arr_0 [i_0 + 1]) - 621709948402909408)))) >> (((!(arr_1 [i_0 - 1]))))));
    }
    var_20 = var_7;
    #pragma endscop
}

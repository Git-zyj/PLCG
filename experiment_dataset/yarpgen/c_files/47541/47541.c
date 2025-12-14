/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47541
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, (min(var_6, ((var_5 ? -32764 : (max(var_14, var_4))))))));

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_19 = (max((min(1, ((-(arr_0 [3]))))), (((min((arr_1 [i_0 + 2]), (arr_0 [3]))) + (((var_0 ? var_13 : var_17)))))));
        var_20 += (min(((3296643765 ? 3296643765 : 998323508)), ((((arr_1 [i_0 - 1]) > (arr_1 [i_0 - 1]))))));
        arr_2 [11] = (min(((((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])))) ? (((min(1, 1)))) : (((arr_1 [i_0 + 2]) & var_16)))), ((((arr_1 [i_0 + 3]) & 37272)))));
    }
    #pragma endscop
}

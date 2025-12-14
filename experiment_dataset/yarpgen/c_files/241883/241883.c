/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241883
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((var_7 != (var_1 >= var_15))));
    var_21 = -var_8;

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        var_22 |= ((-(min((arr_0 [i_0 - 3]), (arr_1 [i_0 + 2])))));
        arr_2 [i_0] = (min((((arr_1 [i_0 - 1]) - (arr_0 [i_0 - 3]))), ((((arr_1 [i_0]) >= ((((arr_0 [i_0]) << (var_8 - 1346349203)))))))));
    }
    var_23 = (!var_4);
    var_24 = ((-(max(var_12, var_16))));
    #pragma endscop
}

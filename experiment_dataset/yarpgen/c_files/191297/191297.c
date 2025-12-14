/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191297
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, (!0)));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_17 = (arr_1 [i_0]);
        arr_3 [i_0] = (((((((((arr_0 [12] [12]) | (arr_1 [i_0])))) ? (arr_2 [i_0] [0]) : ((29927 ? var_12 : var_1))))) ? (-32760 == var_8) : var_12));
    }
    var_18 = var_5;
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194547
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = var_2;
        arr_3 [i_0] [i_0] = ((min((arr_0 [i_0]), (arr_0 [i_0]))) ? (((arr_0 [i_0]) - (arr_1 [2]))) : -1555);
    }
    var_14 = max((((((106 ? var_12 : var_4))) ? 14501 : (4065875999 % var_4))), var_10);
    var_15 = (((((~((var_0 ? var_12 : var_0))))) == ((var_11 ? -var_8 : (min(var_0, 0))))));
    #pragma endscop
}

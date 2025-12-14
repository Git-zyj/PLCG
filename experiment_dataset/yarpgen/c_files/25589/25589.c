/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25589
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_20 = (max((max((arr_0 [i_0 - 2] [i_0 + 1]), 2063271983800829221)), ((((arr_0 [i_0 - 2] [i_0 - 1]) == 917504)))));
        arr_2 [i_0] [i_0 - 2] = (((((max(112, (arr_0 [i_0] [i_0]))) == 4186483953))) != -1127073389);
        var_21 = var_18;
        var_22 = (min((!1079798063), (arr_0 [i_0 + 1] [i_0 + 1])));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_23 = 3930571901685112474;
        var_24 = (49604 % -123);
    }
    var_25 = ((((max(((1127073382 ? var_11 : -20382)), (var_15 != -1)))) || ((((var_4 ? var_19 : 120))))));
    #pragma endscop
}

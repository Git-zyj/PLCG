/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233694
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_19 = 1581305680;
        arr_2 [i_0] = 1;
        var_20 += (min((min((arr_0 [i_0] [9]), (arr_0 [i_0] [i_0]))), (max(var_12, (arr_0 [i_0] [9])))));
    }
    var_21 = ((!9554330312554544003) ? 6338135740023625185 : var_1);
    var_22 = var_15;
    #pragma endscop
}

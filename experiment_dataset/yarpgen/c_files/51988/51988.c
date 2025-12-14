/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51988
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_16 ? (0 % var_2) : ((((var_2 == 10490194728858230495) != var_13)))));

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_18 = (min(var_18, ((((arr_1 [i_0 + 2]) ? (min((arr_1 [i_0 + 1]), var_9)) : -4527980548408795640)))));
        var_19 *= (((~(arr_1 [i_0 - 1]))));
        var_20 = (min(var_20, ((max(122, 35781)))));
        arr_2 [4] = var_14;
    }
    for (int i_1 = 4; i_1 < 16;i_1 += 1)
    {
        var_21 = (min(var_21, (arr_1 [16])));
        arr_5 [i_1 - 2] [2] = ((((-(((var_11 != (arr_1 [11])))))) == (arr_3 [2])));
    }
    var_22 = var_15;
    var_23 = var_7;
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194850
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_10 = max(49152, (min(var_6, var_3)));
        arr_4 [i_0] [i_0] = var_7;
        var_11 = (max(var_11, -var_6));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        arr_8 [1] = -var_0;
        var_12 = ((var_5 > (var_0 <= var_8)));
        var_13 ^= (max(((-(min(var_2, var_3)))), (((!(var_8 | var_7))))));
    }
    for (int i_2 = 3; i_2 < 14;i_2 += 1)
    {
        var_14 = ((var_7 << ((var_8 >> (var_9 - 10051098469342112354)))));
        var_15 = (min((((min(var_8, var_0)))), (max(var_0, var_2))));
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        var_16 = (min(var_16, (min((min(var_4, var_3)), ((min(var_8, (var_6 ^ var_8))))))));
        var_17 = ((((var_9 & (7668 || 174))) << (!var_3)));
    }
    var_18 = var_7;
    #pragma endscop
}

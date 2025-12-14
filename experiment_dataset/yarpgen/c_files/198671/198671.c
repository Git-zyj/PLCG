/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198671
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_17 = 3345545663;
        var_18 = var_5;
    }
    for (int i_1 = 3; i_1 < 9;i_1 += 1)
    {
        var_19 = (min(var_13, 32566));
        var_20 = (((min((((1 << (((arr_2 [i_1]) - 61327))))), (min(var_1, var_9)))) & 28663));
        var_21 = (min(((-(min(var_1, var_7)))), var_15));
        var_22 = -127;
        var_23 += var_1;
    }
    var_24 = var_11;
    var_25 ^= (((((((max(var_0, 28645))) ? var_0 : var_7))) ? ((((((var_15 ? var_13 : var_11)) >= (13 > -2147483644))))) : (max(((min(var_0, var_0))), (~var_3)))));
    var_26 = (min(var_11, var_6));
    var_27 = 4294967295;
    #pragma endscop
}

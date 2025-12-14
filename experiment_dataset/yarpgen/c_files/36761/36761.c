/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36761
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_18 |= ((((-693295780 ? (arr_0 [i_0]) : (arr_0 [i_0]))) > 1));
        var_19 |= ((((((((var_2 ^ (arr_1 [i_0])))) ? (arr_1 [1]) : (((arr_0 [14]) ? var_7 : var_9))))) ? var_1 : var_13));
        arr_2 [i_0] [5] = var_15;
    }
    var_20 |= -4350;
    var_21 = (min(var_21, var_6));
    #pragma endscop
}

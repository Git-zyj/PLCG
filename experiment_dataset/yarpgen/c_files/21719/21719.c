/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21719
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        arr_4 [i_0] = ((-4360 ? ((-((max(var_11, 1677))))) : (((var_2 >= var_0) - ((((arr_3 [i_0]) == var_4)))))));
        arr_5 [i_0] = (min(19, 32));
    }
    var_14 = var_13;
    #pragma endscop
}

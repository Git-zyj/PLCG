/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217419
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((~(!var_4)));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_11 = (min(var_11, var_9));
        var_12 = (min(((((min(var_7, var_0))) ? (arr_0 [i_0]) : var_9)), var_2));
        arr_4 [1] [i_0] = (((((-(((arr_1 [2] [2]) / var_4))))) ? (arr_2 [i_0] [i_0]) : (((((var_3 ? var_4 : var_9))) + ((1 ? var_3 : 15758))))));
        arr_5 [i_0] = ((max(((var_3 ^ (arr_1 [0] [i_0]))), var_5)));
        arr_6 [i_0] [i_0] = (max((arr_0 [i_0]), var_4));
    }
    var_13 = (((((-70317675 ^ 6022214108569209426) ^ 1)) ^ var_0));
    #pragma endscop
}

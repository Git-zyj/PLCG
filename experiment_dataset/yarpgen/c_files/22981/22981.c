/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22981
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_20 ^= var_19;
        var_21 += (max((((arr_1 [i_0 - 1]) ? (arr_1 [i_0 - 1]) : ((min(var_11, var_13))))), ((max((((var_17 == (arr_1 [i_0])))), (max(21862, (arr_3 [i_0 - 2]))))))));
        var_22 = (min(var_22, (arr_1 [i_0 - 2])));
    }
    var_23 = ((var_3 >> (43656 - 43634)));
    #pragma endscop
}

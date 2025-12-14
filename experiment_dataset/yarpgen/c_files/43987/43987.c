/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43987
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min((max((min(var_0, var_3)), ((max(3460344926, -1))))), (min(((min(2029, 0))), (min(var_13, var_15))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] = 834622370;
        arr_4 [i_0] = 2000754194;
        arr_5 [i_0] = 1;
    }
    var_17 -= (max((min((min(var_7, var_3)), ((min(0, var_14))))), ((max(((min(84, var_2))), (min(834622362, var_8)))))));
    var_18 -= max((min((max(var_15, 834622370)), ((max(1, var_14))))), (max((max(var_3, 0)), (max(var_3, var_14)))));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193979
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_11 = (max(var_11, var_8));
        var_12 = ((50041 % (arr_1 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 14;i_1 += 1)
    {
        arr_5 [i_1 - 1] [i_1] = (arr_0 [i_1 - 2]);
        var_13 = 213;
    }
    var_14 = (+-204);
    var_15 = var_6;
    #pragma endscop
}

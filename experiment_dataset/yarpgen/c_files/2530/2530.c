/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2530
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = (max(((max(var_1, var_5))), (((-((min(var_8, 252))))))));
        var_11 = (max((max(var_5, var_0)), var_2));
        arr_4 [i_0] = (min((~var_7), var_4));
    }
    var_12 ^= ((((((0 ? 254 : var_9)) | ((max(var_3, var_0))))) << (((!(((var_1 ? var_2 : var_10))))))));
    var_13 = max(var_6, (((max(var_3, var_2)))));
    #pragma endscop
}

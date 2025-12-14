/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193115
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = -var_8;
    var_16 = (min(var_4, ((-var_7 ? (32752 / var_7) : ((var_3 ? var_1 : -811412340))))));

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] &= (811412345 < -3066475985225907820);
        arr_4 [i_0] &= var_9;
        arr_5 [i_0] [i_0] = ((((((!(12737797 > var_6))))) - (((min(var_4, var_12)) / ((max(var_6, var_8)))))));
        var_17 = (max(var_17, (min(-var_11, ((var_6 ? -244033937 : var_4))))));
    }
    #pragma endscop
}

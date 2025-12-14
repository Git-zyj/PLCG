/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39148
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= ((+(((28176 & var_13) * (~var_1)))));
    var_19 = var_17;

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_20 = (max(var_20, (((~(min(var_13, 35226)))))));
        arr_4 [i_0] [i_0 - 1] = ((var_11 & ((~((~(arr_3 [i_0 - 2])))))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_7 [i_1] [15] &= (((((~(arr_5 [i_1]))))));
        arr_8 [i_1] = ((((((-226268924 ? var_11 : -226268919))) ? ((-226268924 ? 293775255 : 226268924)) : (((arr_5 [i_1]) ? -824969012 : var_15)))));
        var_21 = ((2870453906 | (((~(arr_6 [i_1]))))));
        arr_9 [i_1] = (+(((arr_6 [i_1]) - 0)));
    }
    #pragma endscop
}

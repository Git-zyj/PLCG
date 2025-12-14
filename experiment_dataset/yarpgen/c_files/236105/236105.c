/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236105
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_9;
    var_16 = var_14;
    var_17 = (min(var_17, var_7));
    var_18 = var_13;

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_19 += var_3;
        var_20 = (-14 ? -99 : ((-(arr_0 [i_0 - 1] [i_0 + 1]))));
        var_21 = -var_12;
        arr_2 [15] = ((+(((arr_0 [i_0 - 2] [i_0 - 2]) ? (arr_0 [i_0 - 1] [i_0 + 1]) : (arr_0 [i_0 - 2] [i_0 - 1])))));
    }
    for (int i_1 = 2; i_1 < 11;i_1 += 1)
    {
        var_22 = 18;
        var_23 = (max(var_23, ((((max(((1 ? (arr_3 [1]) : var_14)), var_13)) <= ((var_12 ? ((var_3 ? (arr_1 [4]) : 62)) : var_14)))))));

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_7 [i_1] [i_1] [3] = ((-(max((arr_5 [i_1 - 2] [13]), 1))));
            arr_8 [i_1] = ((~((min((arr_1 [i_1 - 1]), (arr_1 [i_1 - 2]))))));
        }
    }
    #pragma endscop
}

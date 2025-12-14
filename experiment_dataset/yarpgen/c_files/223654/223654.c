/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223654
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_6;
    var_11 = (min(var_11, var_5));

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_12 &= ((max(((max(var_0, var_6)), (((var_7 + 9223372036854775807) << (((var_7 + 3034893624310777629) - 41))))))));
        arr_2 [i_0] [1] = ((((((arr_1 [6]) ? (arr_1 [i_0]) : var_4)) | (arr_0 [i_0]))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = (max((((var_9 ^ var_1) - (min((arr_0 [i_1]), (arr_4 [i_1]))))), -var_8));
        arr_6 [i_1] [i_1] = (min(((-((min(var_8, var_0))))), (~var_8)));
    }
    var_13 = (max(var_13, ((min(((min(var_6, var_3))), var_6)))));
    #pragma endscop
}

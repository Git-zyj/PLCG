/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39043
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_0;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [12] [i_0] = (((arr_0 [i_0] [i_0]) ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [1])));
        arr_4 [i_0] [1] = (((16380 & 1) | (arr_1 [7] [5])));
        arr_5 [i_0] [9] &= (44 && 13);
    }
    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {
        var_12 = (max(var_12, ((((((var_9 ? (arr_2 [5] [12]) : var_4))) | ((((((arr_0 [i_1] [5]) << (16380 - 16380)))) ? (arr_6 [i_1]) : var_0)))))));
        arr_8 [i_1] = var_7;
    }
    var_13 = ((16380 ? 2109439592 : 1703999248));
    var_14 = (max(var_14, (24273 && 2109439603)));
    var_15 |= ((((-2147483647 - 1) ? 2147483647 : var_4)) | var_1);
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29501
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_14 = (max(var_14, ((((arr_0 [i_0 + 1]) > (((arr_0 [i_0]) | var_13)))))));
        arr_4 [i_0] = ((-14418687819701919412 ? ((((((arr_1 [i_0] [i_0 + 1]) ? var_13 : var_4))) ? -var_12 : ((var_9 ? (arr_0 [i_0 + 1]) : (arr_2 [i_0]))))) : (arr_2 [i_0])));
        var_15 |= (min((max(var_11, ((((arr_3 [i_0]) && (arr_1 [i_0 - 2] [i_0 - 2])))))), var_9));
    }
    for (int i_1 = 2; i_1 < 20;i_1 += 1)
    {
        var_16 += (((((arr_6 [i_1 + 1]) ? (arr_6 [i_1 - 2]) : (arr_6 [i_1 + 1]))) << (((min((arr_6 [i_1]), (arr_5 [5]))) - 49))));
        var_17 = (arr_5 [i_1]);
        var_18 = (arr_5 [i_1 + 3]);
    }
    var_19 = ((16066 ? ((4028056254007632203 ? 2147483647 : 511)) : 2147483647));
    var_20 = (max(var_20, var_9));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44079
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_4;
    var_17 = (max((((var_9 ^ var_11) ? var_15 : (((-17 ? 136 : var_1))))), ((~((var_11 << (((var_2 + 122) - 27))))))));
    var_18 = (((!-13478628872433943848) < var_12));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_19 &= var_4;
        var_20 = (((var_3 & (arr_1 [i_0]))));
        var_21 = (min(var_21, (((-((((arr_1 [i_0]) > var_12))))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_5 [i_1] = ((((max((arr_4 [i_1]), (arr_3 [i_1] [i_1])))) >> (-1983112867277683753 + 1983112867277683769)));
        var_22 = ((!((max((((arr_2 [i_1] [i_1]) ^ (arr_2 [i_1] [i_1]))), (arr_3 [i_1] [i_1]))))));
        arr_6 [i_1] = (max((((var_5 - 1983112867277683777) ? (((arr_2 [i_1] [i_1]) & var_2)) : var_8)), (((max(0, 136))))));
    }
    #pragma endscop
}

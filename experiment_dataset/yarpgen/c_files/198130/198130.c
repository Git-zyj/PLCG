/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198130
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_18 = ((1 >> (((min((arr_0 [i_0]), 126)) - 101))));
        var_19 ^= (min((((arr_0 [i_0 + 1]) - (arr_0 [i_0 - 1]))), ((~(arr_0 [i_0 + 1])))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_20 = ((~((-(arr_3 [i_1] [i_1])))));
        var_21 = ((((max((!-100), (arr_3 [i_1] [i_1])))) == var_10));
        arr_4 [i_1] = -125;
        var_22 = ((-73 ? 6681925218507087903 : -6));
    }
    for (int i_2 = 1; i_2 < 10;i_2 += 1)
    {
        var_23 = (min((arr_7 [i_2 + 2]), (((arr_7 [i_2 + 1]) ? (arr_7 [i_2 + 2]) : (arr_7 [i_2 + 3])))));
        arr_8 [i_2] = (min((min(2367520120, (arr_6 [i_2 + 3]))), ((((min(var_14, var_2))) ? 127 : 126))));
        arr_9 [i_2] = ((max((((4294967281 ? (arr_1 [0]) : (arr_5 [i_2])))), (~-2345594226938512215))));
    }
    var_24 *= (((((min(var_2, var_16)))) ? ((~(11 >= -9662))) : -27226));
    var_25 = (min(-6, (min((var_9 < var_2), var_10))));
    #pragma endscop
}

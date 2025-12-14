/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25844
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_4;
    var_13 = var_11;

    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        arr_2 [i_0] = (-(arr_0 [i_0] [i_0]));
        var_14 = (arr_0 [i_0] [i_0]);
        var_15 = (18446744073709551615 <= var_5);
        arr_3 [i_0] [i_0] = (((var_0 | ((67100672 - (arr_1 [i_0] [i_0]))))));
        var_16 = ((~(max((max((arr_1 [i_0] [8]), (arr_1 [i_0] [i_0 + 3]))), (((2147483639 >> (69 - 57))))))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_17 = ((var_1 * (arr_4 [i_1] [i_1])));
        var_18 = (max(var_18, (((18446744073709551607 && (32757 + var_6))))));
    }
    for (int i_2 = 2; i_2 < 13;i_2 += 1)
    {
        var_19 = (max(var_19, var_6));
        var_20 = ((arr_8 [10]) ? (arr_8 [i_2 + 1]) : (((arr_7 [i_2]) & ((~(arr_7 [i_2]))))));
        arr_9 [i_2 + 1] [i_2 + 2] = (((2147483633 <= var_7) ? (arr_8 [i_2]) : ((((!(arr_8 [i_2 + 2])))))));
    }
    #pragma endscop
}

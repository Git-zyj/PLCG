/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211896
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, 1));
    var_19 = var_2;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_20 = (arr_0 [i_0] [i_0]);
        var_21 = (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_4 [1] [i_1] = 1;
        var_22 = ((~(arr_2 [i_1])));
    }
    for (int i_2 = 2; i_2 < 13;i_2 += 1)
    {
        var_23 = ((-(arr_1 [i_2])));
        var_24 = (((arr_1 [i_2 + 1]) ? (arr_3 [i_2 - 1]) : (((arr_3 [i_2 - 2]) | (arr_3 [i_2 - 2])))));
        var_25 = (max(var_25, ((((arr_3 [i_2]) ? ((min(var_10, 1))) : (((max((arr_5 [i_2]), 0)) & (arr_3 [i_2 - 1]))))))));
        var_26 = (arr_7 [i_2]);
        var_27 = (min((arr_2 [10]), (max(var_13, ((((arr_7 [7]) && (arr_0 [i_2] [4]))))))));
    }
    var_28 = (!(~var_1));
    var_29 &= var_8;
    #pragma endscop
}

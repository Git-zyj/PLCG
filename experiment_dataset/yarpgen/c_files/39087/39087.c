/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39087
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [5] = (((((!(~var_7)))) - (min((0 * var_5), -1))));
        var_11 &= ((((((!0) == var_5))) > (65535 == 1)));
        var_12 = (((((-29 ? 0 : 8))) ? -29 : var_1));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = (((((arr_5 [i_1]) ? var_8 : var_0)) / (arr_3 [i_1])));
        var_13 = (max(var_13, 1));
    }
    for (int i_2 = 4; i_2 < 18;i_2 += 1)
    {
        var_14 = 1;
        var_15 = (1 || 4294967295);
        arr_10 [i_2] = (((((((var_8 ? (arr_3 [i_2]) : var_4)) | ((0 ? -18555 : 71))))) ? (((arr_8 [i_2 - 4]) ? (arr_8 [i_2 - 3]) : (arr_8 [i_2 - 1]))) : (((((((arr_8 [i_2]) != -18555))) != ((max(1, 1))))))));
        var_16 = (((1480040077558624932 || var_9) >> 1));
        var_17 = (min(var_17, (((((14024853643773238942 ? (((max(var_0, 60)))) : 0)) < (((146 ? (arr_7 [i_2 - 3]) : (arr_7 [i_2 - 3])))))))));
    }
    var_18 = var_10;
    #pragma endscop
}

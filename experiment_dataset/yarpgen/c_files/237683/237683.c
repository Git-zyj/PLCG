/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237683
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += -3496832995735956194;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_12 -= (arr_1 [1]);
        var_13 = (max(var_13, (((!((((~(arr_0 [i_0]))) != 0)))))));
        arr_2 [i_0] = ((+((((-8669 | -16) && (arr_0 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_5 [i_1] [i_1] |= 94;
        var_14 = (min(var_14, ((((((-8682 >= (arr_4 [0])))))))));
        var_15 = 1861940826145428079;
        var_16 ^= (arr_4 [3]);
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243254
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((~var_10) ? var_10 : (max(var_4, var_0))))) || -var_1);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (((arr_3 [i_0]) - (arr_3 [i_0])));
        var_13 = ((~(arr_0 [i_0])));
        arr_5 [i_0] = var_9;
    }
    for (int i_1 = 4; i_1 < 19;i_1 += 1)
    {
        arr_8 [i_1] = 0;
        arr_9 [i_1] = ((((max((arr_6 [i_1 - 2]), (max((arr_7 [i_1]), (arr_6 [i_1])))))) - 8168349456670237984));
        var_14 = (max(var_14, (1033246768 || 1)));
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        var_15 = max(1033246763, 137);
        arr_12 [3] = (min(5237414066107779376, -23785910193126282));
        var_16 -= (((arr_6 [i_2]) ? (max(var_8, -1033246790)) : (arr_10 [i_2])));
    }
    #pragma endscop
}

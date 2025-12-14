/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203060
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((var_9 ? ((var_11 ? 18417595445897506505 : 16)) : (min(13711059738497253882, 161))))) || (((var_7 ? var_4 : ((var_1 ? var_8 : 448)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        arr_2 [i_0] |= ((var_9 | (arr_0 [i_0 + 1])));
        var_13 = (min(var_13, (!var_5)));
    }
    for (int i_1 = 2; i_1 < 9;i_1 += 1)
    {
        var_14 |= ((var_2 ? ((65088 ? (65093 ^ -3450663886569567352) : (arr_0 [i_1 - 1]))) : ((((arr_4 [i_1]) ? 0 : ((1 + (arr_5 [i_1 - 2]))))))));
        arr_6 [8] = arr_5 [i_1];
    }
    var_15 = var_2;
    #pragma endscop
}

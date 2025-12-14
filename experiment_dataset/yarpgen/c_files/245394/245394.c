/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245394
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, (((16141979361526460396 ? 1 : 32183)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_15 ^= ((var_3 ? ((~(arr_0 [i_0] [0]))) : (arr_0 [i_0] [i_0])));
        var_16 = (arr_1 [i_0]);
        arr_2 [4] = (2304764712183091216 > -797559167);
    }
    var_17 |= (min((((289084201746512826 ? -23751 : 1))), (((-1831409501 ? var_0 : var_12)))));

    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {
        arr_6 [i_1 - 1] [i_1 + 1] = (min(1, 10939434298079344624));
        arr_7 [i_1] = (arr_5 [i_1]);
        var_18 = (((((~(min((arr_4 [i_1] [i_1 + 1]), var_6))))) ? (arr_4 [i_1] [1]) : var_4));
        var_19 = ((+(((arr_4 [i_1 - 1] [i_1 - 1]) ? (arr_4 [i_1 + 2] [i_1 - 1]) : (arr_4 [i_1 + 1] [i_1 + 2])))));
        var_20 = (((((~(arr_3 [i_1 + 2])))) ? (((!(arr_3 [i_1 + 2])))) : ((min((arr_3 [i_1 - 1]), var_3)))));
    }
    #pragma endscop
}

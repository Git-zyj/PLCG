/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23118
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_10 = min((!var_8), (max((arr_2 [i_0 + 1]), var_0)));
        var_11 = (min((max((((var_2 ? 25751 : var_2))), var_0)), (((-2 < ((var_8 ? var_5 : -2601)))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = var_4;
        var_12 = ((((var_7 ? var_2 : (arr_2 [i_1])))) ? var_7 : (var_4 / var_7));
        var_13 = -123;
        arr_8 [7] [i_1] |= (~-var_2);
    }
    for (int i_2 = 2; i_2 < 17;i_2 += 1)
    {
        arr_11 [i_2] = ((-((((((arr_10 [i_2 - 2]) ? (arr_10 [i_2]) : var_9))) ? (var_6 / -1479731983) : 1479731983))));
        var_14 ^= ((60917 == (((var_9 >= var_3) ? var_8 : ((var_5 ? (arr_9 [i_2 + 2] [i_2 - 1]) : (arr_10 [i_2 - 2])))))));
        var_15 = ((!(((-((50 ? var_3 : var_6)))))));
    }
    var_16 = ((((60917 << ((((1918628313 ? 16153770977208592493 : var_4)) - 16153770977208592482))))) ? ((~(~var_6))) : var_2);
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46058
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = ((!(arr_0 [5])));
        var_15 = (arr_0 [i_0 - 4]);
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 11;i_1 += 1)
    {
        var_16 = -1819372095;
        var_17 *= (((1819372094 ? 130 : 10707217630441295462)));
        arr_5 [i_1 + 1] [i_1] = (((var_4 < var_14) << (((16383 | 49149) - 49122))));
    }
    /* vectorizable */
    for (int i_2 = 4; i_2 < 9;i_2 += 1)
    {
        var_18 = 1;
        arr_8 [i_2] = 3;
    }
    var_19 = min(5, 5);
    #pragma endscop
}

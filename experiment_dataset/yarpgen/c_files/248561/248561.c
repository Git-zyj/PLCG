/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248561
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_2;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_11 = (min(var_11, (((123 ? ((62 ? 254 : (arr_1 [i_0]))) : var_5)))));
        arr_2 [i_0] = (arr_0 [i_0]);
        arr_3 [i_0] = ((var_0 ? 62231 : -1));
        var_12 = (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])));
        var_13 ^= (var_0 & var_6);
    }
    for (int i_1 = 2; i_1 < 20;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = var_6;
        arr_7 [5] [i_1] |= 114;
    }
    var_14 = (212 % -60);
    #pragma endscop
}

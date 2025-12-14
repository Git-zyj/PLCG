/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27610
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= max(((-(11449615364681209345 * 2))), (((var_2 + 11100219936576471169) * 156)));
    var_13 = (max((var_10 == var_2), ((((max(var_3, -3373338910278295099))) ? var_1 : (var_7 <= 26206)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_14 = arr_1 [i_0];
        var_15 = var_11;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_16 = (max((((var_6 && (arr_5 [i_1])))), (arr_5 [i_1])));
        var_17 = var_0;
    }
    #pragma endscop
}

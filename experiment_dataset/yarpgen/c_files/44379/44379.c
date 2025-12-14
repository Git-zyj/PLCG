/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44379
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((max(((108 ? var_15 : var_10)), (var_12 & var_17))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_19 += (((~(max(var_4, (arr_1 [i_0] [i_0]))))));
        var_20 = ((~(822633415 == -11)));
    }
    for (int i_1 = 3; i_1 < 12;i_1 += 1)
    {
        var_21 ^= (arr_4 [i_1]);
        arr_5 [i_1] = (arr_0 [i_1 + 2]);
    }
    /* vectorizable */
    for (int i_2 = 3; i_2 < 18;i_2 += 1)
    {
        var_22 = var_15;
        var_23 = ((((((-987634852786594950 + 9223372036854775807) >> var_17))) ? 1693205770709829783 : 29944));
    }
    var_24 = -var_7;
    #pragma endscop
}

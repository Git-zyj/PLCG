/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248371
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= (max((((-9223372036854775788 + 9223372036854775807) << (((-9223372036854775788 - -9223372036854775785) + 14)))), (max(var_12, var_2))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_14 = ((-9223372036854775780 + (-2147483647 - 1)));
        var_15 = var_7;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_16 = var_3;
        arr_6 [i_1] [i_1] &= (arr_4 [i_1] [i_1]);
        arr_7 [i_1] [1] = var_5;
        arr_8 [8] = (arr_5 [i_1]);
    }
    var_17 = (((max(((max(var_12, -2147483643))), (var_4 + var_3))) < ((max(-6974294935022191574, 3602654143183561232)))));
    var_18 = ((var_12 && ((max(var_0, -8279027018925173437)))));
    #pragma endscop
}

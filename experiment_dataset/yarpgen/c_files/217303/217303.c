/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217303
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_14 = (max(var_14, ((max((min(603435990, var_6)), 14329729021370032112)))));
        var_15 = (min(var_15, (((var_12 != (~var_8))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        arr_4 [7] = ((-603435990 ? (var_6 / var_13) : ((-603435990 ? 29360128 : var_13))));
        var_16 |= 29360128;
        arr_5 [i_1] = (((((var_10 ? 34083 : var_5))) ? var_6 : (~var_7)));
        var_17 = (max(var_17, 247));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        var_18 = ((!(var_1 ^ var_6)));
        var_19 ^= (((var_10 ? var_3 : var_3)) != 1);
        var_20 += ((-(((-9223372036854775807 - 1) ? 2450259304 : 9223372036854775807))));
    }
    var_21 = (min(var_4, (((var_13 ? 31247 : var_1)))));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47768
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= ((((min(((var_4 ? 9223372036854775807 : -20593)), ((((-20603 + 2147483647) << (var_8 - 15481644104578019750))))))) == ((16014619072187000200 ? (~var_7) : var_3))));

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] = ((((~(arr_0 [5] [10]))) == ((((8388352 ? (arr_1 [i_0]) : var_3)) + ((var_7 ? var_8 : 8388353))))));
        var_12 = var_7;
        var_13 = (-9223372036854775807 - 1);
        var_14 = (arr_1 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_15 = 14314041082432902308;
        var_16 *= var_6;
    }
    var_17 = (min(var_10, (((!(~var_5))))));
    #pragma endscop
}

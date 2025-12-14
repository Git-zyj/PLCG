/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52099
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, ((max(((576460683583946752 ? 16 : (-9223372036854775807 - 1))), (((4666827383701241908 || (((8257536 ? -24518 : var_3)))))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_14 = (min(var_14, (arr_0 [i_0])));
        arr_2 [i_0] = 0;
    }
    var_15 = (min(var_15, (((20 - -576460683583946752) > 1))));
    var_16 += (18446744073709551615 < var_1);
    #pragma endscop
}

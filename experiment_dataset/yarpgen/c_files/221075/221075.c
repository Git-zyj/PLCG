/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221075
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_8;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_12 *= (((var_1 | var_1) != (-63 | var_5)));
        var_13 = (min(var_13, var_7));
        arr_3 [i_0 + 1] [i_0 + 1] = ((-90 & (arr_2 [i_0 - 1])));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_14 = (min(var_14, var_1));
        var_15 ^= (!-63);
    }
    var_16 ^= (((~(~-63))));
    #pragma endscop
}

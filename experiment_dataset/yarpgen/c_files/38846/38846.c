/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38846
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_1, var_9));
    var_16 &= 65535;
    var_17 ^= (~var_8);

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_18 = (((min(var_3, var_1)) | (arr_0 [i_0] [i_0])));
        var_19 ^= (((arr_0 [i_0 + 2] [i_0 + 2]) ? 1 : var_12));
        var_20 = (max(var_20, (((var_6 ? ((((arr_0 [i_0] [i_0]) < 1))) : (arr_0 [i_0] [i_0 + 2]))))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_21 = (arr_2 [i_1]);
        var_22 = ((var_4 ? (arr_4 [i_1] [i_1]) : (5660424824437612379 | 1)));
        var_23 -= ((1886805981 ? -588441149403688499 : (min(((var_2 - (arr_3 [i_1]))), var_5))));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 19;i_2 += 1)
    {
        var_24 = var_8;
        var_25 = -2427;
        var_26 = (min(var_26, var_5));
    }
    #pragma endscop
}

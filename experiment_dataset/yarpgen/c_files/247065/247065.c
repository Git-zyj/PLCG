/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247065
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_19 = (min(var_19, 118));
        arr_4 [i_0] = max(((16383 ? 0 : -84)), 83);
    }
    var_20 = 11;

    /* vectorizable */
    for (int i_1 = 3; i_1 < 15;i_1 += 1)
    {

        for (int i_2 = 3; i_2 < 15;i_2 += 1)
        {
            arr_11 [i_1] [i_1] = var_6;
            var_21 = ((-4 ? (arr_2 [i_1 - 1]) : 8191));
        }
        var_22 = (((arr_1 [i_1 - 2]) ? (arr_1 [i_1 + 1]) : (arr_1 [i_1 - 1])));
    }
    var_23 ^= (max((-84 / -69), (((((15623546146082222350 ? var_14 : var_15))) ? ((var_3 ? 7736301101368840725 : 3266245124436037239)) : ((max(var_16, var_17)))))));
    #pragma endscop
}

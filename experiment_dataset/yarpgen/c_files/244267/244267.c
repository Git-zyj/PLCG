/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244267
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += (max((var_3 % -5), (9620108240452298801 / var_10)));
    var_12 = (var_1 ? (max((8543005805195384749 ^ var_10), ((-8543005805195384750 ? -8543005805195384750 : var_7)))) : -1);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 = (0 | 8543005805195384750);
        var_14 = -1067220746;
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 23;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 23;i_2 += 1)
        {
            var_15 = ((var_9 ? 35184372088831 : -39));
            var_16 = (~1765199829);
            arr_9 [i_2] [i_1] = ((-1067220746 ? -1 : 8543005805195384749));
        }
        arr_10 [i_1] [i_1 + 2] = 65535;
        var_17 = 1;
    }
    var_18 &= var_0;
    #pragma endscop
}

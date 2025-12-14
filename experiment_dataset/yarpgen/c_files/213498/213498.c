/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213498
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                var_19 = ((((max(var_18, var_10))) ? ((-119 ? 1 : var_17)) : ((62 ? (-2147483647 - 1) : var_11))));
                var_20 = var_1;
                var_21 = ((((4294967295 >> (96 - 79))) + 1));
                arr_5 [i_1] [i_0] = (((61976 | 25583) * ((0 ? 16318290838821106552 : var_14))));
            }
        }
    }

    for (int i_2 = 1; i_2 < 10;i_2 += 1)
    {
        var_22 |= (((((2147483637 ? 1 : (-2147483647 - 1)))) * (((-2147483647 - 1) / (min(0, -3055842480771129150))))));
        var_23 += ((var_12 != (2967405605 ^ -25590)));
        var_24 ^= (min(var_2, 0));
    }
    var_25 = (max(29096, (((var_17 >= (max(-2147483637, 16318290838821106552)))))));
    #pragma endscop
}

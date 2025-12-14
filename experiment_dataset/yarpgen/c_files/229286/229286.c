/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229286
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_17 = 12425799504835315543;
        var_18 = (!0);
        arr_4 [i_0] [i_0] = 187;
        var_19 += ((~((var_11 ? var_13 : var_2))));
        var_20 ^= var_12;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_21 -= (-621325949 < 1);
        arr_7 [i_1] [i_1] = 1;
    }
    var_22 = var_6;
    var_23 = ((!((((((7234237006300566676 << (13319 - 13319)))) ? (!4057854526) : 3721896885)))));
    var_24 ^= ((-(var_0 / var_4)));
    #pragma endscop
}

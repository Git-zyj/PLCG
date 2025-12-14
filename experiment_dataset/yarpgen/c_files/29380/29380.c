/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29380
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(-2310887447600414928, ((max(var_7, var_12)))));

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_16 = ((+((var_14 ? (var_7 % var_5) : (((((arr_0 [i_0] [i_0]) <= var_6))))))));
        var_17 += -4;
        var_18 = ((-15904 || (8 <= 3469447662)));
        var_19 *= (((var_1 ? 10 : 2)));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {
        var_20 = var_13;
        var_21 ^= (((var_2 <= var_12) - (arr_2 [i_1])));
        var_22 = (149 ^ -957567185);
    }
    for (int i_2 = 2; i_2 < 13;i_2 += 1)
    {
        var_23 = (((9223372036854775807 / (arr_5 [i_2 - 1] [i_2 + 3]))));
        var_24 &= (max(var_8, (arr_2 [i_2 + 4])));
    }
    var_25 = ((60 < (((!195) | var_5))));
    var_26 = (max(var_26, -var_1));
    #pragma endscop
}

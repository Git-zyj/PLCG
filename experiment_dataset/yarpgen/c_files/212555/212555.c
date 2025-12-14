/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212555
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (~143);
        var_16 = ((9223372036854775807 ? ((var_11 ? var_15 : var_8)) : ((9223372036854775793 ? 9223372036854775807 : 9223372036854775800))));
        arr_4 [i_0] = 3;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_17 = (max(var_17, (10187845156404876136 - -2023427414)));
        var_18 *= (((~45274) != 7));
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        var_19 = (18446744073709551615 < ((((((-139272641485375453 ? var_11 : 9223372036854775807)) >= var_1)))));
        var_20 = min(var_11, (1 - 45274));
    }
    var_21 = var_11;
    var_22 = var_3;
    var_23 = ((((min((max(1571976950493455150, 1556941190)), var_3))) ? ((var_8 ? ((-73 ? 209 : 9032548216046210083)) : (max(9223372036854775807, 139272641485375445)))) : var_14));
    #pragma endscop
}

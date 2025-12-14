/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35010
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= (min(((((120 ? 1 : 18446744073709551615)))), 15195144481939519661));

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = 14199;
        arr_3 [i_0] [i_0] = ((((((110 ? 19 : 0)))) ? (6 == -102) : 1310888785));
        arr_4 [i_0] [i_0] = ((!(((98 ? ((32767 ? 243 : -109)) : 32758)))));
        var_14 -= (((2760430711 ? (8125119802107032614 / -6654223286448314841) : (((-35916611 ? 81 : -1))))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_15 = 1;
        var_16 = (((!(((~(-9223372036854775807 - 1)))))));
    }
    var_17 = ((((~(((2084572518 < (-9223372036854775807 - 1)))))) < (!-14)));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47343
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((21064 == ((((max(-16, var_19))) ? ((max(1, var_7))) : (176 | 15993)))));
    var_21 = (~((var_6 ? ((1 ? 18446744073709551613 : var_0)) : ((max(9044972349053033388, var_5))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_4 [1] = var_19;
        var_22 = (min(var_22, ((5404430943788590201 ? (arr_0 [i_0]) : (arr_0 [7])))));
        arr_5 [i_0] = ((-1773779098649461464 ? (arr_1 [i_0] [i_0]) : 174));
        var_23 = (max(var_23, ((((arr_0 [i_0]) ^ (arr_0 [i_0]))))));
        var_24 = ((~(((arr_2 [i_0] [21]) ^ (arr_1 [1] [2])))));
    }
    #pragma endscop
}

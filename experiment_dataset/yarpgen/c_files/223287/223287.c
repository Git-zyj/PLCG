/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223287
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += ((((!(-32767 - 1))) ? var_0 : (((4294967295 < (var_12 && 14))))));
    var_19 -= ((var_9 > (max(var_8, (min(var_13, var_5))))));

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_20 *= -71;
        var_21 = (min(var_21, -1));
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {
        arr_6 [i_1] = arr_4 [1] [i_1];
        var_22 ^= (~var_12);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        arr_11 [i_2] [i_2] = (((arr_7 [i_2]) + (arr_10 [i_2] [i_2])));
        arr_12 [i_2] [i_2] = ((-(arr_9 [i_2] [i_2])));
        var_23 = (!((((arr_8 [i_2]) ? 1 : (arr_9 [i_2] [i_2])))));
        var_24 = (((arr_10 [13] [i_2]) ? (arr_7 [i_2]) : (((-4 ? 1 : (arr_8 [i_2]))))));
    }
    var_25 += (((((~((189 ? 17574529169165935223 : 175097403604642191))))) ? ((1 * (!0))) : var_10));
    var_26 += (min(240418089, var_9));
    #pragma endscop
}

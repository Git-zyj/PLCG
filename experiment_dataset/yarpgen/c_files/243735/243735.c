/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243735
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_10;
    var_14 = (max(var_14, 1));
    var_15 = ((((max(var_2, (max(18446744073709551592, var_2))))) ? ((var_9 * (!var_9))) : ((max(((var_10 ? var_1 : var_2)), (var_8 - var_8))))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_16 = ((15322 ? (arr_1 [i_0 + 3] [i_0]) : (arr_1 [i_0 + 3] [i_0])));
        var_17 = -15323;
        arr_2 [i_0] [18] = arr_0 [i_0];
        arr_3 [i_0] [i_0] = ((15322 ? -24442 : -50));
    }

    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_18 = (arr_0 [i_1]);
        var_19 = (~32767);
        arr_6 [i_1] = (min((((arr_5 [i_1]) ? (arr_5 [i_1]) : (arr_5 [i_1]))), (((arr_5 [i_1]) ? 27832 : (arr_5 [i_1])))));
    }
    #pragma endscop
}

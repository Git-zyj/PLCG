/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41373
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_17 = ((((((((14084 ? (arr_0 [i_0 + 1]) : 1))) ? ((((arr_0 [i_0]) ? -32743 : 75))) : ((32725 / (arr_0 [1])))))) ? (((32730 ? ((-6182 ? 32728 : 198)) : (arr_0 [i_0])))) : (arr_0 [i_0])));
        arr_2 [i_0] = (arr_1 [i_0]);
    }

    /* vectorizable */
    for (int i_1 = 1; i_1 < 11;i_1 += 1)
    {
        arr_6 [i_1] = ((32728 ? 196 : 206));
        var_18 |= ((~(((arr_3 [i_1]) - 1))));
        var_19 = (!206);
    }
    var_20 = ((((min(var_0, ((-67 ? var_7 : var_6))))) ? ((-var_5 ? (193 == var_9) : 1048575)) : ((-var_9 ? (max(915489854, var_7)) : var_7))));
    #pragma endscop
}

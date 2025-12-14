/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242375
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_3 [13] |= (((arr_0 [i_0] [i_0]) ? ((((((arr_2 [i_0]) - var_6))) ? (((arr_2 [i_0]) ? var_9 : var_15)) : (var_4 >= var_1))) : var_8));
        var_17 = ((var_14 + (((var_7 == (((var_0 ? var_13 : (arr_2 [i_0])))))))));
    }
    var_18 |= var_8;
    var_19 = (((((var_0 * var_11) << ((((var_14 << (var_10 + 7343118738612887376))) - 259424223))))) || (((((var_2 ? var_0 : var_13)) << (var_12 > var_2)))));
    var_20 = ((var_3 ? (((var_15 == var_12) ? (0 << 15) : var_13)) : (var_9 < var_2)));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40829
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] [8] = var_0;
        var_11 = (min(var_11, (((arr_2 [i_0]) & -1568831171))));
        arr_4 [i_0] = (((arr_1 [i_0]) - (arr_1 [i_0])));
        var_12 ^= (((~-607662226709934579) || (arr_1 [i_0])));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_13 ^= (((~(arr_2 [i_1]))));
        var_14 = (arr_2 [i_1]);
        arr_7 [i_1] = -607662226709934572;
    }
    var_15 = (max(((max(817537352, 607662226709934578))), -6784686217248210750));
    var_16 = ((var_10 && ((max((var_6 * var_3), var_8)))));
    var_17 = (max(var_3, (var_7 && var_3)));
    #pragma endscop
}

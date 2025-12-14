/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231822
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 9;i_0 += 1) /* same iter space */
    {
        var_14 = (min(var_14, (((18446744073709551615 ? 916961303859861373 : 0)))));
        var_15 *= var_0;
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1) /* same iter space */
    {
        var_16 += (2898491064002389160 ^ 2898491064002389165);
        var_17 = ((((((((var_1 ? var_5 : var_3))) ? (var_5 < var_7) : var_6))) || ((max(((16 ? 1 : 5)), (var_1 || var_9))))));
        var_18 = ((!((((((3002269740 ? 4 : 2430227289))) ? (((var_3 ? var_1 : var_9))) : (max(2898491064002389160, var_1)))))));
        arr_6 [7] [i_1] = ((((max((max(1864740006, 18446744073709551615)), 1864739995))) ? 1 : ((((max(var_6, var_13))) ? (var_12 > var_12) : (min(3773821010744496569, 18446744073709551607))))));
    }
    var_19 = (((((var_0 ? var_2 : ((var_6 ? var_12 : var_1))))) ? var_10 : ((var_8 ? 1 : 4270024585))));
    #pragma endscop
}

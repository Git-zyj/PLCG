/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196803
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_2;
    var_20 = var_13;
    var_21 = (min(131, var_7));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = 18446744073709551608;
        var_22 = (((arr_1 [i_0 - 1]) ? 17048477948417210316 : var_0));
        var_23 = (((((arr_1 [i_0 - 1]) ? (arr_1 [i_0]) : (arr_0 [i_0]))) * -var_14));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = 36853;
        arr_6 [i_1] [i_1] = var_10;
        arr_7 [14] [i_1] = ((((0 | (arr_3 [i_1]))) << var_14));
    }
    for (int i_2 = 1; i_2 < 12;i_2 += 1)
    {
        var_24 = arr_9 [i_2 - 1];
        arr_10 [i_2] = -0;
        var_25 = (((((-2147483630 & (min(2147483629, var_12))))) ? ((((65535 <= var_18) <= (~-2147483640)))) : 577489767));
    }
    #pragma endscop
}

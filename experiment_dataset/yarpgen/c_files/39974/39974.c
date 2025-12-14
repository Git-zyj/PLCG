/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39974
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((((min(11354648582882663257, var_0))) ? 6550288005775718385 : ((127 ? var_15 : var_3))))) < ((var_11 - (min(var_8, var_1))))));

    for (int i_0 = 1; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_17 = var_10;
        arr_2 [i_0] = (((((~(((arr_0 [12] [i_0]) & var_11))))) ? (arr_1 [3]) : (((!var_15) << (((arr_1 [i_0]) - 171))))));
        var_18 = (min(var_18, (((((min(5519844410772042966, (((var_13 ? (arr_1 [i_0 + 1]) : (arr_1 [i_0]))))))) ? ((var_9 ? (min(18446744073709551615, (arr_1 [i_0]))) : (arr_1 [i_0]))) : (max((max(12926899662937508650, (arr_0 [i_0] [i_0]))), 120)))))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 17;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1 + 2] [i_1] = (((arr_0 [5] [i_1]) ? (arr_1 [i_1 - 1]) : (arr_4 [i_1])));
        arr_6 [i_1] [i_1] = (((arr_4 [i_1]) ? (arr_0 [i_1 - 1] [i_1 - 1]) : (arr_0 [i_1 + 1] [i_1 + 2])));
    }
    var_19 = var_13;
    var_20 *= var_1;
    #pragma endscop
}

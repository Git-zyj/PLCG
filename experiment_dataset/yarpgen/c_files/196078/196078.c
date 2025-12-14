/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196078
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        var_14 = (min(var_14, ((((arr_3 [i_0 - 2] [0]) || (arr_2 [i_0]))))));
        var_15 = (arr_3 [i_0] [i_0]);
    }
    for (int i_1 = 2; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_16 = (max(var_16, ((((arr_5 [i_1 + 1]) / var_2)))));
        arr_7 [i_1] [i_1] = var_9;
    }
    for (int i_2 = 2; i_2 < 22;i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] [i_2] = (((arr_6 [i_2 + 1]) & ((18091980212685225308 ? 16273563166620637359 : 54545))));
        arr_12 [i_2] [i_2] = ((~((max(61, (arr_8 [i_2 + 2]))))));
        var_17 = (max(var_17, (((~(((!(arr_8 [i_2 - 2])))))))));
    }
    for (int i_3 = 2; i_3 < 22;i_3 += 1) /* same iter space */
    {
        arr_17 [i_3] [i_3] = ((18446744073709551594 - (((((max(15104, var_8)) < 31582))))));
        var_18 = (max(var_18, ((((((((arr_6 [i_3]) && 1)) && (arr_5 [i_3 - 1]))) ? var_3 : (((arr_9 [i_3 + 2]) ? (arr_10 [i_3] [i_3]) : var_2)))))));
    }
    var_19 = -110;
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32574
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= ((var_10 ? (((255 != (!-3131769142970922194)))) : ((min((!var_9), (min(var_9, 0)))))));

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        arr_2 [i_0] = (max(((243 ? (min(-3061314004239451344, 18446744073709551604)) : (arr_0 [i_0 + 1]))), ((max((((arr_1 [i_0]) & (arr_1 [i_0]))), var_10)))));
        var_13 = (min(var_13, ((min(var_4, (((!((((arr_0 [i_0]) ? var_6 : 127)))))))))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        arr_5 [i_1] [13] = 711833291;
        arr_6 [i_1] = ((var_10 ? var_9 : (arr_3 [i_1 - 1])));
        arr_7 [i_1] [i_1] = (arr_4 [i_1 - 1] [i_1 - 1]);
        var_14 *= 18341797711731015206;
        var_15 = (((arr_3 [i_1]) / (arr_4 [i_1] [i_1 - 1])));
    }
    var_16 = (max((((var_6 == (min(var_8, var_8))))), ((((var_1 ? var_6 : var_9)) ^ var_1))));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40284
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0 - 1] [i_0] = (arr_1 [i_0 - 1]);
        arr_4 [i_0] = (((arr_1 [13]) ? ((0 ? (arr_0 [i_0]) : (arr_1 [i_0]))) : 32759));
        var_14 += (((((arr_1 [i_0 + 1]) >= 4064)) ? (arr_1 [i_0]) : 1396976107));
    }
    for (int i_1 = 2; i_1 < 20;i_1 += 1)
    {
        arr_7 [i_1 + 3] = (!1396976107);
        arr_8 [2] = max((((arr_5 [i_1 + 2]) ? var_6 : 1396976124)), ((((arr_5 [i_1 + 3]) < (arr_5 [i_1 + 2])))));
        arr_9 [i_1] [i_1] = ((((((~(arr_5 [i_1 + 1]))) + 9223372036854775807)) << (((max((max(2897991188, var_13)), ((var_9 ? var_13 : 83075978)))) - 2897991188))));
    }
    var_15 = (max(var_15, 1396976107));
    var_16 = ((var_3 ? (-9223372036854775807 - 1) : ((((max(var_7, var_5))) ? ((var_8 ? var_4 : var_4)) : var_11))));
    #pragma endscop
}

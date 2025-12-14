/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29114
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_6;
    var_21 = (var_7 == var_1);
    var_22 = ((var_11 && ((((var_4 | 642044890614548529) + var_8)))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_23 += (((arr_0 [i_0] [i_0 - 1]) % (arr_1 [i_0])));
        var_24 = (max(var_24, (arr_1 [i_0])));
        var_25 += (arr_1 [i_0 + 1]);
        arr_2 [i_0] = (arr_0 [i_0 - 1] [i_0 - 1]);
    }
    var_26 = (min(var_26, var_5));
    #pragma endscop
}

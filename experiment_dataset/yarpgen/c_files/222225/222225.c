/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222225
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += 1;
    var_14 = var_0;

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_15 = (max(var_15, ((min((arr_1 [i_0 + 1]), (max((((arr_1 [i_0 + 1]) ? var_0 : 0)), (var_2 > var_3))))))));
        var_16 = (max((max(var_6, 536868864)), var_11));
        arr_2 [i_0] = ((((50959 ? ((11 ? var_5 : var_1)) : -114)) != (((max((arr_1 [i_0 + 1]), -4096))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_17 = (min(var_17, ((((arr_3 [i_1]) ? (arr_4 [i_1] [i_1]) : 6)))));
        var_18 = var_11;
    }
    var_19 -= -2;
    #pragma endscop
}

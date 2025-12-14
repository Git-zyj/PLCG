/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232104
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 = 1;
        var_14 = ((-(3955071073 - 1)));
        var_15 |= ((1670556246 - (((var_10 ? 200 : var_3)))));
        var_16 = -30;
    }
    for (int i_1 = 1; i_1 < 11;i_1 += 1)
    {
        arr_7 [i_1] [i_1] &= 58;
        var_17 -= ((-63 ? ((max(var_2, (arr_0 [i_1 - 1])))) : ((((arr_4 [i_1 - 1]) < var_4)))));
        arr_8 [i_1] = ((var_5 + (65535 ^ 0)));
        var_18 -= 534030282915890706;
    }
    var_19 = (min(var_9, 226));
    #pragma endscop
}

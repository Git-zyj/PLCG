/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23487
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_0;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] |= (~var_0);
        var_12 = (max(var_12, (((var_4 || var_9) ? var_10 : -1))));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_13 = var_7;
        var_14 *= (max(((((((var_2 ? var_3 : 1))) || (!var_7)))), -49));
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        arr_8 [16] [i_2] = (((var_2 ? 9007199254740991 : var_4)));
        arr_9 [i_2] = (((var_10 ? 21809 : var_3)));
        var_15 = (min(var_15, (((var_9 ? (max(((min(var_10, -110))), var_1)) : (((var_7 ? -39 : var_9))))))));
        arr_10 [i_2] = (((((var_0 ? var_8 : var_9))) | ((var_6 ? (-16 <= var_6) : var_10))));
        var_16 = (max(var_16, (((65 ? (((-21823 ^ 3627039707879272444) & 9957658145310422163)) : 4294967295)))));
    }
    var_17 = (((((var_3 ? (min(9957658145310422163, var_8)) : (((var_0 ? var_6 : var_10)))))) ? (max((max(var_0, var_10)), ((min(var_2, var_4))))) : var_6));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227589
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_13 = (((1 * 0) ? (0 > 1) : 1));
        var_14 = ((~((1 ? ((1 ? 1 : 1)) : 0))));
        arr_2 [i_0] [i_0] = (((1 >> 1) * (1 < 1)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = 1;
        arr_8 [i_1] = 0;
    }
    var_15 = 0;
    var_16 = (min(var_16, var_6));
    #pragma endscop
}

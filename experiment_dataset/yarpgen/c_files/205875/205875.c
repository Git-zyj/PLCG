/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205875
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((-1 ? -1 : ((((var_9 == var_14) << ((1 ? 10 : -1)))))));

    for (int i_0 = 3; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_19 *= (((((((arr_1 [i_0]) ? var_13 : -32755))) == -1)));
        var_20 = 0;
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_21 = ((6 - ((var_8 ? 0 : -1))));
        var_22 = (max(var_22, (arr_4 [i_1 - 2] [i_1 + 2])));
        var_23 = (((arr_4 [i_1] [i_1 + 2]) && (!10)));
    }
    #pragma endscop
}

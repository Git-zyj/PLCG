/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234784
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= var_11;

    /* vectorizable */
    for (int i_0 = 4; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_20 = (arr_0 [i_0]);
        var_21 = (1754534237 | 2540433059);
        arr_2 [i_0] = 225;
    }
    for (int i_1 = 4; i_1 < 15;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] [i_1 - 3] = (!4011281408);
        arr_7 [i_1 - 1] = 2050618395;
        var_22 = (arr_5 [i_1 + 3]);
    }
    #pragma endscop
}

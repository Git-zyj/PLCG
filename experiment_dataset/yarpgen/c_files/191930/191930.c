/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191930
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_10 = ((var_1 && (!var_4)));
        var_11 |= (((!3336820236) * (((!var_5) - (arr_0 [i_0 + 2])))));
        var_12 = (max(var_12, (((((arr_0 [i_0 + 2]) * (arr_0 [i_0 + 1])))))));
        arr_3 [i_0] = ((-(max((arr_1 [i_0 - 1]), (arr_1 [i_0 + 2])))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 23;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1 + 2] [i_1] = ((-32 ? 0 : -37));
        arr_7 [i_1 - 2] = (arr_5 [i_1] [i_1]);
    }
    var_13 = -202;
    #pragma endscop
}

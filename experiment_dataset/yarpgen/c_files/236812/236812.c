/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236812
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= 32767;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_11 = ((min((((arr_1 [i_0]) ? var_8 : var_4)), (~var_9))));
        var_12 = (max(((32738 ? ((var_6 ? (arr_2 [i_0]) : var_7)) : (~var_1))), (((!(!var_8))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_13 = (max(var_13, var_2));
        var_14 -= (((((18310254334460555404 ? 799893975 : var_7))) ? (arr_4 [i_1]) : var_7));
        arr_7 [i_1] = (arr_4 [i_1]);
        var_15 = (max(var_15, (((+((((arr_6 [22]) || 1))))))));
        var_16 = (~-3509369300447822688);
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50866
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_19 = (max(((~(arr_1 [i_0]))), ((~((max(var_8, var_6)))))));
        var_20 &= (arr_1 [i_0]);
        var_21 &= (max(10540477142304525090, 9223372036854775807));
        var_22 = (min((((var_11 || ((max(10540477142304525090, 75)))))), -67));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = (~-67);
        arr_7 [i_1] = (!var_2);
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
    {
        var_23 ^= (max(205, -1));
        var_24 = ((!(((arr_10 [i_2]) && (arr_10 [i_2])))));
        arr_11 [1] = (!var_16);
        var_25 = ((~(min(var_2, var_5))));
    }
    var_26 = var_12;
    var_27 = ((var_17 >> (var_6 + 88)));
    var_28 = var_17;

    for (int i_3 = 1; i_3 < 18;i_3 += 1)
    {
        var_29 = (min(75, 109));
        arr_16 [i_3] [i_3] = var_4;
        arr_17 [i_3] [i_3] = max((~var_14), ((max((arr_15 [i_3] [i_3]), var_5))));
    }
    #pragma endscop
}

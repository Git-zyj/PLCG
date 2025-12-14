/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26148
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (var_6 - -929634340);
    var_15 = (-(((min(var_6, -8092922510175676258)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((9172988456130690692 ? var_8 : var_7));
        var_16 = -5449396686347935665;
        var_17 = (arr_0 [i_0] [i_0]);
        arr_3 [i_0] = (arr_1 [i_0] [i_0]);
    }
    for (int i_1 = 1; i_1 < 16;i_1 += 1)
    {
        arr_7 [i_1] = (i_1 % 2 == 0) ? (((!((((((arr_6 [i_1] [i_1]) + 2147483647)) >> (((((((arr_6 [i_1] [i_1]) + 2147483647)) >> (((arr_4 [11] [i_1]) - 38)))) - 54070)))))))) : (((!((((((arr_6 [i_1] [i_1]) + 2147483647)) >> (((((((((arr_6 [i_1] [i_1]) + 2147483647)) >> (((arr_4 [11] [i_1]) - 38)))) - 54070)) + 1872))))))));
        var_18 = (min(var_18, var_11));
    }
    var_19 = (max(var_19, var_11));
    #pragma endscop
}

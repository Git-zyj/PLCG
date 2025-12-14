/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199426
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = -746563477;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = var_4;
        arr_3 [i_0] [i_0] = (((!-6893) ? -84 : (arr_1 [i_0] [i_0])));
        var_11 &= (((arr_0 [i_0] [i_0]) ? 2087969236 : (arr_0 [i_0] [i_0])));
    }
    var_12 = (((((var_6 / (-2147483647 - 1)))) ? (21 - 32757) : ((var_2 ? var_8 : var_4))));
    var_13 = (((min(((((-32767 - 1) < 59947))), var_7)) & var_0));
    var_14 -= (((((!var_4) != var_6)) ? var_7 : (((var_6 || (var_5 || -254))))));
    #pragma endscop
}

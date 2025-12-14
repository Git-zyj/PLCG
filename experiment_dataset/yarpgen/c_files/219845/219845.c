/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219845
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_7, (((var_17 ? 4294967295 : var_12)))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        arr_3 [i_0] = ((!(((3551407983567527030 ? -5620225873054641226 : 3485585011)))));
        arr_4 [i_0] = (((arr_1 [i_0 + 1]) >= (arr_1 [i_0 - 1])));
    }
    #pragma endscop
}

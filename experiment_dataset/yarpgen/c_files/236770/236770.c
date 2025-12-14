/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236770
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0 - 1] = (arr_1 [i_0 - 1]);
        var_13 = (((arr_1 [i_0 - 1]) ? var_9 : var_11));
        var_14 = (((arr_0 [i_0 - 1]) ? 24788 : 40738));
    }
    var_15 = ((((((var_7 ? 18106216475780893620 : 24785))) ? (max(var_6, 1357124565)) : 340527597928657995)));
    var_16 = (max((!var_9), -var_7));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220195
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_4 [1] [1] = ((!(!var_10)));
        var_17 = ((13236370963815174522 ? var_6 : (arr_0 [i_0])));
    }
    var_18 = (min(var_2, ((0 ? var_4 : (((var_16 ? var_14 : var_11)))))));
    var_19 = (max(var_19, (((~(~var_12))))));
    var_20 = var_12;
    var_21 ^= var_9;
    #pragma endscop
}

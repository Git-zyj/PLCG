/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203391
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = min((((var_17 ? var_15 : 325038907))), ((max((var_3 < var_14), -var_2))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_4 [i_0] [16] = ((((((arr_1 [i_0]) ? 1 : 9007198986305536))) ? var_3 : (((var_3 ? var_16 : var_9)))));
        var_20 -= (((30413 <= 45148) ? (((12 ? -127 : 24984))) : var_6));
    }
    var_21 = (((((var_7 / (((var_7 ? 65534 : 65534)))))) ? var_3 : ((((!var_18) >> ((((3847233023 ? var_15 : var_12)) - 4)))))));
    #pragma endscop
}

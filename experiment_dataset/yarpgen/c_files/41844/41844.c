/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41844
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_15 = var_14;
        arr_4 [i_0] [2] = ((!((((arr_0 [i_0]) ? var_2 : var_5)))));
    }
    var_16 = ((((min(-2147483637, 3879802448))) ? (min(var_2, (max(415164853, var_6)))) : (((((((var_8 ? var_7 : var_14))) || var_10))))));
    var_17 = (max((min((var_5 <= var_12), (min(var_8, 3879802448)))), var_13));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42396
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((min(-87, var_10)) >= (~3915221586297492847))) ? (min(-3583213012958623748, -3583213012958623757)) : var_2));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_14 = (min(var_14, ((((arr_1 [i_0]) == (var_8 < -9630))))));
        var_15 += 3583213012958623725;
        var_16 = (~1);
        var_17 = ((-(arr_1 [i_0])));
    }
    var_18 = var_5;
    var_19 = ((3583213012958623725 ? 9223372036854775792 : 18224702321350226859));
    var_20 = var_7;
    #pragma endscop
}

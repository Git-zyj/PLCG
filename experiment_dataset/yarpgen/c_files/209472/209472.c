/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209472
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_3;
    var_13 = 61477;
    var_14 -= (((var_8 ? ((-12 ? var_3 : var_9) : var_7))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = ((var_8 ? (max(var_5, (-1452060489 * 0))) : (var_3 || var_4)));
        var_15 = ((((((((min(-12, 12)))) != (arr_2 [i_0])))) + -26));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_16 = (min((min((min(var_2, 5737309218939143983)), var_2)), ((min(((var_9 ? -813494636 : (arr_5 [i_1] [i_1]))), (arr_4 [13] [i_1]))))));
        var_17 = (max(var_17, var_5));
        var_18 *= var_2;
    }
    #pragma endscop
}

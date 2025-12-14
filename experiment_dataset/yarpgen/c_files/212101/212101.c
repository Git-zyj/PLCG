/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212101
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        var_12 = (((((max(var_9, -8593422357965170151))) ? 24518499 : -8593422357965170161)));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_13 = var_0;
            var_14 -= (((8593422357965170137 + 2147483647) >> (4128350245669068460 - 4128350245669068451)));
            var_15 = ((-95 ? (arr_0 [i_0 - 2] [i_0 + 2]) : var_3));
            var_16 = (max(var_16, (((var_0 ? var_0 : ((10244 ? var_9 : var_6)))))));
        }
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        var_17 = (((((var_0 ? var_1 : 4128350245669068460))) ? (max((min(6028957830791893623, var_4)), (1718316702 & 1))) : (var_8 | var_11)));
        var_18 = (min(-49, ((((min(2576650593, var_11)) > 2135419212301245414)))));
        var_19 = var_0;
    }
    var_20 -= (max(var_10, var_1));
    var_21 = 7052105349037183566;
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4233
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_9;
    var_15 = ((1 ? var_2 : 1));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = var_4;
        var_17 -= min(((var_8 ? (max(1, 16)) : var_10)), ((((arr_0 [i_0]) & var_5))));
        arr_3 [i_0] = ((((max(((min(255, 0))), 9223372036854775797))) ? (~-255) : (((arr_0 [i_0]) ? (!var_10) : 2147483647))));

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            arr_7 [i_0] = (max(((min(var_9, 4294967279))), ((((var_9 / var_10) ^ (arr_4 [i_0]))))));
            var_18 = (max(var_10, (arr_5 [i_1] [i_1] [i_1])));
        }
    }
    var_19 = ((((var_9 - (min(255, 4294967289)))) >> (((((var_11 - var_13) ? (var_10 * var_7) : ((18446744073709551612 >> (2147483647 - 2147483624))))) - 18446744073674145651))));
    #pragma endscop
}

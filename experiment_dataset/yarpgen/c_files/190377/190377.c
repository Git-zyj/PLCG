/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190377
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((((var_11 & var_5) + 9223372036854775807)) << (var_8 - 946561126643099695))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_13 = (min(var_13, 588316833));

        for (int i_1 = 4; i_1 < 24;i_1 += 1)
        {
            var_14 = (((((max(var_0, 0))) != -3)));
            arr_4 [i_0] [i_0] [i_0] = (!0);
        }
        var_15 = -13;
    }
    #pragma endscop
}

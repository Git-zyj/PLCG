/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243411
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_11 & (((var_11 ? var_11 : var_1)))));
    var_13 = var_10;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            var_14 ^= (((arr_3 [i_1 - 1]) > (!var_1)));
            var_15 = 528960514;
            arr_5 [i_0] [i_1] = (-9223372036854775807 - 1);
        }
        var_16 = ((45775 ? (arr_1 [i_0 - 2] [i_0 - 1]) : (arr_3 [i_0 - 1])));
        var_17 = ((arr_3 [i_0]) ? 5702446837986215202 : ((4220810984 ? var_1 : (arr_1 [8] [i_0]))));
    }
    #pragma endscop
}

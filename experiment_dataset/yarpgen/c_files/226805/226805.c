/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226805
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((var_6 ? var_6 : 14498))) ? ((var_1 ? ((max(var_15, var_3))) : (var_5 - var_4))) : var_0));
    var_19 = (min(var_19, var_3));

    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        var_20 += ((arr_0 [i_0 - 2]) ? (((((arr_1 [i_0]) ? 14521 : (arr_1 [i_0]))) - (arr_0 [i_0 - 4]))) : (((((arr_1 [i_0]) ? 14498 : var_4)) ^ (((((arr_1 [i_0 + 1]) || -14502)))))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_21 += -14505;
            var_22 = (max(var_11, (arr_1 [i_1])));
        }
        arr_4 [i_0] = -14503;
    }
    for (int i_2 = 4; i_2 < 17;i_2 += 1)
    {
        var_23 -= (((arr_5 [i_2 + 2]) - ((((arr_1 [i_2]) > ((min(14498, var_15))))))));
        var_24 = ((((((14498 == var_17) ? (((arr_0 [i_2]) ? (arr_5 [i_2 + 3]) : (arr_5 [i_2]))) : ((max((arr_0 [i_2]), -14512)))))) ? ((min((min(-14498, var_6)), 14502))) : ((((arr_1 [i_2 - 2]) != (arr_1 [i_2 + 2]))))));
    }
    #pragma endscop
}

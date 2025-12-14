/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51320
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_20 = ((max((min(var_11, var_8)), var_19)));
            var_21 = ((var_10 << (((min((max(var_16, (arr_4 [1] [i_1] [1]))), (arr_4 [9] [i_1] [12]))) + 1689907892))));
        }
        var_22 = (arr_1 [i_0]);
        var_23 += ((((((max(var_7, 178499010))) ? (min((arr_4 [17] [i_0] [i_0]), 673635954)) : (arr_5 [i_0] [17] [i_0]))) + (arr_0 [i_0])));
    }
    var_24 = var_19;
    #pragma endscop
}

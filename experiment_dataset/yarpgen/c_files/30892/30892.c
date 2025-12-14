/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30892
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            arr_7 [i_1] = var_12;
            var_18 = (max(var_18, (arr_1 [i_1])));
            arr_8 [i_1] [i_1] = ((!(((var_10 ? 549755813887 : (arr_2 [i_1]))))));
        }
        arr_9 [i_0] [i_0] = ((((2223 ? 1073676288 : 102)) < (arr_5 [i_0] [4])));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_19 = (arr_12 [i_2]);
        var_20 = ((-(arr_4 [i_2] [6] [i_2])));
        var_21 *= -807576425;
    }
    var_22 = (min(var_22, (65535 ^ 0)));
    var_23 = (max(var_23, var_14));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196220
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_18 = (arr_2 [i_0] [i_0]);

        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            var_19 = ((-((1 ? 1 : -385265292))));
            arr_7 [i_1] = ((-((((((arr_0 [i_1]) + (arr_0 [i_1])))) ? (arr_2 [i_1 + 3] [i_1 + 2]) : ((0 / (arr_0 [i_0])))))));
        }
        var_20 = (arr_1 [i_0] [i_0]);
        var_21 = (((18446744073709551615 ? (arr_0 [i_0]) : var_9)));
    }
    var_22 = (max(var_22, var_11));
    var_23 = var_14;
    #pragma endscop
}

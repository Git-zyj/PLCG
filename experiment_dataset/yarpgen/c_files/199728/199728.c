/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199728
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (-(((((max(var_3, var_13))) || ((max(var_11, var_14)))))));
    var_16 += 730;

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = ((((~(~64805))) >= ((((((698527107722899395 > (arr_1 [10])))) < (arr_1 [i_0 + 1]))))));
        var_17 = (max(var_17, ((max((max(51946, 13950136585021840442)), var_7)))));
        var_18 = (max(((~(arr_0 [i_0 - 2]))), ((((((arr_0 [i_0]) ? var_13 : -22))) ? (max((arr_0 [i_0]), var_9)) : (arr_1 [i_0])))));
    }
    var_19 = (((var_14 / var_3) ? -var_0 : (((((var_12 ? 13589 : var_6))) ? ((max(730, var_9))) : 31524))));
    #pragma endscop
}

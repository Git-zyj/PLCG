/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22972
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((147033411 ? var_3 : (((((var_12 ? var_3 : var_1))) ? var_6 : ((var_7 ? var_5 : 0))))));
    var_15 = var_6;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_16 = -9806;
        arr_3 [i_0] = 0;
    }
    for (int i_1 = 2; i_1 < 22;i_1 += 1)
    {
        var_17 = arr_5 [i_1] [i_1 - 1];
        var_18 = (max(var_18, (max((max((arr_4 [i_1 + 1]), ((max((arr_5 [8] [8]), -8241469835871162680))))), (min((min((arr_4 [i_1]), (arr_4 [i_1]))), (arr_5 [i_1] [i_1])))))));
        var_19 = (min(((((((-(-32767 - 1)))) ? 65535 : ((3521979091 ? var_13 : var_9))))), (max(0, (((arr_4 [i_1]) % var_5))))));
    }
    for (int i_2 = 3; i_2 < 17;i_2 += 1)
    {
        var_20 = (~8241469835871162680);
        var_21 += var_8;
    }
    var_22 = var_11;
    #pragma endscop
}

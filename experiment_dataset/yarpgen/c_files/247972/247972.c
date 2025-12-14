/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247972
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_18 = (((((~(arr_2 [16])))) ? (~46) : ((-(arr_2 [i_0])))));
        arr_3 [i_0] = ((!(((arr_2 [i_0 + 1]) || ((((arr_2 [i_0 - 1]) - 65535)))))));
        var_19 = ((!(!46)));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_20 = (((arr_4 [i_1]) ? (((!27908) ? ((((arr_1 [i_1]) != 1))) : (arr_2 [i_1]))) : ((((arr_5 [i_1]) < (arr_4 [12]))))));
        var_21 = var_5;
        arr_7 [i_1] [i_1] = 15302003964427822068;
        var_22 = (arr_4 [1]);
        var_23 = ((((((max((arr_0 [i_1]), var_8))) || -47)) ? ((+(((arr_6 [i_1]) ? 250 : -71)))) : (!1)));
    }
    var_24 = ((max(var_8, ((min(var_16, var_2))))));
    var_25 = var_4;
    #pragma endscop
}

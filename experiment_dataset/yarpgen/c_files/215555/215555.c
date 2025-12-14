/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215555
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, (!var_10)));
    var_15 -= (min(var_10, (1 != 14406000262950050910)));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_16 = 15;
        arr_3 [i_0] = ((2476067678 ? 130 : 31153));
    }
    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = ((~(((!(((31168 ? 31162 : 2555665116))))))));
        arr_9 [i_1] = (((arr_5 [i_1]) != ((((arr_7 [i_1 - 1] [i_1 - 1]) < 34371)))));
    }
    var_17 = var_5;
    var_18 = ((min(-9223372036854775787, 57833)));
    #pragma endscop
}

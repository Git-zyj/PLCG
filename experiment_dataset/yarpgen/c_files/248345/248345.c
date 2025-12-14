/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248345
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_11;
    var_16 *= var_6;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((!(((arr_0 [i_0]) || 252))));
        var_17 = (max(var_17, ((((((arr_1 [i_0] [i_0]) ? (((arr_0 [7]) ? var_2 : (-2147483647 - 1))) : ((((arr_1 [i_0] [i_0]) >= var_14)))))) ? var_1 : (((var_7 == 0) ? ((((!(arr_1 [13] [13]))))) : (min(var_9, var_6))))))));
        var_18 = (max(var_18, (((((((arr_1 [i_0] [i_0]) > (arr_0 [i_0])))) | (!-27008))))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_19 = ((arr_3 [i_1] [i_1]) ? (((arr_4 [i_1] [i_1]) & 18446744073709551615)) : (1 || 60));
        var_20 |= ((~(arr_6 [i_1] [12])));
        var_21 = (min(1, (min(45173, (min(62206, 507542860411416131))))));
    }
    var_22 = (~var_9);
    #pragma endscop
}

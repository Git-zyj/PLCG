/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51394
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= (var_11 + var_6);

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            arr_6 [i_0] = ((((((~(arr_5 [i_0])))) ? ((min(var_6, (-32767 - 1)))) : ((14561 ? var_9 : var_12)))) * (arr_2 [i_0] [i_1]));
            arr_7 [i_0] |= ((~((max((arr_1 [i_1 + 1]), 16383)))));
            arr_8 [11] [11] = (max((min((arr_3 [i_1] [i_1 + 1] [i_1 - 1]), var_15)), (~var_6)));
        }
        var_19 = (max(19363, (arr_3 [i_0] [i_0] [i_0])));
        var_20 = ((min((arr_4 [i_0] [i_0] [5]), -var_13)));
    }
    var_21 = ((((max(-19352, ((var_0 ? 16383 : var_14))))) ? (var_9 > -49) : var_16));
    #pragma endscop
}
